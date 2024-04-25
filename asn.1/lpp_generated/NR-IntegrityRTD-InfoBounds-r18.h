/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_IntegrityRTD_InfoBounds_r18_H_
#define	_NR_IntegrityRTD_InfoBounds_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_IntegrityRTD_InfoBounds_r18__resolution_r18 {
	NR_IntegrityRTD_InfoBounds_r18__resolution_r18_mdot1	= 0,
	NR_IntegrityRTD_InfoBounds_r18__resolution_r18_m1	= 1,
	NR_IntegrityRTD_InfoBounds_r18__resolution_r18_m10	= 2,
	NR_IntegrityRTD_InfoBounds_r18__resolution_r18_m30	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NR_IntegrityRTD_InfoBounds_r18__resolution_r18;

/* NR-IntegrityRTD-InfoBounds-r18 */
typedef struct NR_IntegrityRTD_InfoBounds_r18 {
	long	 resolution_r18;
	long	 meanRTD_r18;
	long	 stdDevRTD_r18;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_IntegrityRTD_InfoBounds_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_resolution_r18_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_IntegrityRTD_InfoBounds_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_IntegrityRTD_InfoBounds_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_IntegrityRTD_InfoBounds_r18_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_IntegrityRTD_InfoBounds_r18_H_ */
#include <asn_internal.h>
