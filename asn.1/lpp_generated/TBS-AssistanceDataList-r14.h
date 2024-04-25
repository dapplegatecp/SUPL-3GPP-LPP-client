/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_TBS_AssistanceDataList_r14_H_
#define	_TBS_AssistanceDataList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBS_AssistanceDataList_r14;

/* TBS-AssistanceDataList-r14 */
typedef struct TBS_AssistanceDataList_r14 {
	struct MBS_AssistanceDataList_r14	*mbs_AssistanceDataList_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TBS_AssistanceDataList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TBS_AssistanceDataList_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_TBS_AssistanceDataList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_TBS_AssistanceDataList_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _TBS_AssistanceDataList_r14_H_ */
#include <asn_internal.h>
