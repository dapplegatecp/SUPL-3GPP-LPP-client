/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_PRS_Info_r16_H_
#define	_NR_DL_PRS_Info_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_DL_PRS_ResourceSet_r16;

/* NR-DL-PRS-Info-r16 */
typedef struct NR_DL_PRS_Info_r16 {
	struct NR_DL_PRS_Info_r16__nr_DL_PRS_ResourceSetList_r16 {
		A_SEQUENCE_OF(struct NR_DL_PRS_ResourceSet_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nr_DL_PRS_ResourceSetList_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_PRS_Info_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_Info_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_Info_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_PRS_Info_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_PRS_Info_r16_H_ */
#include <asn_internal.h>
