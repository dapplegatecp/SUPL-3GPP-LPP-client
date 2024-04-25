/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_TimeModelElement_H_
#define	_GNSS_TimeModelElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-TimeModelElement */
typedef struct GNSS_TimeModelElement {
	long	 gnss_TimeModelRefTime;
	long	 tA0;
	long	*tA1;	/* OPTIONAL */
	long	*tA2;	/* OPTIONAL */
	long	 gnss_TO_ID;
	long	*weekNumber;	/* OPTIONAL */
	long	*deltaT;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_TimeModelElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_TimeModelElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_TimeModelElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_TimeModelElement_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_TimeModelElement_H_ */
#include <asn_internal.h>
