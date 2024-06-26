/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_DisplacementInfoListElement_r15_H_
#define	_DisplacementInfoListElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaTime-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Displacement_r15;

/* DisplacementInfoListElement-r15 */
typedef struct DisplacementInfoListElement_r15 {
	DeltaTime_r15_t	 deltaTimeStamp_r15;
	struct Displacement_r15	*displacement_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DisplacementInfoListElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DisplacementInfoListElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_DisplacementInfoListElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_DisplacementInfoListElement_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DisplacementInfoListElement_r15_H_ */
#include <asn_internal.h>
