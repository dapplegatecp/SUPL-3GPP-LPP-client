/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_AoD_MeasElement_r16_H_
#define	_NR_DL_AoD_MeasElement_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR-PhysCellID-r16.h"
#include "ARFCN-ValueNR-r15.h"
#include "NR-DL-PRS-ResourceID-r16.h"
#include "NR-DL-PRS-ResourceSetID-r16.h"
#include "NR-TimeStamp-r16.h"
#include "LOS-NLOS-Indicator-r17.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR {
	NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR_NOTHING,	/* No components present */
	NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR_perTRP_r17,
	NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR_perResource_r17
} NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR;

/* Forward declarations */
struct NCGI_r15;
struct NR_DL_AoD_AdditionalMeasurements_r16;
struct NR_DL_AoD_AdditionalMeasurementsExt_r17;

/* NR-DL-AoD-MeasElement-r16 */
typedef struct NR_DL_AoD_MeasElement_r16 {
	long	 dl_PRS_ID_r16;
	NR_PhysCellID_r16_t	*nr_PhysCellID_r16;	/* OPTIONAL */
	struct NCGI_r15	*nr_CellGlobalID_r16;	/* OPTIONAL */
	ARFCN_ValueNR_r15_t	*nr_ARFCN_r16;	/* OPTIONAL */
	NR_DL_PRS_ResourceID_r16_t	*nr_DL_PRS_ResourceID_r16;	/* OPTIONAL */
	NR_DL_PRS_ResourceSetID_r16_t	*nr_DL_PRS_ResourceSetID_r16;	/* OPTIONAL */
	NR_TimeStamp_r16_t	 nr_TimeStamp_r16;
	long	 nr_DL_PRS_RSRP_Result_r16;
	long	*nr_DL_PRS_RxBeamIndex_r16;	/* OPTIONAL */
	struct NR_DL_AoD_AdditionalMeasurements_r16	*nr_DL_AoD_AdditionalMeasurements_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DL_AoD_MeasElement_r16__ext1 {
		long	*nr_DL_PRS_FirstPathRSRP_Result_r17;	/* OPTIONAL */
		struct NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17 {
			NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_PR present;
			union NR_DL_AoD_MeasElement_r16__ext1__nr_los_nlos_Indicator_r17_u {
				LOS_NLOS_Indicator_r17_t	 perTRP_r17;
				LOS_NLOS_Indicator_r17_t	 perResource_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_los_nlos_Indicator_r17;
		struct NR_DL_AoD_AdditionalMeasurementsExt_r17	*nr_DL_AoD_AdditionalMeasurementsExt_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_AoD_MeasElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_AoD_MeasElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_AoD_MeasElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_AoD_MeasElement_r16_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_AoD_MeasElement_r16_H_ */
#include <asn_internal.h>