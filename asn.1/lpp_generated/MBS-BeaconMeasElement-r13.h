/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_MBS_BeaconMeasElement_r13_H_
#define	_MBS_BeaconMeasElement_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBS-BeaconMeasElement-r13 */
typedef struct MBS_BeaconMeasElement_r13 {
	long	 transmitterID_r13;
	long	 codePhase_r13;
	long	 codePhaseRMSError_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MBS_BeaconMeasElement_r13__ext1 {
		long	*rssi_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBS_BeaconMeasElement_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBS_BeaconMeasElement_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MBS_BeaconMeasElement_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MBS_BeaconMeasElement_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MBS_BeaconMeasElement_r13_H_ */
#include <asn_internal.h>
