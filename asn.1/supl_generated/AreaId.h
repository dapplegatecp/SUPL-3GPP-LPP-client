/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "src/SUPL-TRIGGERED-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_AreaId_H_
#define	_AreaId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GSMAreaId.h"
#include "WCDMAAreaId.h"
#include "CDMAAreaId.h"
#include "HRPDAreaId.h"
#include "UMBAreaId.h"
#include "LTEAreaId.h"
#include "WLANAreaId.h"
#include "WimaxAreaId.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaId_PR {
	AreaId_PR_NOTHING,	/* No components present */
	AreaId_PR_gSMAreaId,
	AreaId_PR_wCDMAAreaId,
	AreaId_PR_cDMAAreaId,
	AreaId_PR_hRPDAreaId,
	AreaId_PR_uMBAreaId,
	AreaId_PR_lTEAreaId,
	AreaId_PR_wLANAreaId,
	AreaId_PR_wiMAXAreaId
	/* Extensions may appear below */
	
} AreaId_PR;

/* AreaId */
typedef struct AreaId {
	AreaId_PR present;
	union AreaId_u {
		GSMAreaId_t	 gSMAreaId;
		WCDMAAreaId_t	 wCDMAAreaId;
		CDMAAreaId_t	 cDMAAreaId;
		HRPDAreaId_t	 hRPDAreaId;
		UMBAreaId_t	 uMBAreaId;
		LTEAreaId_t	 lTEAreaId;
		WLANAreaId_t	 wLANAreaId;
		WimaxAreaId_t	 wiMAXAreaId;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaId;
extern asn_CHOICE_specifics_t asn_SPC_AreaId_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaId_1[8];
extern asn_per_constraints_t asn_PER_type_AreaId_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaId_H_ */
#include <asn_internal.h>
