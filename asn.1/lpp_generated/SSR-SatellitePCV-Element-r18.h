/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_SSR_SatellitePCV_Element_r18_H_
#define	_SSR_SatellitePCV_Element_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include "SSR-SatellitePCV-FrequencyList-r18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SSR-SatellitePCV-Element-r18 */
typedef struct SSR_SatellitePCV_Element_r18 {
	SV_ID_t	 svID_r18;
	SSR_SatellitePCV_FrequencyList_r18_t	 ssr_SatellitePCV_FrequencyList_r18;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSR_SatellitePCV_Element_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSR_SatellitePCV_Element_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_SSR_SatellitePCV_Element_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_SSR_SatellitePCV_Element_r18_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SSR_SatellitePCV_Element_r18_H_ */
#include <asn_internal.h>
