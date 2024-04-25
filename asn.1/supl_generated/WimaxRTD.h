/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "src/Ver2-ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_WimaxRTD_H_
#define	_WimaxRTD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WimaxRTD */
typedef struct WimaxRTD {
	long	 rTD;
	long	*rTDstd;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WimaxRTD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WimaxRTD;
extern asn_SEQUENCE_specifics_t asn_SPC_WimaxRTD_specs_1;
extern asn_TYPE_member_t asn_MBR_WimaxRTD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _WimaxRTD_H_ */
#include <asn_internal.h>
