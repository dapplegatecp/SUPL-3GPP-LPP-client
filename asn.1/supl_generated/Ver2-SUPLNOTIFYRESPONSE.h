/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-NOTIFY-RESPONSE"
 * 	found in "src/SUPL-NOTIFY-RESPONSE.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_Ver2_SUPLNOTIFYRESPONSE_H_
#define	_Ver2_SUPLNOTIFYRESPONSE_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NotificationResponse.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ver2-SUPLNOTIFYRESPONSE */
typedef struct Ver2_SUPLNOTIFYRESPONSE {
	NotificationResponse_t	*notificationResponse;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_SUPLNOTIFYRESPONSE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPLNOTIFYRESPONSE;
extern asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPLNOTIFYRESPONSE_specs_1;
extern asn_TYPE_member_t asn_MBR_Ver2_SUPLNOTIFYRESPONSE_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Ver2_SUPLNOTIFYRESPONSE_H_ */
#include <asn_internal.h>
