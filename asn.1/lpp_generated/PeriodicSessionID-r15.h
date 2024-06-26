/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_PeriodicSessionID_r15_H_
#define	_PeriodicSessionID_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicSessionID_r15__periodicSessionInitiator_r15 {
	PeriodicSessionID_r15__periodicSessionInitiator_r15_locationServer	= 0,
	PeriodicSessionID_r15__periodicSessionInitiator_r15_targetDevice	= 1
	/*
	 * Enumeration is extensible
	 */
} e_PeriodicSessionID_r15__periodicSessionInitiator_r15;

/* PeriodicSessionID-r15 */
typedef struct PeriodicSessionID_r15 {
	long	 periodicSessionInitiator_r15;
	long	 periodicSessionNumber_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PeriodicSessionID_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicSessionInitiator_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicSessionID_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PeriodicSessionID_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PeriodicSessionID_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicSessionID_r15_H_ */
#include <asn_internal.h>
