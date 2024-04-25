/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_PRS_MeasurementTimeWindowsConfig_r18_H_
#define	_NR_DL_PRS_MeasurementTimeWindowsConfig_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18;

/* NR-DL-PRS-MeasurementTimeWindowsConfig-r18 */
typedef struct NR_DL_PRS_MeasurementTimeWindowsConfig_r18 {
	A_SEQUENCE_OF(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_PRS_MeasurementTimeWindowsConfig_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfig_r18;
extern asn_SET_OF_specifics_t asn_SPC_NR_DL_PRS_MeasurementTimeWindowsConfig_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_PRS_MeasurementTimeWindowsConfig_r18_1[1];
extern asn_per_constraints_t asn_PER_type_NR_DL_PRS_MeasurementTimeWindowsConfig_r18_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_PRS_MeasurementTimeWindowsConfig_r18_H_ */
#include <asn_internal.h>
