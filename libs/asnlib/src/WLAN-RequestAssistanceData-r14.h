/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_WLAN_RequestAssistanceData_r14_H_
#define	_WLAN_RequestAssistanceData_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_RequestAssistanceData_r14__requestedAD_r14 {
	WLAN_RequestAssistanceData_r14__requestedAD_r14_ap_identifier	= 0,
	WLAN_RequestAssistanceData_r14__requestedAD_r14_ap_location	= 1
} e_WLAN_RequestAssistanceData_r14__requestedAD_r14;

/* Forward declarations */
struct WLAN_AP_Identifier_r13;

/* WLAN-RequestAssistanceData-r14 */
typedef struct WLAN_RequestAssistanceData_r14 {
	BIT_STRING_t	 requestedAD_r14;
	struct WLAN_RequestAssistanceData_r14__visibleAPs_r14 {
		A_SEQUENCE_OF(struct WLAN_AP_Identifier_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *visibleAPs_r14;
	struct WLAN_RequestAssistanceData_r14__wlan_AP_StoredData_r14 {
		A_SEQUENCE_OF(struct WLAN_AP_Identifier_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *wlan_AP_StoredData_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_RequestAssistanceData_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_RequestAssistanceData_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_RequestAssistanceData_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_RequestAssistanceData_r14_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-AP-Identifier-r13.h"

#endif	/* _WLAN_RequestAssistanceData_r14_H_ */
#include <asn_internal.h>
