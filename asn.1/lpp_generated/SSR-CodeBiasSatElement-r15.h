/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_SSR_CodeBiasSatElement_r15_H_
#define	_SSR_CodeBiasSatElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include "SSR-CodeBiasSignalList-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SSR-CodeBiasSatElement-r15 */
typedef struct SSR_CodeBiasSatElement_r15 {
	SV_ID_t	 svID_r15;
	SSR_CodeBiasSignalList_r15_t	 ssr_CodeBiasSignalList_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSR_CodeBiasSatElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSR_CodeBiasSatElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SSR_CodeBiasSatElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SSR_CodeBiasSatElement_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SSR_CodeBiasSatElement_r15_H_ */
#include <asn_internal.h>
