/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_AoD_ProvideAssistanceData_r16_H_
#define	_NR_DL_AoD_ProvideAssistanceData_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_DL_PRS_AssistanceData_r16;
struct NR_SelectedDL_PRS_IndexList_r16;
struct NR_PositionCalculationAssistance_r16;
struct NR_DL_AoD_Error_r16;
struct NR_DL_PRS_BeamInfo_r16;
struct NR_On_Demand_DL_PRS_Configurations_r17;
struct NR_On_Demand_DL_PRS_Configurations_Selected_IndexList_r17;
struct AreaID_CellList_r17;

/* NR-DL-AoD-ProvideAssistanceData-r16 */
typedef struct NR_DL_AoD_ProvideAssistanceData_r16 {
	struct NR_DL_PRS_AssistanceData_r16	*nr_DL_PRS_AssistanceData_r16;	/* OPTIONAL */
	struct NR_SelectedDL_PRS_IndexList_r16	*nr_SelectedDL_PRS_IndexList_r16;	/* OPTIONAL */
	struct NR_PositionCalculationAssistance_r16	*nr_PositionCalculationAssistance_r16;	/* OPTIONAL */
	struct NR_DL_AoD_Error_r16	*nr_DL_AoD_Error_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DL_AoD_ProvideAssistanceData_r16__ext1 {
		struct NR_DL_PRS_BeamInfo_r16	*nr_DL_PRS_BeamInfo_r17;	/* OPTIONAL */
		struct NR_On_Demand_DL_PRS_Configurations_r17	*nr_On_Demand_DL_PRS_Configurations_r17;	/* OPTIONAL */
		struct NR_On_Demand_DL_PRS_Configurations_Selected_IndexList_r17	*nr_On_Demand_DL_PRS_Configurations_Selected_IndexList_r17;	/* OPTIONAL */
		struct AreaID_CellList_r17	*assistanceDataValidityArea_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_AoD_ProvideAssistanceData_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_AoD_ProvideAssistanceData_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_AoD_ProvideAssistanceData_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_AoD_ProvideAssistanceData_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_AoD_ProvideAssistanceData_r16_H_ */
#include <asn_internal.h>
