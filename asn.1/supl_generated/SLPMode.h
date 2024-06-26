/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 * 	found in "src/SUPL-INIT.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_SLPMode_H_
#define	_SLPMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SLPMode {
	SLPMode_proxy	= 0,
	SLPMode_nonProxy	= 1
} e_SLPMode;

/* SLPMode */
typedef long	 SLPMode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SLPMode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SLPMode;
extern const asn_INTEGER_specifics_t asn_SPC_SLPMode_specs_1;
asn_struct_free_f SLPMode_free;
asn_constr_check_f SLPMode_constraint;
xer_type_decoder_f SLPMode_decode_xer;
xer_type_encoder_f SLPMode_encode_xer;
jer_type_encoder_f SLPMode_encode_jer;
per_type_decoder_f SLPMode_decode_uper;
per_type_encoder_f SLPMode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SLPMode_H_ */
#include <asn_internal.h>
