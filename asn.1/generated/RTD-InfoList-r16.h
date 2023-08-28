/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_RTD_InfoList_r16_H_
#define	_RTD_InfoList_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RTD_InfoListPerFreqLayer_r16;

/* RTD-InfoList-r16 */
typedef struct RTD_InfoList_r16 {
	A_SEQUENCE_OF(struct RTD_InfoListPerFreqLayer_r16) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTD_InfoList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTD_InfoList_r16;
extern asn_SET_OF_specifics_t asn_SPC_RTD_InfoList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RTD_InfoList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_RTD_InfoList_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RTD-InfoListPerFreqLayer-r16.h"

#endif	/* _RTD_InfoList_r16_H_ */
#include <asn_internal.h>