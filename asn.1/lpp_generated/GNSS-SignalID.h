/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_SignalID_H_
#define	_GNSS_SignalID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-SignalID */
typedef struct GNSS_SignalID {
	long	 gnss_SignalID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GNSS_SignalID__ext1 {
		long	*gnss_SignalID_Ext_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_SignalID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SignalID;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SignalID_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SignalID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_SignalID_H_ */
#include <asn_internal.h>
