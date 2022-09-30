/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_SSR_ClockCorrectionSatelliteElement_r15_H_
#define	_SSR_ClockCorrectionSatelliteElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SSR-ClockCorrectionSatelliteElement-r15 */
typedef struct SSR_ClockCorrectionSatelliteElement_r15 {
	SV_ID_t	 svID_r15;
	long	 delta_Clock_C0_r15;
	long	*delta_Clock_C1_r15	/* OPTIONAL */;
	long	*delta_Clock_C2_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSR_ClockCorrectionSatelliteElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSR_ClockCorrectionSatelliteElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SSR_ClockCorrectionSatelliteElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SSR_ClockCorrectionSatelliteElement_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SSR_ClockCorrectionSatelliteElement_r15_H_ */
#include <asn_internal.h>
