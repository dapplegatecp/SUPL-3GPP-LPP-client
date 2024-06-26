
#include "lpp/messages/request_assistance_data.hpp"

#include <ECGI.h>
#include <LPP-Message.h>
#include <LPP-MessageBody.h>
#include <MCC-MNC-Digit.h>
#include <MCC.h>
#include <MNC.h>
#include <NCGI-r15.h>
#include <RequestAssistanceData.h>
#include <asn.1/bit_string.hpp>

#define ALLOC_ZERO(type) (type*)calloc(1, sizeof(type))

#define LOGLET_CURRENT_MODULE "lpp/m"

namespace lpp {
namespace messages {

static PeriodicAssistanceDataControlParameters_r15*
periodic_assistance_data_request(const PeriodicSessionHandle& periodic_session) {
    auto ext1 = ALLOC_ZERO(PeriodicAssistanceDataControlParameters_r15::
                               PeriodicAssistanceDataControlParameters_r15__ext1);
    ext1->updateCapabilities_r15 =
        helper::BitStringBuilder{}.set(UpdateCapabilities_r15_primaryCellID_r15).to_bit_string(1);

    auto message  = ALLOC_ZERO(PeriodicAssistanceDataControlParameters_r15);
    message->ext1 = ext1;

    LPP_ASSERT(periodic_session.id() >= 0, "periodic session id <0");
    LPP_ASSERT(periodic_session.id() < 256, "periodic session id >=256");

    message->periodicSessionID_r15.periodicSessionInitiator_r15 =
        periodic_session.initiator() == Initiator::TargetDevice ?
            PeriodicSessionID_r15__periodicSessionInitiator_r15_targetDevice :
            PeriodicSessionID_r15__periodicSessionInitiator_r15_locationServer;
    message->periodicSessionID_r15.periodicSessionNumber_r15 = periodic_session.id();
    return message;
}

static void mcc_list(MCC* mcc, int64_t mcc_value) {
    if (mcc_value < 0 || mcc_value > 999) {
        mcc_value = 999;
    }

    char tmp[8];
    sprintf(tmp, "%" PRId64, mcc_value);

    for (size_t i = 0; i < strlen(tmp); i++) {
        auto d = ALLOC_ZERO(MCC_MNC_Digit_t);
        *d     = tmp[i] - '0';
        ASN_SEQUENCE_ADD(mcc, d);
    }
}

static void mnc_list(MNC* mnc, int64_t mnc_value) {
    if (mnc_value < 0 || mnc_value > 999) {
        mnc_value = 999;
    }

    char tmp[8];
    sprintf(tmp, "%02" PRId64, mnc_value);

    for (size_t i = 0; i < strlen(tmp); i++) {
        auto d = ALLOC_ZERO(MCC_MNC_Digit_t);
        *d     = tmp[i] - '0';
        ASN_SEQUENCE_ADD(mnc, d);
    }
}

static NCGI_r15* ncgi_primary_cell_id(const supl::Cell& cell) {
    if (cell.type != supl::Cell::Type::NR) {
        return nullptr;
    }

    auto message = ALLOC_ZERO(NCGI_r15);
    mcc_list((MCC*)&message->mcc_r15, cell.data.nr.mcc);
    mnc_list((MNC*)&message->mnc_r15, cell.data.nr.mnc);

    helper::BitStringBuilder{}
        .integer(0, 36, cell.data.nr.ci)
        .into_bit_string(36, &message->nr_cellidentity_r15);
    return message;
}

static ECGI* ecgi_primary_cell_id(const supl::Cell& cell) {
    if (cell.type != supl::Cell::Type::LTE) {
        return nullptr;
    }

    auto message = ALLOC_ZERO(ECGI);
    mcc_list((MCC*)&message->mcc, cell.data.lte.mcc);
    mnc_list((MNC*)&message->mnc, cell.data.lte.mnc);

    helper::BitStringBuilder{}
        .integer(0, 28, cell.data.lte.ci)
        .into_bit_string(28, &message->cellidentity);
    return message;
}

static CommonIEsRequestAssistanceData*
common_request_assistance_data(const RequestAssistanceData& request) {
    auto ext2 = ALLOC_ZERO(CommonIEsRequestAssistanceData::CommonIEsRequestAssistanceData__ext2);
    ext2->primaryCellID_r15 = ncgi_primary_cell_id(request.cell);
    ext2->periodicAssistanceDataReq_r15 =
        periodic_assistance_data_request(request.periodic_session);

    auto message           = ALLOC_ZERO(CommonIEsRequestAssistanceData);
    message->primaryCellID = ecgi_primary_cell_id(request.cell);
    message->ext2          = ext2;
    return message;
}

static GNSS_PeriodicControlParam_r15* gnss_periodic_control_param(long value) {
    if (value <= 0) return nullptr;
    auto message                  = ALLOC_ZERO(GNSS_PeriodicControlParam_r15);
    message->deliveryAmount_r15   = 32;  // 32 = infinite amount
    message->deliveryInterval_r15 = value;
    return message;
}

static GNSS_PeriodicAssistDataReq_r15*
gnss_periodic_assist_data_req(const RequestAssistanceData& request) {
    auto message = ALLOC_ZERO(GNSS_PeriodicAssistDataReq_r15);
    message->gnss_RTK_PeriodicObservationsReq_r15 =
        gnss_periodic_control_param(request.rtk_observations);
    message->gnss_RTK_PeriodicResidualsReq_r15 = gnss_periodic_control_param(request.rtk_residuals);
    message->glo_RTK_PeriodicBiasInformationReq_r15 =
        gnss_periodic_control_param(request.rtk_bias_information);
    message->gnss_SSR_PeriodicClockCorrectionsReq_r15 =
        gnss_periodic_control_param(request.ssr_clock);
    message->gnss_SSR_PeriodicOrbitCorrectionsReq_r15 =
        gnss_periodic_control_param(request.ssr_orbit);
    message->gnss_SSR_PeriodicCodeBiasReq_r15 = gnss_periodic_control_param(request.ssr_code_bias);

    auto phase_bias_req = gnss_periodic_control_param(request.ssr_phase_bias);
    auto ura_req        = gnss_periodic_control_param(request.ssr_ura);
    auto stec_req       = gnss_periodic_control_param(request.ssr_stec);
    auto gridded_req    = gnss_periodic_control_param(request.ssr_gridded);

    if (phase_bias_req || ura_req || stec_req || gridded_req) {
        auto ext1 =
            ALLOC_ZERO(GNSS_PeriodicAssistDataReq_r15::GNSS_PeriodicAssistDataReq_r15__ext1);
        ext1->gnss_SSR_PeriodicPhaseBiasReq_r16         = phase_bias_req;
        ext1->gnss_SSR_PeriodicURA_Req_r16              = ura_req;
        ext1->gnss_SSR_PeriodicSTEC_CorrectionReq_r16   = stec_req;
        ext1->gnss_SSR_PeriodicGriddedCorrectionReq_r16 = gridded_req;
        message->ext1                                   = ext1;
    }

    return message;
}

static GNSS_ReferenceTimeReq* gnss_reference_time_req(const RequestAssistanceData& request) {
    auto gnss_id = GNSS_ID__gnss_id_gps;  //  TODO(ewasjon): take this from the request

    if (request.reference_time > 0) {
        auto req = ALLOC_ZERO(GNSS_ReferenceTimeReq);
        asn_sequence_empty(&req->gnss_TimeReqPrefList.list);

        auto time_req     = ALLOC_ZERO(GNSS_ID);
        time_req->gnss_id = gnss_id;
        asn_sequence_add(&req->gnss_TimeReqPrefList.list, time_req);

        return req;
    }

    return nullptr;
}

static GNSS_IonosphericModelReq* gnss_ionospheric_model_req(const RequestAssistanceData& request) {
    auto gnss_id = GNSS_ID__gnss_id_gps;  //  TODO(ewasjon): take this from the request

    if (request.ionospheric_model > 0) {
        if (gnss_id == GNSS_ID__gnss_id_gps || gnss_id == GNSS_ID__gnss_id_glonass) {
            auto element = ALLOC_ZERO(GNSS_IonosphericModelReq_t);
            // Request '00' Klobuchar model
            element->klobucharModelReq =
                helper::BitStringBuilder{}.clear(0).clear(1).to_bit_string(2);
            return element;
        } else if (gnss_id == GNSS_ID__gnss_id_bds) {
            auto element = ALLOC_ZERO(GNSS_IonosphericModelReq_t);
            // Request '01' BDS Klobuchar model
            element->klobucharModelReq =
                helper::BitStringBuilder{}.clear(0).set(1).to_bit_string(2);
            return element;
        } else if (gnss_id == GNSS_ID__gnss_id_galileo) {
            auto element             = ALLOC_ZERO(GNSS_IonosphericModelReq_t);
            element->neQuickModelReq = ALLOC_ZERO(NULL_t);
            return element;
        }
    }

    return nullptr;
}

static GNSS_RTK_ReferenceStationInfoReq_r15*
gnss_rtk_reference_station_info_req(const RequestAssistanceData& request) {
    if (request.rtk_reference_station_info) {
        auto message = ALLOC_ZERO(GNSS_RTK_ReferenceStationInfoReq_r15);
        return message;
    }
    return nullptr;
}

static GNSS_SSR_CorrectionPointsReq_r16*
gnss_ssr_correction_points_req(const RequestAssistanceData& request) {
    if (request.ssr_correction_points) {
        auto message = ALLOC_ZERO(GNSS_SSR_CorrectionPointsReq_r16);
        return message;
    }
    return nullptr;
}

static GNSS_CommonAssistDataReq* gnss_common_assist_data_req(const RequestAssistanceData& request) {
    auto message                      = ALLOC_ZERO(GNSS_CommonAssistDataReq);
    message->gnss_ReferenceTimeReq    = gnss_reference_time_req(request);
    message->gnss_IonosphericModelReq = gnss_ionospheric_model_req(request);

    auto reference_station = gnss_rtk_reference_station_info_req(request);
    if (reference_station) {
        auto ext1 = ALLOC_ZERO(GNSS_CommonAssistDataReq::GNSS_CommonAssistDataReq__ext1);
        ext1->gnss_RTK_ReferenceStationInfoReq_r15 = reference_station;
        message->ext1                              = ext1;
    }

    auto correction_points = gnss_ssr_correction_points_req(request);
    if (correction_points) {
        auto ext2 = ALLOC_ZERO(GNSS_CommonAssistDataReq::GNSS_CommonAssistDataReq__ext2);
        ext2->gnss_SSR_CorrectionPointsReq_r16 = correction_points;
        message->ext2                          = ext2;
    }

    return message;
}

static GNSS_AuxiliaryInformationReq* gnss_auxiliary_info_req(const RequestAssistanceData& request,
                                                             long                         gnss_id) {
    if (request.rtk_observations > 0) {
        auto message = ALLOC_ZERO(GNSS_AuxiliaryInformationReq);
        return message;
    }
    return nullptr;
}

static GNSS_RTK_ObservationsReq_r15*
gnss_rtk_observations_req(const RequestAssistanceData& request) {
    if (request.rtk_observations > 0) {
        auto message                            = ALLOC_ZERO(GNSS_RTK_ObservationsReq_r15);
        message->gnss_RTK_CNR_Req_r15           = true;
        message->gnss_RTK_Integer_ms_Req_r15    = true;
        message->gnss_RTK_PhaseRangeRateReq_r15 = true;

        helper::BitStringBuilder{}
            .integer(0, 8, 0xFF)
            .into_bit_string(8, &message->gnss_RTK_SignalsReq_r15.gnss_SignalIDs);

        message->gnss_RTK_SignalsReq_r15.ext1 = ALLOC_ZERO(GNSS_SignalIDs::GNSS_SignalIDs__ext1);
        message->gnss_RTK_SignalsReq_r15.ext1->gnss_SignalIDs_Ext_r15 =
            helper::BitStringBuilder{}.integer(0, 16, 0xFFFF).to_bit_string(16);

        return message;
    }
    return nullptr;
}

static GLO_RTK_BiasInformationReq_r15*
glo_rtk_bias_information_req(const RequestAssistanceData& request, long gnss_id) {
    if (gnss_id == GNSS_ID__gnss_id_glonass) {
        if (request.rtk_bias_information > 0) {
            auto message = ALLOC_ZERO(GLO_RTK_BiasInformationReq_r15);
            return message;
        }
    }
    return nullptr;
}

static GNSS_RTK_ResidualsReq_r15* gnss_rtk_residuals_req(const RequestAssistanceData& request,
                                                         long                         gnss_id) {
    if (gnss_id == GNSS_ID__gnss_id_gps || gnss_id == GNSS_ID__gnss_id_glonass) {
        if (request.rtk_residuals > 0) {
            auto message = ALLOC_ZERO(GNSS_RTK_ResidualsReq_r15);
            return message;
        }
    }
    return nullptr;
}

static GNSS_GenericAssistDataReqElement*
gnss_generic_assist_data_req_element(const RequestAssistanceData& request, long gnss_id) {
    auto message                          = ALLOC_ZERO(GNSS_GenericAssistDataReqElement);
    message->gnss_ID.gnss_id              = gnss_id;
    message->gnss_AuxiliaryInformationReq = gnss_auxiliary_info_req(request, gnss_id);

    auto rtk_observations = gnss_rtk_observations_req(request);
    auto rtk_bias_info    = glo_rtk_bias_information_req(request, gnss_id);
    auto rtk_residuals    = gnss_rtk_residuals_req(request, gnss_id);
    if (rtk_observations || rtk_bias_info || rtk_residuals) {
        auto ext2 =
            ALLOC_ZERO(GNSS_GenericAssistDataReqElement::GNSS_GenericAssistDataReqElement__ext2);
        ext2->gnss_RTK_ObservationsReq_r15   = rtk_observations;
        ext2->glo_RTK_BiasInformationReq_r15 = rtk_bias_info;
        ext2->gnss_RTK_ResidualsReq_r15      = rtk_residuals;
        message->ext2                        = ext2;
    }

    return message;
}

static GNSS_GenericAssistDataReq*
gnss_generic_assist_data_req(const RequestAssistanceData& request) {
    auto message = ALLOC_ZERO(GNSS_GenericAssistDataReq);

    if (request.gps) {
        auto element = gnss_generic_assist_data_req_element(request, GNSS_ID__gnss_id_gps);
        if (element) {
            ASN_SEQUENCE_ADD(&message->list, element);
        }
    }

    if (request.glonass) {
        auto element = gnss_generic_assist_data_req_element(request, GNSS_ID__gnss_id_glonass);
        if (element) {
            ASN_SEQUENCE_ADD(&message->list, element);
        }
    }

    if (request.galileo) {
        auto element = gnss_generic_assist_data_req_element(request, GNSS_ID__gnss_id_galileo);
        if (element) {
            ASN_SEQUENCE_ADD(&message->list, element);
        }
    }

    if (request.bds) {
        auto element = gnss_generic_assist_data_req_element(request, GNSS_ID__gnss_id_bds);
        if (element) {
            ASN_SEQUENCE_ADD(&message->list, element);
        }
    }

    return message;
}

static A_GNSS_RequestAssistanceData*
a_gnss_request_assistance_data(const RequestAssistanceData& request) {
    auto ext1 = ALLOC_ZERO(A_GNSS_RequestAssistanceData::A_GNSS_RequestAssistanceData__ext1);
    ext1->gnss_PeriodicAssistDataReq_r15 = gnss_periodic_assist_data_req(request);

    auto message                       = ALLOC_ZERO(A_GNSS_RequestAssistanceData);
    message->gnss_CommonAssistDataReq  = gnss_common_assist_data_req(request);
    message->gnss_GenericAssistDataReq = gnss_generic_assist_data_req(request);
    message->ext1                      = ext1;
    return message;
}

static void request_assistance_data_r9(RequestAssistanceData_r9_IEs& message,
                                       const RequestAssistanceData&  request) {
    message.commonIEsRequestAssistanceData = common_request_assistance_data(request);
    message.a_gnss_RequestAssistanceData   = a_gnss_request_assistance_data(request);
}

Message create_request_assistance_data(const RequestAssistanceData& request) {
    auto body               = ALLOC_ZERO(LPP_MessageBody);
    body->present           = LPP_MessageBody_PR_c1;
    body->choice.c1.present = LPP_MessageBody__c1_PR_requestAssistanceData;

    auto body_ce     = &body->choice.c1.choice.requestAssistanceData.criticalExtensions;
    body_ce->present = RequestAssistanceData__criticalExtensions_PR_c1;
    body_ce->choice.c1.present =
        RequestAssistanceData__criticalExtensions__c1_PR_requestAssistanceData_r9;

    auto body_ce_c1 = &body_ce->choice.c1.choice.requestAssistanceData_r9;
    request_assistance_data_r9(*body_ce_c1, request);

    auto message             = ALLOC_ZERO(LPP_Message);
    message->lpp_MessageBody = body;
    return Message{message};
}

static CommonIEsRequestAssistanceData*
common_request_assistance_data(const RequestAssistanceData_Update& request) {
    auto ext2 = ALLOC_ZERO(CommonIEsRequestAssistanceData::CommonIEsRequestAssistanceData__ext2);
    ext2->primaryCellID_r15 = ncgi_primary_cell_id(request.cell);
    ext2->periodicAssistanceDataReq_r15 =
        periodic_assistance_data_request(request.periodic_session);

    auto message           = ALLOC_ZERO(CommonIEsRequestAssistanceData);
    message->primaryCellID = ecgi_primary_cell_id(request.cell);
    message->ext2          = ext2;
    return message;
}

static void request_assistance_data_r9(RequestAssistanceData_r9_IEs&       message,
                                       const RequestAssistanceData_Update& request) {
    message.commonIEsRequestAssistanceData = common_request_assistance_data(request);
}

Message create_request_assistance_data(const RequestAssistanceData_Update& request) {
    auto body               = ALLOC_ZERO(LPP_MessageBody);
    body->present           = LPP_MessageBody_PR_c1;
    body->choice.c1.present = LPP_MessageBody__c1_PR_requestAssistanceData;

    auto body_ce     = &body->choice.c1.choice.requestAssistanceData.criticalExtensions;
    body_ce->present = RequestAssistanceData__criticalExtensions_PR_c1;
    body_ce->choice.c1.present =
        RequestAssistanceData__criticalExtensions__c1_PR_requestAssistanceData_r9;

    auto body_ce_c1 = &body_ce->choice.c1.choice.requestAssistanceData_r9;
    request_assistance_data_r9(*body_ce_c1, request);

    auto message             = ALLOC_ZERO(LPP_Message);
    message->lpp_MessageBody = body;
    return Message{message};
}

}  // namespace messages
}  // namespace lpp
