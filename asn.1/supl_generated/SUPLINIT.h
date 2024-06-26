/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 * 	found in "src/SUPL-INIT.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_SUPLINIT_H_
#define	_SUPLINIT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PosMethod.h"
#include "SLPMode.h"
#include "MAC.h"
#include "KeyIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Notification;
struct SLPAddress;
struct QoP;
struct Ver2_SUPL_INIT_extension;

/* SUPLINIT */
typedef struct SUPLINIT {
	PosMethod_t	 posMethod;
	struct Notification	*notification;	/* OPTIONAL */
	struct SLPAddress	*sLPAddress;	/* OPTIONAL */
	struct QoP	*qoP;	/* OPTIONAL */
	SLPMode_t	 sLPMode;
	MAC_t	*mAC;	/* OPTIONAL */
	KeyIdentity_t	*keyIdentity;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_SUPL_INIT_extension	*ver2_SUPL_INIT_extension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUPLINIT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUPLINIT;
extern asn_SEQUENCE_specifics_t asn_SPC_SUPLINIT_specs_1;
extern asn_TYPE_member_t asn_MBR_SUPLINIT_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SUPLINIT_H_ */
#include <asn_internal.h>
