/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_H_
#define	_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include "NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r16.h"
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR {
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR_NOTHING,	/* No components present */
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR_nr_PeriodicityAndSlotOffsetTimeWindow_r18,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR_nr_OneShotSlotOffsetTimeWindow_r18
} NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR;
typedef enum NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR {
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR_NOTHING,	/* No components present */
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR_scs15_r18,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR_scs30_r18,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR_scs60_r18,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR_scs120_r18
} NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR;
typedef enum NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18 {
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n1	= 0,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n2	= 1,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n4	= 2,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n6	= 3,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n8	= 4,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n12	= 5,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18_n16	= 6
	/*
	 * Enumeration is extensible
	 */
} e_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_DurationTimeWindow_r18;
typedef enum NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18 {
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_rstd	= 0,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_ueRxTx	= 1,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_rsrp	= 2,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_rsrpp	= 3,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_rscp	= 4,
	NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18_rscpd	= 5
} e_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_MeasurementsToPerformInTimeWindow_r18;

/* Forward declarations */
struct NR_SelectedDL_PRS_IndexPerTRP_r18;

/* NR-DL-PRS-MeasurementTimeWindowsConfigElement-r18 */
typedef struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18 {
	long	 nr_StartSFN_TimeWindow_r18;
	struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18 {
		NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_PR present;
		union NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18_u {
			NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_t	 nr_PeriodicityAndSlotOffsetTimeWindow_r18;
			struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18 {
				NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_PR present;
				union NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_PeriodicOrOneShotTimeWindow_r18__nr_OneShotSlotOffsetTimeWindow_r18_u {
					long	 scs15_r18;
					long	 scs30_r18;
					long	 scs60_r18;
					long	 scs120_r18;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nr_OneShotSlotOffsetTimeWindow_r18;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nr_PeriodicOrOneShotTimeWindow_r18;
	long	*nr_SymbolOffsetTimeWindow_r18;	/* OPTIONAL */
	long	 nr_DurationTimeWindow_r18;
	long	*nr_SelectedDL_PRS_FrequencyLayerIndex_r18;	/* OPTIONAL */
	struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_SelectedDL_PRS_IndexListPerFreq_r18 {
		A_SEQUENCE_OF(struct NR_SelectedDL_PRS_IndexPerTRP_r18) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nr_SelectedDL_PRS_IndexListPerFreq_r18;
	BIT_STRING_t	*nr_MeasurementsToPerformInTimeWindow_r18;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_DurationTimeWindow_r18_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_H_ */
#include <asn_internal.h>
