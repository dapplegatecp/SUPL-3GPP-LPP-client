/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_SSR_CodeBiasSupport_r15_H_
#define	_GNSS_SSR_CodeBiasSupport_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SignalIDs.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_SSR_CodeBiasSupport_r15__ext1__ssr_IntegrityCodeBiasBoundsSup_r17 {
	GNSS_SSR_CodeBiasSupport_r15__ext1__ssr_IntegrityCodeBiasBoundsSup_r17_supported	= 0
} e_GNSS_SSR_CodeBiasSupport_r15__ext1__ssr_IntegrityCodeBiasBoundsSup_r17;

/* GNSS-SSR-CodeBiasSupport-r15 */
typedef struct GNSS_SSR_CodeBiasSupport_r15 {
	GNSS_SignalIDs_t	 signal_and_tracking_mode_ID_Sup_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GNSS_SSR_CodeBiasSupport_r15__ext1 {
		long	*ssr_IntegrityCodeBiasBoundsSup_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_SSR_CodeBiasSupport_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ssr_IntegrityCodeBiasBoundsSup_r17_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_CodeBiasSupport_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_CodeBiasSupport_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SSR_CodeBiasSupport_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_SSR_CodeBiasSupport_r15_H_ */
#include <asn_internal.h>
