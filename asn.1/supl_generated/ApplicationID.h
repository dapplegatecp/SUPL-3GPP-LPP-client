/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "src/Ver2-ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_ApplicationID_H_
#define	_ApplicationID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ApplicationID */
typedef struct ApplicationID {
	IA5String_t	 appProvider;
	IA5String_t	 appName;
	IA5String_t	*appVersion;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ApplicationID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ApplicationID;
extern asn_SEQUENCE_specifics_t asn_SPC_ApplicationID_specs_1;
extern asn_TYPE_member_t asn_MBR_ApplicationID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ApplicationID_H_ */
#include <asn_internal.h>
