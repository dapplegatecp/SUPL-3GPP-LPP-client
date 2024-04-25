/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_EPDU_Name_H_
#define	_EPDU_Name_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EPDU-Name */
typedef VisibleString_t	 EPDU_Name_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EPDU_Name_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EPDU_Name;
asn_struct_free_f EPDU_Name_free;
asn_constr_check_f EPDU_Name_constraint;
xer_type_decoder_f EPDU_Name_decode_xer;
xer_type_encoder_f EPDU_Name_encode_xer;
jer_type_encoder_f EPDU_Name_encode_jer;
per_type_decoder_f EPDU_Name_decode_uper;
per_type_encoder_f EPDU_Name_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EPDU_Name_H_ */
#include <asn_internal.h>