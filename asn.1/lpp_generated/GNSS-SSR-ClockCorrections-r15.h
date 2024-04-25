/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_SSR_ClockCorrections_r15_H_
#define	_GNSS_SSR_ClockCorrections_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SystemTime.h"
#include <NativeInteger.h>
#include "SSR-ClockCorrectionList-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CLOCK_IntegrityParameters_r17;

/* GNSS-SSR-ClockCorrections-r15 */
typedef struct GNSS_SSR_ClockCorrections_r15 {
	GNSS_SystemTime_t	 epochTime_r15;
	long	 ssrUpdateInterval_r15;
	long	 iod_ssr_r15;
	SSR_ClockCorrectionList_r15_t	 ssr_ClockCorrectionList_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GNSS_SSR_ClockCorrections_r15__ext1 {
		struct CLOCK_IntegrityParameters_r17	*clock_IntegrityParameters_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_SSR_ClockCorrections_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_ClockCorrections_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_ClockCorrections_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SSR_ClockCorrections_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_SSR_ClockCorrections_r15_H_ */
#include <asn_internal.h>
