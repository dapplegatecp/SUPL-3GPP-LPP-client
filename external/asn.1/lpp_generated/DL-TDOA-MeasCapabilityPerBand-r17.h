/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_DL_TDOA_MeasCapabilityPerBand_r17_H_
#define	_DL_TDOA_MeasCapabilityPerBand_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR-r16.h"
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__supportOfDL_PRS_FirstPathRSRP_r17 {
	DL_TDOA_MeasCapabilityPerBand_r17__supportOfDL_PRS_FirstPathRSRP_r17_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__supportOfDL_PRS_FirstPathRSRP_r17;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__dl_PRS_MeasRRC_Inactive_r17 {
	DL_TDOA_MeasCapabilityPerBand_r17__dl_PRS_MeasRRC_Inactive_r17_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__dl_PRS_MeasRRC_Inactive_r17;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Connected_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Connected_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Connected_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Inactive_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Inactive_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Inactive_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Idle_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Idle_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfDL_PRS_BWA_RRC_Idle_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_RRC_Connected_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_RRC_Connected_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_RRC_Connected_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__assocSingleRSTD_WithUpToNsampleRSCPD_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__assocSingleRSTD_WithUpToNsampleRSCPD_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__assocSingleRSTD_WithUpToNsampleRSCPD_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_MeasurementRRC_Idle_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_MeasurementRRC_Idle_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__nr_DL_PRS_RSCPD_MeasurementRRC_Idle_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfUE_basedCarrierPhasePositioning_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfUE_basedCarrierPhasePositioning_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfUE_basedCarrierPhasePositioning_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfSymbolTimeStampForRSCPD_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfSymbolTimeStampForRSCPD_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfSymbolTimeStampForRSCPD_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus1	= 0,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus2	= 1,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus3	= 2,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus4	= 3,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus5	= 4,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18_minus6	= 5
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfFinerTimingReportGranularityForPRS_Meas_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18_rstd	= 0,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18_rsrp	= 1,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18_rsrpp	= 2,
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18_rscpd	= 3
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfMeasurementsInTimeWindow_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfPRS_MeasurementRRC_Idle_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfPRS_MeasurementRRC_Idle_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext1__supportOfPRS_MeasurementRRC_Idle_r18;
typedef enum DL_TDOA_MeasCapabilityPerBand_r17__ext2__nr_DL_PRS_RSCPD_RRC_Inactive_r18 {
	DL_TDOA_MeasCapabilityPerBand_r17__ext2__nr_DL_PRS_RSCPD_RRC_Inactive_r18_supported	= 0
} e_DL_TDOA_MeasCapabilityPerBand_r17__ext2__nr_DL_PRS_RSCPD_RRC_Inactive_r18;

/* DL-TDOA-MeasCapabilityPerBand-r17 */
typedef struct DL_TDOA_MeasCapabilityPerBand_r17 {
	FreqBandIndicatorNR_r16_t	 freqBandIndicatorNR_r17;
	long	*supportOfDL_PRS_FirstPathRSRP_r17;	/* OPTIONAL */
	long	*dl_PRS_MeasRRC_Inactive_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct DL_TDOA_MeasCapabilityPerBand_r17__ext1 {
		long	*supportOfDL_PRS_BWA_RRC_Connected_r18;	/* OPTIONAL */
		long	*supportOfDL_PRS_BWA_RRC_Inactive_r18;	/* OPTIONAL */
		long	*supportOfDL_PRS_BWA_RRC_Idle_r18;	/* OPTIONAL */
		long	*nr_DL_PRS_RSCPD_RRC_Connected_r18;	/* OPTIONAL */
		long	*assocSingleRSTD_WithUpToNsampleRSCPD_r18;	/* OPTIONAL */
		long	*nr_DL_PRS_RSCPD_MeasurementRRC_Idle_r18;	/* OPTIONAL */
		long	*supportOfUE_basedCarrierPhasePositioning_r18;	/* OPTIONAL */
		long	*supportOfSymbolTimeStampForRSCPD_r18;	/* OPTIONAL */
		long	*supportOfFinerTimingReportGranularityForPRS_Meas_r18;	/* OPTIONAL */
		BIT_STRING_t	*supportOfMeasurementsInTimeWindow_r18;	/* OPTIONAL */
		long	*supportOfPRS_MeasurementRRC_Idle_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct DL_TDOA_MeasCapabilityPerBand_r17__ext2 {
		long	*nr_DL_PRS_RSCPD_RRC_Inactive_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TDOA_MeasCapabilityPerBand_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfDL_PRS_FirstPathRSRP_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_PRS_MeasRRC_Inactive_r17_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfDL_PRS_BWA_RRC_Connected_r18_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfDL_PRS_BWA_RRC_Inactive_r18_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfDL_PRS_BWA_RRC_Idle_r18_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_DL_PRS_RSCPD_RRC_Connected_r18_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_assocSingleRSTD_WithUpToNsampleRSCPD_r18_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_DL_PRS_RSCPD_MeasurementRRC_Idle_r18_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfUE_basedCarrierPhasePositioning_r18_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfSymbolTimeStampForRSCPD_r18_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfFinerTimingReportGranularityForPRS_Meas_r18_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfPRS_MeasurementRRC_Idle_r18_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_DL_PRS_RSCPD_RRC_Inactive_r18_40;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_TDOA_MeasCapabilityPerBand_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_TDOA_MeasCapabilityPerBand_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_TDOA_MeasCapabilityPerBand_r17_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TDOA_MeasCapabilityPerBand_r17_H_ */
#include <asn_internal.h>
