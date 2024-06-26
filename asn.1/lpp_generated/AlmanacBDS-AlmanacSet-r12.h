/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_AlmanacBDS_AlmanacSet_r12_H_
#define	_AlmanacBDS_AlmanacSet_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AlmanacBDS-AlmanacSet-r12 */
typedef struct AlmanacBDS_AlmanacSet_r12 {
	SV_ID_t	 svID;
	long	*bdsAlmToa_r12;	/* OPTIONAL */
	long	 bdsAlmSqrtA_r12;
	long	 bdsAlmE_r12;
	long	 bdsAlmW_r12;
	long	 bdsAlmM0_r12;
	long	 bdsAlmOmega0_r12;
	long	 bdsAlmOmegaDot_r12;
	long	 bdsAlmDeltaI_r12;
	long	 bdsAlmA0_r12;
	long	 bdsAlmA1_r12;
	BIT_STRING_t	*bdsSvHealth_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlmanacBDS_AlmanacSet_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlmanacBDS_AlmanacSet_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_AlmanacBDS_AlmanacSet_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_AlmanacBDS_AlmanacSet_r12_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _AlmanacBDS_AlmanacSet_r12_H_ */
#include <asn_internal.h>
