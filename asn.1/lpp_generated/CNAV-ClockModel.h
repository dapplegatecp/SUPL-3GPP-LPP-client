/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_CNAV_ClockModel_H_
#define	_CNAV_ClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CNAV-ClockModel */
typedef struct CNAV_ClockModel {
	long	 cnavToc;
	long	 cnavTop;
	long	 cnavURA0;
	long	 cnavURA1;
	long	 cnavURA2;
	long	 cnavAf2;
	long	 cnavAf1;
	long	 cnavAf0;
	long	 cnavTgd;
	long	*cnavISCl1cp;	/* OPTIONAL */
	long	*cnavISCl1cd;	/* OPTIONAL */
	long	*cnavISCl1ca;	/* OPTIONAL */
	long	*cnavISCl2c;	/* OPTIONAL */
	long	*cnavISCl5i5;	/* OPTIONAL */
	long	*cnavISCl5q5;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CNAV_ClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CNAV_ClockModel;
extern asn_SEQUENCE_specifics_t asn_SPC_CNAV_ClockModel_specs_1;
extern asn_TYPE_member_t asn_MBR_CNAV_ClockModel_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _CNAV_ClockModel_H_ */
#include <asn_internal.h>
