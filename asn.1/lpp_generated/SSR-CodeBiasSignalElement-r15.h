/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_SSR_CodeBiasSignalElement_r15_H_
#define	_SSR_CodeBiasSignalElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SignalID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SSR_IntegrityCodeBiasBounds_r17;

/* SSR-CodeBiasSignalElement-r15 */
typedef struct SSR_CodeBiasSignalElement_r15 {
	GNSS_SignalID_t	 signal_and_tracking_mode_ID_r15;
	long	 codeBias_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SSR_CodeBiasSignalElement_r15__ext1 {
		struct SSR_IntegrityCodeBiasBounds_r17	*ssr_IntegrityCodeBiasBounds_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSR_CodeBiasSignalElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSR_CodeBiasSignalElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SSR_CodeBiasSignalElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SSR_CodeBiasSignalElement_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SSR_CodeBiasSignalElement_r15_H_ */
#include <asn_internal.h>
