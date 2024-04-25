/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_Initiator_H_
#define	_Initiator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Initiator {
	Initiator_locationServer	= 0,
	Initiator_targetDevice	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Initiator;

/* Initiator */
typedef long	 Initiator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Initiator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Initiator;
extern const asn_INTEGER_specifics_t asn_SPC_Initiator_specs_1;
asn_struct_free_f Initiator_free;
asn_constr_check_f Initiator_constraint;
xer_type_decoder_f Initiator_decode_xer;
xer_type_encoder_f Initiator_encode_xer;
jer_type_encoder_f Initiator_encode_jer;
per_type_decoder_f Initiator_decode_uper;
per_type_encoder_f Initiator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Initiator_H_ */
#include <asn_internal.h>