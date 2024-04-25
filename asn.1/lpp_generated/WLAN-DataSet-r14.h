/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_WLAN_DataSet_r14_H_
#define	_WLAN_DataSet_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedChannels_11a_r14;
struct SupportedChannels_11bg_r14;
struct WLAN_AP_Data_r14;

/* WLAN-DataSet-r14 */
typedef struct WLAN_DataSet_r14 {
	struct WLAN_DataSet_r14__wlan_AP_List_r14 {
		A_SEQUENCE_OF(struct WLAN_AP_Data_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} wlan_AP_List_r14;
	struct SupportedChannels_11a_r14	*supportedChannels_11a_r14;	/* OPTIONAL */
	struct SupportedChannels_11bg_r14	*supportedChannels_11bg_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_DataSet_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_DataSet_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_DataSet_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_DataSet_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_DataSet_r14_H_ */
#include <asn_internal.h>
