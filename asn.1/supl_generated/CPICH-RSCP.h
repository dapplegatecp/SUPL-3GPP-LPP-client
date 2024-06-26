/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "src/ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_CPICH_RSCP_H_
#define	_CPICH_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CPICH-RSCP */
typedef long	 CPICH_RSCP_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CPICH_RSCP_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CPICH_RSCP;
asn_struct_free_f CPICH_RSCP_free;
asn_constr_check_f CPICH_RSCP_constraint;
xer_type_decoder_f CPICH_RSCP_decode_xer;
xer_type_encoder_f CPICH_RSCP_encode_xer;
jer_type_encoder_f CPICH_RSCP_encode_jer;
per_type_decoder_f CPICH_RSCP_decode_uper;
per_type_encoder_f CPICH_RSCP_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CPICH_RSCP_H_ */
#include <asn_internal.h>
