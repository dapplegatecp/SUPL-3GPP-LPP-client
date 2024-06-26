#include "data.hpp"
#include "decode.hpp"
#include "generator.hpp"
#include "message.hpp"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreserved-macro-identifier"
#pragma GCC diagnostic ignored "-Wreserved-identifier"
#pragma GCC diagnostic ignored "-Wundef"
#pragma GCC diagnostic ignored "-Wold-style-cast"
#include <GNSS-ID.h>
#include <GNSS-SSR-GriddedCorrection-r16.h>
#include <GNSS-SSR-STEC-Correction-r16.h>
#include <GridElement-r16.h>
#include <STEC-ResidualSatElement-r16.h>
#include <STEC-ResidualSatList-r16.h>
#include <STEC-SatElement-r16.h>
#include <STEC-SatList-r16.h>
#include <TropospericDelayCorrection-r16.h>
#pragma GCC diagnostic pop

#include <algorithm>
#include <cmath>

namespace generator {
namespace spartn {

uint32_t HpacSatellite::prn() const {
    // NOTE(ewasjon): 3GPP LPP defines PRN starting at 0 instead of 1.
    return static_cast<uint32_t>(id + 1);
}

void HpacSatellite::add_correction(STEC_SatElement_r16* new_stec) {
    if (!new_stec) return;
    stec = new_stec;
}

void HpacSatellite::add_correction(long grid_id, STEC_ResidualSatElement_r16* residual) {
    if (!residual) return;
    residuals[grid_id] = residual;
}

std::vector<HpacSatellite> HpacCorrections::satellites() const {
    std::unordered_map<long, HpacSatellite> satellites;

    if (stec) {
        auto& list = stec->stec_SatList_r16.list;
        for (int i = 0; i < list.count; i++) {
            auto element = list.array[i];
            if (!element) continue;

            auto  id        = element->svID_r16.satellite_id;
            auto& satellite = satellites[id];
            satellite.id    = id;
            satellite.add_correction(element);
        }
    }

    if (gridded) {
        // NOTE(ewasjon): This grid id (grid-point id) is not the absolute id. To get the absolute
        // id you need to reference the correction point set bitmask.
        long  grid_id = 0;
        auto& list    = gridded->gridList_r16.list;
        for (int i = 0; i < list.count; i++) {
            auto element = list.array[i];
            if (element) {
                if (element->stec_ResidualSatList_r16) {
                    auto& sat_list = element->stec_ResidualSatList_r16->list;
                    for (int j = 0; j < sat_list.count; j++) {
                        auto sat_element = sat_list.array[j];
                        if (!sat_element) continue;

                        auto  id        = sat_element->svID_r16.satellite_id;
                        auto& satellite = satellites[id];
                        satellite.id    = id;
                        satellite.add_correction(grid_id, sat_element);
                    }
                }
            }

            grid_id++;
        }
    }

    // Convert to vector
    std::vector<HpacSatellite> result;
    for (auto& kv : satellites) {
        result.push_back(kv.second);
    }

    // Sort by satellite id
    std::sort(result.begin(), result.end(), [](HpacSatellite const& a, HpacSatellite const& b) {
        return a.id < b.id;
    });

    return result;
}

void HpacData::set_ids(std::vector<uint16_t>& ids) const {
    for (auto& kvp : mKeyedCorrections) {
        auto set_id = kvp.first.set_id;
        if (std::find(ids.begin(), ids.end(), set_id) == ids.end()) {
            ids.push_back(set_id);
        }
    }
}

std::vector<uint16_t> CorrectionData::set_ids() const {
    std::vector<uint16_t> set_ids;
    for (auto& kvp : mHpacData) {
        kvp.second.set_ids(set_ids);
    }

    return set_ids;
}

std::vector<uint16_t> CorrectionData::iods() const {
    std::vector<uint16_t> iods;
    for (auto& kvp : mOcbData) {
        auto iod = kvp.first;
        if (std::find(iods.begin(), iods.end(), iod) == iods.end()) {
            iods.push_back(iod);
        }
    }

    for (auto& kvp : mHpacData) {
        auto iod = kvp.first;
        if (std::find(iods.begin(), iods.end(), iod) == iods.end()) {
            iods.push_back(iod);
        }
    }

    std::sort(iods.begin(), iods.end());
    return iods;
}

bool CorrectionData::find_gad_epoch_time(uint16_t iod, SpartnTime* epoch_time) const {
    SpartnTime time{};
    bool       found = false;

    auto hpac = mHpacData.find(iod);
    if (hpac != mHpacData.end()) {
        auto& hpac_data = hpac->second;
        for (auto& kvp : hpac_data.mKeyedCorrections) {
            auto& corrections = kvp.second;
            // NOTE(ewasjon): The GAD message is constellation-less, thus the epoch time that will
            // be used should be GPS time.
            if (corrections.gnss_id != 0) continue;
            if (!found || corrections.epoch_time > time) {
                time  = corrections.epoch_time;
                found = true;
            }
        }
    }

    if (found && epoch_time) {
        *epoch_time = time;
    }

    return found;
}

void CorrectionData::add_correction(long gnss_id, GNSS_SSR_GriddedCorrection_r16* gridded) {
    if (!gridded) return;
    auto  iod  = static_cast<uint16_t>(gridded->iod_ssr_r16);
    auto& hpac = mHpacData[iod];

    auto epoch_time = spartn_time_from(gridded->epochTime_r16);
    auto set_id     = static_cast<uint16_t>(gridded->correctionPointSetID_r16);
    auto key        = HpacKey{set_id, gnss_id, mGroupByEpochTime ? epoch_time.rounded_seconds : 0};

    auto& corrections      = hpac.mKeyedCorrections[key];
    corrections.gnss_id    = gnss_id;
    corrections.iod        = iod;
    corrections.set_id     = set_id;
    corrections.epoch_time = epoch_time;
    corrections.gridded    = gridded;
}

void CorrectionData::add_correction(long gnss_id, GNSS_SSR_STEC_Correction_r16* stec) {
    if (!stec) return;
    auto  iod  = static_cast<uint16_t>(stec->iod_ssr_r16);
    auto& hpac = mHpacData[iod];

    auto epoch_time = spartn_time_from(stec->epochTime_r16);
    auto set_id     = static_cast<uint16_t>(stec->correctionPointSetID_r16);
    auto key        = HpacKey{set_id, gnss_id, mGroupByEpochTime ? epoch_time.rounded_seconds : 0};

    auto& corrections      = hpac.mKeyedCorrections[key];
    corrections.gnss_id    = gnss_id;
    corrections.iod        = iod;
    corrections.set_id     = set_id;
    corrections.epoch_time = epoch_time;
    corrections.stec       = stec;
}

static bool within_range(double min, double max, double value) {
    if (value < min) return false;
    if (value > max) return false;
    return true;
}

static uint8_t compute_troposphere_block_type(GNSS_SSR_GriddedCorrection_r16 const* ptr) {
    // If we're missing the troposphere correction, return 0=none
    if (!ptr) return 0;

    // NOTE(ewasjon): SPARTN supports three types of troposphere corrections:
    // 0 = none
    // 1 = polynomial
    // 2 = polynomial + grid
    //
    // Because 3GPP LPP doesn't have a polynomial, only values for each grid point, we can only
    // support type 0 and 2. Another problem is 3GPP LPP has greater controller over the grid
    // point values. Where some values can be missing, this doesn't work with SPARTN.

    // TODO(ewasjon): [low-priority] Are we losing potential corrections by filtering them out due
    // to missing troposphere correction for a grid point? This should be investigated.
    auto& list = ptr->gridList_r16.list;
    for (int i = 0; i < list.count; i++) {
        auto element = list.array[i];
        if (!element) continue;
        if (element->tropospericDelayCorrection_r16) continue;

        // Missing troposphere correction for grid point,
        // as we can't handle this, return 0=none
        return 0;
    }

    return 2;
}

static uint8_t compute_ionosphere_block_type(GNSS_SSR_STEC_Correction_r16 const*   stec,
                                             GNSS_SSR_GriddedCorrection_r16 const* gridded) {
    // If we're missing the ionosphere correction, return 0=none
    if (!stec) return 0;

    // We have a gridded correction, so we use both the polynomial and the grid
    if (gridded) {
        return 2;
    }

    // If we're missing the gridded correction, we only use the polynomial
    // for the ionosphere correction.
    return 1;
}

static double compute_average_zentith_delay(GNSS_SSR_GriddedCorrection_r16 const& data) {
    double total_zenith_delay = 0.0;
    double count              = 0.0;

    auto& list = data.gridList_r16.list;
    for (int i = 0; i < list.count; i++) {
        auto element = list.array[i];
        if (!element) continue;
        if (!element->tropospericDelayCorrection_r16) continue;

        auto& grid_point = *element->tropospericDelayCorrection_r16;
        auto  residual   = decode::tropoWetVerticalDelay_r16(grid_point.tropoWetVerticalDelay_r16);
        total_zenith_delay += residual;
        count++;
    }

    return total_zenith_delay / count;
}

static void troposphere_data_block(MessageBuilder&                       builder,
                                   GNSS_SSR_GriddedCorrection_r16 const& data, int sf042_override,
                                   int sf042_default, bool use_average_zenith_delay,
                                   bool calculate_sf051) {
    // NOTE(ewasjon): Use a polynomial of degree 0, as we don't have a polynomial in 3GPP
    // LPP. This will result in a constant value for the troposphere correction.
    builder.sf041(0 /* T_00 */);

    if (sf042_override >= 0) {
        uint8_t value = sf042_override > 7 ? 7 : static_cast<uint8_t>(sf042_override);
#ifdef SPARTN_DEBUG_PRINT
        printf("  sf042: %d [override]\n", value);
#endif
        builder.sf042_raw(value);
    } else if (data.troposphericDelayQualityIndicator_r16) {
        // TODO(ewasjon): Refactor as function in decode namespace
        auto& quality = *data.troposphericDelayQualityIndicator_r16;
        auto  cls     = (quality.buf[0] >> 3) & 0x7;
        auto  val     = quality.buf[0] & 0x7;
        auto  q       = pow(3, cls) * (1 + static_cast<double>(val) / 4.0) - 1;
        auto  q_meter = q / 1000.0;
#ifdef SPARTN_DEBUG_PRINT
        printf("  sf042: %f\n", q_meter);
#endif
        builder.sf042(q_meter);
    } else {
#ifdef SPARTN_DEBUG_PRINT
        printf("  sf042: %d [default]\n", sf042_default);
#endif
        uint8_t value =
            sf042_default < 0 ? 0 : (sf042_default > 7 ? 7 : static_cast<uint8_t>(sf042_default));
        builder.sf042_raw(sf042_default);
    }

    // NOTE(ewasjon): SPARTN have an average hydrostatic delay for all grid points. 3GPP LPP only
    // have hydrostatic delay per grid point. Thus, we need to compute the average.
    auto&  list                  = data.gridList_r16.list;
    double hydrostatic_delay_sum = 0;
    double grid_count            = 0;
    for (int i = 0; i < list.count; i++) {
        auto element = list.array[i];
        if (!element) continue;
        if (!element->tropospericDelayCorrection_r16) continue;

        auto& grid_point = *element->tropospericDelayCorrection_r16;
        auto  hydrostatic_delay =
            decode::tropoHydroStaticVerticalDelay_r16(grid_point.tropoHydroStaticVerticalDelay_r16);
        hydrostatic_delay_sum += hydrostatic_delay;
        grid_count++;
    }

    auto hydrostatic_delay_avg = hydrostatic_delay_sum / grid_count;
    builder.sf043(hydrostatic_delay_avg);

#ifdef SPARTN_DEBUG_PRINT
    printf("  hydrostatic_delay_avg: %f\n", hydrostatic_delay_avg);
#endif

    // NOTE(ewasjon): 3GPP LPP doesn't include a polynomial for the wet delay (zenith delay). Thus,
    // we can set this to a constant value of 0.0. We can also compute the average zenith delay for
    // all grid points, and subtract this from the zenith delay for each grid point. This will
    // reduce the precision needed.

    double average_zenith_delay = 0.0;
    if (use_average_zenith_delay) {
        average_zenith_delay = compute_average_zentith_delay(data);
    }

    if (within_range(-0.252, 0.252, average_zenith_delay)) {
        builder.sf044(0);                                            // Small coefficient block
        average_zenith_delay = builder.sf045(average_zenith_delay);  // T_00
    } else if (within_range(-1.020, 1.020, average_zenith_delay)) {
        builder.sf044(1);                                            // Small coefficient block
        average_zenith_delay = builder.sf048(average_zenith_delay);  // T_00
    } else {
        builder.sf044(0);    // Small coefficient block
        builder.sf045(0.0);  // T_0
        average_zenith_delay = 0.0;
    }

#ifdef SPARTN_DEBUG_PRINT
    printf("  average_zenith_delay: %f\n", average_zenith_delay);
#endif

    // Compute the residual field size for all grid points
    auto residual_field_size = 0;
    if (calculate_sf051) {
        for (int i = 0; i < list.count; i++) {
            auto element = list.array[i];
            if (!element) continue;
            if (!element->tropospericDelayCorrection_r16) continue;

            auto& grid_point = *element->tropospericDelayCorrection_r16;
            auto residual = decode::tropoWetVerticalDelay_r16(grid_point.tropoWetVerticalDelay_r16);
            auto total_residual = residual - average_zenith_delay;
            if (within_range(-0.124, 0.124, total_residual))
                residual_field_size = std::max<uint8_t>(residual_field_size, 0U);
            else
                residual_field_size = std::max<uint8_t>(residual_field_size, 1U);
        }
    } else {
        // If we're not calculating the residual field size, always use the largest size
        residual_field_size = 1;
    }

    builder.sf051(residual_field_size);

    for (int i = 0; i < list.count; i++) {
        auto element = list.array[i];
        if (!element) continue;
        if (!element->tropospericDelayCorrection_r16) {
#ifdef SPARTN_DEBUG_PRINT
            printf("    grid[%2d] = invalid\n", i);
#endif
            if (residual_field_size == 0)
                builder.sf052_invalid();
            else
                builder.sf053_invalid();
        } else {
            auto& grid_point = *element->tropospericDelayCorrection_r16;
            auto residual = decode::tropoWetVerticalDelay_r16(grid_point.tropoWetVerticalDelay_r16);
            auto total_residual = residual - average_zenith_delay;
            if (residual_field_size == 0)
                builder.sf052(total_residual);
            else
                builder.sf053(total_residual);
#ifdef SPARTN_DEBUG_PRINT
            printf("    grid[%2d] = %f\n", i, total_residual);
#endif
        }
    }
}

static int compute_equation_type(std::vector<HpacSatellite>& satellites) {
    auto final_equation_type = 0;

    for (auto& satellite : satellites) {
        if (!satellite.stec) continue;
        auto& stec = *satellite.stec;

        auto equation_type = 0;  // C_00
        if (stec.stec_C01_r16 || stec.stec_C10_r16) {
            equation_type = 1;  // C_00, C_01, C_10
        }

        if (stec.stec_C11_r16) {
            equation_type = 2;  // C_00, C_01, C_10, C_11
        }

        if (equation_type > final_equation_type) {
            final_equation_type = equation_type;
        }
    }

    return final_equation_type;
}

static bool compute_coefficient_size_indicator(STEC_SatElement_r16 const& satellite,
                                               int                        equation_type) {
    auto small_coefficient_size = true;

    // NOTE(ewasjon): There is no resolution difference between the small and large coefficent
    // blocks. Thus, we only need to check that we're inside the given intervals.

    if (equation_type >= 0) {
        auto c_00 = decode::stec_C00_r16(satellite.stec_C00_r16);
        if (!within_range(-81.88, 81.88, c_00)) small_coefficient_size = true;
    }

    if (equation_type >= 1) {
        if (satellite.stec_C01_r16) {
            auto c_01 = decode::stec_C01_r16(satellite.stec_C01_r16);
            if (!within_range(-16.376, 16.376, c_01)) small_coefficient_size = true;
        }

        if (satellite.stec_C01_r16) {
            auto c_10 = decode::stec_C10_r16(satellite.stec_C10_r16);
            if (!within_range(-16.376, 16.376, c_10)) small_coefficient_size = true;
        }
    }

    if (equation_type >= 2) {
        if (satellite.stec_C11_r16) {
            auto c_11 = decode::stec_C11_r16(satellite.stec_C11_r16);
            if (!within_range(-8.190, 8.190, c_11)) small_coefficient_size = true;
        }
    }

    return !small_coefficient_size;
}

static void ionosphere_data_block_1(MessageBuilder& builder, HpacSatellite const& satellite,
                                    int equation_type, int sf055_override, int sf055_default) {
    auto element = satellite.stec;

    if (sf055_override >= 0) {
        builder.sf055_raw(sf055_override);
#ifdef SPARTN_DEBUG_PRINT
        printf("  sf055: %d [override]\n", sf055_override);
#endif
    } else {
        auto q = decode::stecQualityIndicator_r16(element->stecQualityIndicator_r16);
        if (q.invalid) {
#ifdef SPARTN_DEBUG_PRINT
            printf("  sf055: %d [default]\n", sf055_default);
#endif
            uint8_t value = sf055_default < 0 ?
                                0 :
                                (sf055_default > 15 ? 15 : static_cast<uint8_t>(sf055_default));
            builder.sf055_raw(value);
        } else {
#ifdef SPARTN_DEBUG_PRINT
            printf("  sf055: %f\n", q.value);
#endif
            builder.sf055(q.value);
        }
    }

    auto coefficient_size_indicator = compute_coefficient_size_indicator(*element, equation_type);
    builder.sf056(coefficient_size_indicator);

    auto c00 = decode::stec_C00_r16(element->stec_C00_r16);
    auto c01 = decode::stec_C01_r16(element->stec_C01_r16);
    auto c10 = decode::stec_C10_r16(element->stec_C10_r16);
    auto c11 = decode::stec_C11_r16(element->stec_C11_r16);

    if (equation_type >= 0) {
        builder.ionosphere_coefficient_c00(coefficient_size_indicator, c00);
    }

    if (equation_type >= 1) {
        builder.ionosphere_coefficient_c10_c01(coefficient_size_indicator, c01);
        builder.ionosphere_coefficient_c10_c01(coefficient_size_indicator, c10);
    }

    if (equation_type >= 2) {
        builder.ionosphere_coefficient_c11(coefficient_size_indicator, c11);
    }
}

static uint8_t compute_residual_field_size(HpacSatellite const& satellite) {
    uint8_t residual_field_size = 0;
    for (auto& kvp : satellite.residuals) {
        auto& element  = *kvp.second;
        auto  residual = decode::stecResidualCorrection_r16(element.stecResidualCorrection_r16);

        if (within_range(-0.28, 0.28, residual))
            residual_field_size = std::max<uint8_t>(residual_field_size, 0U);
        else if (within_range(-2.52, 2.52, residual))
            residual_field_size = std::max<uint8_t>(residual_field_size, 1U);
        else if (within_range(-20.44, 20.44, residual))
            residual_field_size = std::max<uint8_t>(residual_field_size, 2U);
        else
            residual_field_size = std::max<uint8_t>(residual_field_size, 3U);
    }

    return residual_field_size;
}

static void ionosphere_data_block_2(MessageBuilder& builder, long grid_points,
                                    HpacSatellite& satellite) {
    auto residual_field_size = compute_residual_field_size(satellite);
    builder.sf063(residual_field_size);

#ifdef SPARTN_DEBUG_PRINT
    printf("  residual_field_size=%d\n", residual_field_size);
#endif

    for (long i = 0; i < grid_points; i++) {
        auto it = satellite.residuals.find(i);
        if (it == satellite.residuals.end()) {
#ifdef SPARTN_DEBUG_PRINT
            printf("    grid[%2ld] = invalid\n", i);
#endif
            builder.ionosphere_residual_invalid(residual_field_size);
        } else {
            auto& element  = *it->second;
            auto  residual = decode::stecResidualCorrection_r16(element.stecResidualCorrection_r16);
#ifdef SPARTN_DEBUG_PRINT
            printf("    grid[%2ld] = %f\n", i, residual);
#endif
            builder.ionosphere_residual(residual_field_size, residual);
        }
    }
}

static void ionosphere_data_block(MessageBuilder& builder, CorrectionPointSet& correction_point_set,
                                  HpacCorrections& corrections, long gnss_id, OcbCorrections* ocb,
                                  int ionosphere_block_type, int sf055_override,
                                  int sf055_default) {
    auto satellites = corrections.satellites();

    {
        // NOTE(ewasjon): Remove all satellites that does not have STEC corrections.
        // TODO(ewasjon): [low-priority] Add _WHY_ we're removing satellites without STEC
        auto it = satellites.begin();
        for (; it != satellites.end();) {
            if (!it->stec) {
#ifdef SPARTN_DEBUG_PRINT
                printf("  removed satellite=%u [stec]\n", it->prn());
#endif
                it = satellites.erase(it);
            } else if (ocb && !ocb->has_satellite(it->id)) {
#ifdef SPARTN_DEBUG_PRINT
                printf("  removed satellite=%u [ocb]\n", it->prn());
#endif
                it = satellites.erase(it);
            } else {
                it++;
            }
        }
    }

    auto equation_type = compute_equation_type(satellites);
    builder.sf054(equation_type);
    builder.satellite_mask(gnss_id, satellites);

    for (auto& satellite : satellites) {
        if (!satellite.stec) continue;

#ifdef SPARTN_DEBUG_PRINT
        printf("  satellite=%u\n", satellite.prn());
#endif

        ionosphere_data_block_1(builder, satellite, equation_type, sf055_override, sf055_default);

        if (ionosphere_block_type == 2) {
            ionosphere_data_block_2(builder, correction_point_set.grid_points, satellite);
        }
    }
}

void Generator::generate_hpac(uint16_t iod) {
    auto hpac_data = mCorrectionData->hpac(iod);
    if (!hpac_data) return;

    auto ocb_data = mCorrectionData->ocb(iod);

    std::vector<HpacCorrections*> messages;
    for (auto& kvp : hpac_data->mKeyedCorrections) {
        if (!mGpsSupported && kvp.first.gnss_id == GNSS_ID__gnss_id_gps) continue;
        if (!mGlonassSupported && kvp.first.gnss_id == GNSS_ID__gnss_id_glonass) continue;
        if (!mGalileoSupported && kvp.first.gnss_id == GNSS_ID__gnss_id_galileo) continue;
        if (!mBeidouSupported && kvp.first.gnss_id == GNSS_ID__gnss_id_bds) continue;

        messages.push_back(&kvp.second);
    }

    std::sort(messages.begin(), messages.end(),
              [](HpacCorrections const* a, HpacCorrections const* b) {
                  return subtype_from_gnss_id(a->gnss_id) < subtype_from_gnss_id(b->gnss_id);
              });

    for (size_t message_id = 0; message_id < messages.size(); message_id++) {
        auto& corrections = *messages[message_id];
        auto  epoch_time  = corrections.epoch_time.rounded_seconds;
        auto  gnss_id     = corrections.gnss_id;
        auto  set_id      = corrections.set_id;

        auto cps_it = mCorrectionPointSets.find(set_id);
        if (cps_it == mCorrectionPointSets.end()) continue;
        auto& correction_point_set = *(cps_it->second.get());

        OcbCorrections* ocb_corrections = nullptr;
        if (ocb_data && mFilterByOcb) {
            auto ocb_key = OcbKey{gnss_id, epoch_time};
            if (!mGroupByEpochTime) {
                ocb_key.epoch_time = 0;
            }
            auto ocb_it = ocb_data->mKeyedCorrections.find(ocb_key);
            if (ocb_it != ocb_data->mKeyedCorrections.end()) {
                ocb_corrections = &ocb_it->second;
            }
        }

#ifdef SPARTN_DEBUG_PRINT
        printf("HPAC: time=%u, set=%hu, gnss=%ld, iod=%hu\n", epoch_time, set_id, gnss_id, iod);
        printf("  area_id=%u\n", correction_point_set.area_id);
#endif

        auto subtype                = subtype_from_gnss_id(gnss_id);
        auto troposphere_block_type = compute_troposphere_block_type(corrections.gridded);
        auto ionosphere_block_type =
            compute_ionosphere_block_type(corrections.stec, corrections.gridded);

        auto siou = iod;
        if (mIncreasingSiou) {
            siou = mSiouIndex;
        }

        MessageBuilder builder{1 /* HPAC */, subtype, epoch_time};
        builder.sf005(siou);
        builder.sf068(0);  // TODO(ewasjon): [low-priority] We could include AIOU in the correction
                           // point set, to handle overflow
        builder.sf069();
        builder.sf030(1);

        // Atmosphere block
        {
            // Area data block
            {
                builder.sf031(static_cast<uint8_t>(correction_point_set.area_id));
                builder.sf039(static_cast<uint8_t>(correction_point_set.grid_points));
                builder.sf040(troposphere_block_type);
                builder.sf040(ionosphere_block_type);
            }

            // Troposphere data block
            if (troposphere_block_type != 0) {
                // TODO(ewasjon): [low-priority] Expose this as a option
                auto calculate_sf051 = mComputeAverageZenithDelay;
                troposphere_data_block(builder, *corrections.gridded, mSf042Override, mSf042Default,
                                       mComputeAverageZenithDelay, calculate_sf051);
            }

            // Ionosphere data block
            if (ionosphere_block_type != 0) {
                ionosphere_data_block(builder, correction_point_set, corrections, gnss_id,
                                      ocb_corrections, ionosphere_block_type, mSf055Override,
                                      mSf055Default);
            }
        }

        mMessages.push_back(builder.build());
    }
}

}  // namespace spartn
}  // namespace generator
