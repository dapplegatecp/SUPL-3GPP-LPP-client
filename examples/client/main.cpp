#include <args.hpp>
#include <format/ctrl/cid.hpp>
#include <format/ctrl/identity.hpp>

#include <loglet/loglet.hpp>
#include <lpp/assistance_data.hpp>
#include <lpp/messages/provide_location_information.hpp>

#include <arpa/inet.h>
#include <thread>
#include <unistd.h>

#ifdef DATA_TRACING
#include <datatrace/datatrace.hpp>
#endif

#include "processor/control.hpp"
#include "processor/location_information.hpp"
#include "processor/lpp.hpp"
#include "processor/nmea.hpp"
#include "processor/ubx.hpp"

#if defined(INCLUDE_GENERATOR_RTCM)
#include "processor/lpp2frame_rtcm.hpp"
#include "processor/lpp2rtcm.hpp"
#endif

#if defined(INCLUDE_GENERATOR_SPARTN)
#include "processor/lpp2spartn.hpp"
#endif

#if defined(INCLUDE_GENERATOR_TOKORO)
#include "processor/tokoro.hpp"
#endif

#include "client.hpp"

#define LOGLET_CURRENT_MODULE "client"

static void client_connected(Program& program, lpp::Client& client) {
    if (!program.cell) {
        ERRORF("internal error: no cell information");
        return;
    }

    program.assistance_data_session = client.request_assistance_data({
        program.config.assistance_data.type,
        *program.cell.get(),
        [&program](lpp::Client&, lpp::Message message) {
            INFOF("provide assistance data (non-periodic)");
            program.stream.push(std::move(message));
        },
        [&program](lpp::Client&, lpp::PeriodicSessionHandle, lpp::Message message) {
            INFOF("provide assistance data (periodic)");
            program.stream.push(std::move(message));
        },
        [](lpp::Client&, lpp::PeriodicSessionHandle) {
            INFOF("request assistance data (started)");
        },
        [](lpp::Client&, lpp::PeriodicSessionHandle) {
            INFOF("request assistance data (ended)");
        },
    });

    if (program.config.location_information.unsolicited) {
        TODOF("unsolicited location information");
    }
}

static void client_initialize(Program& program, lpp::Client& client) {
    client.on_connected = [&program](lpp::Client& client) {
        INFOF("connected to LPP server");
        client_connected(program, client);
    };

    client.on_disconnected = [](lpp::Client&) {
        INFOF("disconnected from LPP server");
        // TODO: reconnect
    };

    client.on_request_location_information = [](lpp::Client&, lpp::TransactionHandle const&,
                                                lpp::Message const&) {
        INFOF("request location information");
        return false;
    };

    client.on_provide_location_information =
        [&program](lpp::Client& client, lpp::LocationInformationDelivery const& delivery,
                   lpp::messages::ProvideLocationInformation& data) {
            INFOF("provide location information");

            if (program.config.location_information.fake.enabled) {
                DEBUGF("using simulated location information");

                lpp::LocationInformation info{};
                info.time     = ts::Tai::now();
                info.location = lpp::LocationShape::ha_ellipsoid_altitude_with_uncertainty(
                    program.config.location_information.fake.latitude,
                    program.config.location_information.fake.longitude,
                    program.config.location_information.fake.altitude,
                    lpp::HorizontalAccuracy::to_ellipse_68(1, 1, 0),
                    lpp::VerticalAccuracy::from_1sigma(1));

                program.latest_location_information           = info;
                program.latest_location_information_submitted = false;
            }

            if (program.latest_location_information.has_value()) {
                if (program.latest_location_information_submitted) {
                    DEBUGF("location information already submitted");
                    return false;
                }

                data.location_information = program.latest_location_information.const_value();
                data.gnss_metrics         = program.latest_gnss_metrics;
                program.latest_location_information_submitted = true;
                return true;
            }

            DEBUGF("no location information available");
            return false;
        };
}

static void initialize_inputs(Program& program, InputConfig const& config) {
    for (auto const& input : config.inputs) {
        format::nmea::Parser*    nmea{};
        format::ubx::Parser*     ubx{};
        format::ctrl::Parser*    ctrl{};
        format::lpp::UperParser* lpp_uper{};

        if ((input.format & INPUT_FORMAT_NMEA) != 0) nmea = new format::nmea::Parser{};
        if ((input.format & INPUT_FORMAT_UBX) != 0) ubx = new format::ubx::Parser{};
        if ((input.format & INPUT_FORMAT_CTRL) != 0) ctrl = new format::ctrl::Parser{};
        if ((input.format & INPUT_FORMAT_LPP) != 0) lpp_uper = new format::lpp::UperParser{};

        DEBUGF("input  %p: %s%s%s%s", input.interface.get(),
               (input.format & INPUT_FORMAT_UBX) ? "ubx " : "",
               (input.format & INPUT_FORMAT_NMEA) ? "nmea " : "",
               (input.format & INPUT_FORMAT_CTRL) ? "ctrl " : "",
               (input.format & INPUT_FORMAT_LPP) ? "lpp " : "");

        if (!nmea && !ubx && !ctrl && !lpp_uper) {
            WARNF("-- skipping input %p, no format specified", input.interface.get());
            continue;
        }

        if (nmea) program.nmea_parsers.push_back(std::unique_ptr<format::nmea::Parser>(nmea));
        if (ubx) program.ubx_parsers.push_back(std::unique_ptr<format::ubx::Parser>(ubx));
        if (ctrl) program.ctrl_parsers.push_back(std::unique_ptr<format::ctrl::Parser>(ctrl));
        if (lpp_uper)
            program.lpp_uper_parsers.push_back(std::unique_ptr<format::lpp::UperParser>(lpp_uper));

        input.interface->schedule(program.scheduler);
        input.interface->callback = [&program, nmea, ubx, ctrl,
                                     lpp_uper](io::Input&, uint8_t* buffer, size_t count) {
            if (nmea) {
                nmea->append(buffer, count);
                for (;;) {
                    auto message = nmea->try_parse();
                    if (!message) break;
                    program.stream.push(std::move(message));
                }
            }

            if (ubx) {
                ubx->append(buffer, count);
                for (;;) {
                    auto message = ubx->try_parse();
                    if (!message) break;
                    program.stream.push(std::move(message));
                }
            }

            if (ctrl) {
                ctrl->append(buffer, count);
                for (;;) {
                    auto message = ctrl->try_parse();
                    if (!message) break;
                    program.stream.push(std::move(message));
                }
            }

            if (lpp_uper) {
                lpp_uper->append(buffer, count);
                for (;;) {
                    auto message = lpp_uper->try_parse();
                    if (!message) break;
                    XDEBUGF("lpp/msg", "create %p", message);
                    auto lpp_message = lpp::Message{message};
                    program.stream.push(std::move(lpp_message));
                }
            }
        };
    }
}

static void initialize_outputs(Program& program, OutputConfig const& config) {
    VSCOPE_FUNCTION();

    bool lpp_xer_output  = false;
    bool lpp_uper_output = false;
    bool nmea_output     = false;
    bool ubx_output      = false;
    bool ctrl_output     = false;
    // TODO(ewasjon): bool spartn_output   = false;
    // TODO(ewasjon): bool rtcm_output   = false;
    for (auto& output : config.outputs) {
        DEBUGF("output %p: %s%s%s%s%s%s%s", output.interface.get(),
               (output.format & OUTPUT_FORMAT_UBX) ? "ubx " : "",
               (output.format & OUTPUT_FORMAT_NMEA) ? "nmea " : "",
               (output.format & OUTPUT_FORMAT_SPARTN) ? "spartn " : "",
               (output.format & OUTPUT_FORMAT_RTCM) ? "rtcm " : "",
               (output.format & OUTPUT_FORMAT_CTRL) ? "ctrl " : "",
               (output.format & OUTPUT_FORMAT_LPP_XER) ? "lpp-xer " : "",
               (output.format & OUTPUT_FORMAT_LPP_UPER) ? "lpp-uper " : "");

        if ((output.format & OUTPUT_FORMAT_LPP_XER) != 0) lpp_xer_output = true;
        if ((output.format & OUTPUT_FORMAT_LPP_UPER) != 0) lpp_uper_output = true;
        if ((output.format & OUTPUT_FORMAT_NMEA) != 0) nmea_output = true;
        if ((output.format & OUTPUT_FORMAT_UBX) != 0) ubx_output = true;
        if ((output.format & OUTPUT_FORMAT_CTRL) != 0) ctrl_output = true;
        // TODO(ewasjon): if ((output.format & OUTPUT_FORMAT_SPARTN) != 0) spartn_output = true;
        // TODO(ewasjon): if ((output.format & OUTPUT_FORMAT_RTCM) != 0) rtcm_output = true;
    }

    if (lpp_xer_output) program.stream.add_inspector<LppXerOutput>(config);
    if (lpp_uper_output) program.stream.add_inspector<LppUperOutput>(config);
    if (nmea_output) program.stream.add_inspector<NmeaOutput>(config);
    if (ubx_output) program.stream.add_inspector<UbxOutput>(config);
    if (ctrl_output) program.stream.add_inspector<CtrlOutput>(config);
}

static void setup_location_stream(Program& program) {
    if (program.config.location_information.use_ubx_location) {
        if (program.ubx_parsers.empty()) {
            WARNF("location from UBX enabled but no UBX input is configured");
        }

        DEBUGF("location from UBX enabled");
        program.stream.add_inspector<UbxLocation>(program.config.location_information);
    }

    if (program.config.location_information.use_nmea_location) {
        if (program.nmea_parsers.empty()) {
            WARNF("location from NMEA enabled but no NMEA input is configured");
        }

        DEBUGF("location from NMEA enabled");
        program.stream.add_consumer<NmeaLocation>(program.config.location_information);
    }

    if (program.config.location_information.use_ubx_location ||
        program.config.location_information.use_nmea_location) {
        program.stream.add_inspector<LocationCollector>(program);
        program.stream.add_inspector<MetricsCollector>(program);
    } else {
        WARNF("location information requires UBX or NMEA location");
    }
}

static void setup_control_stream(Program& program) {
    if (program.ctrl_parsers.empty()) {
        DEBUGF("no input with control messages, control messages will be ignored");
        return;
    }

    auto ctrl_events = program.stream.add_inspector<CtrlEvents>();
    if (!ctrl_events) {
        WARNF("failed to create control events inspector, control messages will be ignored");
        return;
    }

    ctrl_events->on_cell_id = [&program](format::ctrl::CellId const& cell) {
        supl::Cell new_cell{};
        if (cell.is_nr()) {
            new_cell = supl::Cell::nr(cell.mcc(), cell.mnc(), cell.tac(), cell.cell());
        } else {
            new_cell = supl::Cell::lte(cell.mcc(), cell.mnc(), cell.tac(), cell.cell());
        }

        auto cell_changed = !program.cell || (*program.cell.get() != new_cell);
        program.cell.reset(new supl::Cell(new_cell));

        if (new_cell.type == supl::Cell::Type::GSM) {
            WARNF("GSM is not supported");
        } else if (new_cell.type == supl::Cell::Type::LTE) {
            INFOF("cell: LTE %" PRIi64 ":%" PRIi64 ":%" PRIi64 ":%" PRIu64 " %s",
                  new_cell.data.lte.mcc, new_cell.data.lte.mnc, new_cell.data.lte.tac,
                  new_cell.data.lte.ci, cell_changed ? "(changed)" : "");
        } else if (new_cell.type == supl::Cell::Type::NR) {
            INFOF("cell: NR %" PRIi64 ":%" PRIi64 ":%" PRIi64 ":%" PRIu64 " %s",
                  new_cell.data.nr.mcc, new_cell.data.nr.mnc, new_cell.data.nr.tac,
                  new_cell.data.nr.ci, cell_changed ? "(changed)" : "");
        } else {
            WARNF("unsupported cell type");
        }

        if (cell_changed && program.cell) {
            if (!program.assistance_data_session.is_valid()) {
                WARNF("cell id received, but no assistance data session is active (this is normal "
                      "if you're waiting for the cell at startup)");
                return;
            } else if (!program.client) {
                WARNF("cell id received, but no client is active (--ls-disable is set)");
                return;
            }

            if (!program.client->update_assistance_data(program.assistance_data_session,
                                                        *program.cell.get())) {
                WARNF("failed to update assistance data with new cell");
            }
        }
    };

    ctrl_events->on_identity_imsi = [&program](format::ctrl::IdentityImsi const& identity) {
        if (program.identity) {
            WARNF("identity already set, ignoring new identity");
            return;
        }

        program.identity = std::unique_ptr<supl::Identity>(
            new supl::Identity(supl::Identity::imsi(identity.imsi())));
    };
}

static void setup_lpp2osr(Program& program) {
#if defined(INCLUDE_GENERATOR_RTCM)
    if (program.config.lpp2rtcm.enabled) {
        program.stream.add_inspector<Lpp2Rtcm>(program.config.output, program.config.lpp2rtcm);
    }

    if (program.config.lpp2frame_rtcm.enabled) {
        program.stream.add_inspector<Lpp2FrameRtcm>(program.config.output,
                                                    program.config.lpp2frame_rtcm);
    }
#endif
}

static void setup_lpp2spartn(Program& program) {
#if defined(INCLUDE_GENERATOR_SPARTN)
    if (program.config.lpp2spartn.enabled) {
        program.stream.add_inspector<Lpp2Spartn>(program.config.output, program.config.lpp2spartn);
    }
#endif
}

static void setup_tokoro(Program& program) {
#if defined(INCLUDE_GENERATOR_TOKORO)
    if (program.config.tokoro.enabled) {
        program.stream.add_inspector<Tokoro>(program.config.output, program.config.tokoro,
                                             program.scheduler);
    }
#endif
}

int main(int argc, char** argv) {
#if defined(FORCE_LOG_LEVEL_VERBOSE)
    loglet::set_level(loglet::Level::Verbose);
#elif defined(FORCE_LOG_LEVEL_DEBUG)
    loglet::set_level(loglet::Level::Debug);
#elif defined(FORCE_LOG_LEVEL_INFO)
    loglet::set_level(loglet::Level::Info);
#elif defined(FORCE_LOG_LEVEL_WARNING)
    loglet::set_level(loglet::Level::Warning);
#elif defined(FORCE_LOG_LEVEL_ERROR)
    loglet::set_level(loglet::Level::Error);
#endif

    INFOF("S3LC Client (" CLIENT_VERSION ")");

    Config config{};
    if (!config::parse(argc, argv, &config)) {
        return 1;
    }

    loglet::set_level(config.logging.log_level);
#if !defined(DEBUG)
#error "DEBUG must be defined"
#endif
    VERBOSEF("verbose logging enabled");
    for (auto const& [module, level] : config.logging.module_levels) {
        loglet::set_module_level(module.c_str(), level);
    }

    config::dump(&config);

    Program program{};
    program.config = std::move(config);

#ifdef DATA_TRACING
    if (program.config.data_tracing.enabled) {
        datatrace::initialize(program.config.data_tracing.device,
                              program.config.data_tracing.server, program.config.data_tracing.port,
                              program.config.data_tracing.username,
                              program.config.data_tracing.password);
    }
#endif

    program.stream = streamline::System{program.scheduler};

    initialize_inputs(program, program.config.input);
    initialize_outputs(program, program.config.output);

    setup_location_stream(program);
    setup_control_stream(program);

    setup_lpp2osr(program);
    setup_lpp2spartn(program);
    setup_tokoro(program);

    if (program.config.location_server.enabled) {
        if (program.config.identity.wait_for_identity) {
            INFOF("waiting for identity");

            if (program.config.identity.imsi || program.config.identity.msisdn ||
                program.config.identity.ipv4) {
                WARNF("identity from command line will be ignored");
            }

            if (program.ctrl_parsers.empty()) {
                ERRORF("no input with control messages, cannot wait for identity");
                return 1;
            }

            program.scheduler.execute_while([&program] {
                return program.identity == nullptr;
            });
        }

        if (!program.identity) {
            if (program.config.identity.imsi) {
                program.identity = std::unique_ptr<supl::Identity>(
                    new supl::Identity(supl::Identity::imsi(*program.config.identity.imsi)));
            } else if (program.config.identity.msisdn) {
                program.identity = std::unique_ptr<supl::Identity>(
                    new supl::Identity(supl::Identity::msisdn(*program.config.identity.msisdn)));
            } else if (program.config.identity.ipv4) {
                uint8_t ipv4[4];
                if (inet_pton(AF_INET, program.config.identity.ipv4->c_str(), ipv4) != 1) {
                    ERRORF("invalid IPv4 address: %s", program.config.identity.ipv4->c_str());
                    return 1;
                }

                program.identity =
                    std::unique_ptr<supl::Identity>(new supl::Identity(supl::Identity::ipv4(ipv4)));
            } else {
                ERRORF("you must provide an identity to connect to the location server");
                return 1;
            }
        }

        if (program.config.assistance_data.wait_for_cell) {
            INFOF("waiting for cell information");
            if (program.ctrl_parsers.empty()) {
                ERRORF("no input with control messages, cannot wait for cell information");
                return 1;
            }

            program.scheduler.execute_while([&program] {
                return !program.cell;
            });
        } else {
            program.cell.reset(new supl::Cell{program.config.assistance_data.cell});
        }

        if (program.config.location_server.slp_host_cell) {
            if (!program.cell) {
                ERRORF("cell information is required when using --slp-host-cell");
                return 1;
            }

            // h-slp.%03d.%03d.pub.3gppnetwork.org
            char buffer[256];
            snprintf(buffer, sizeof(buffer),
                     "h-slp.%03" PRIi64 ".%03" PRIi64 ".pub.3gppnetwork.org",
                     program.cell->data.nr.mcc, program.cell->data.nr.mnc);
            program.config.location_server.host = buffer;
            INFOF("generated host: \"%s\"", program.config.location_server.host.c_str());
        } else if (program.config.location_server.slp_host_imsi) {
            if (!program.identity) {
                ERRORF("identity information is required when using --slp-host-imsi");
                return 1;
            } else if (program.identity->type != supl::Identity::Type::IMSI) {
                ERRORF("identity must be of type IMSI when using --slp-host-imsi");
                return 1;
            }

            auto imsi   = program.identity->data.imsi;
            auto digits = std::to_string(imsi).size();
            if (digits < 6) {
                throw args::ValidationError("`imsi` must be at least 6 digits long");
            }

            auto mcc = (imsi / (int64_t)std::pow(10, digits - 3)) % 1000;
            auto mnc = (imsi / (int64_t)std::pow(10, digits - 6)) % 1000;

            // h-slp.%03d.%03d.pub.3gppnetwork.org
            char buffer[256];
            snprintf(buffer, sizeof(buffer),
                     "h-slp.%03" PRIi64 ".%03" PRIi64 ".pub.3gppnetwork.org", mcc, mnc);
            program.config.location_server.host = buffer;
            INFOF("generated host: \"%s\"", program.config.location_server.host.c_str());
        }

        auto client = new lpp::Client{
            *program.identity,
            program.config.location_server.host,
            program.config.location_server.port,
        };
        program.client.reset(client);

        client_initialize(program, *client);
        client->schedule(&program.scheduler);
    }

    program.scheduler.execute();
    return 0;
}
