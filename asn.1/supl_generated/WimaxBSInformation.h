/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "src/Ver2-ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_WimaxBSInformation_H_
#define	_WimaxBSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WimaxBsID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WimaxRTD;
struct WimaxNMRList;

/* WimaxBSInformation */
typedef struct WimaxBSInformation {
	WimaxBsID_t	 wimaxBsID;
	struct WimaxRTD	*wimaxRTD;	/* OPTIONAL */
	struct WimaxNMRList	*wimaxNMRList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WimaxBSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WimaxBSInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_WimaxBSInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_WimaxBSInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WimaxBSInformation_H_ */
#include <asn_internal.h>
