/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_AcquisitionAssistElement_H_
#define	_GNSS_AcquisitionAssistElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10 {
	GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10_d60	= 0,
	GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10_d80	= 1,
	GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10_d100	= 2,
	GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10_d120	= 3,
	GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10_noInformation	= 4
	/*
	 * Enumeration is extensible
	 */
} e_GNSS_AcquisitionAssistElement__dopplerUncertaintyExt_r10;

/* GNSS-AcquisitionAssistElement */
typedef struct GNSS_AcquisitionAssistElement {
	SV_ID_t	 svID;
	long	 doppler0;
	long	 doppler1;
	long	 dopplerUncertainty;
	long	 codePhase;
	long	 intCodePhase;
	long	 codePhaseSearchWindow;
	long	 azimuth;
	long	 elevation;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	BOOLEAN_t	*codePhase1023;	/* OPTIONAL */
	long	*dopplerUncertaintyExt_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_AcquisitionAssistElement_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dopplerUncertaintyExt_r10_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_AcquisitionAssistElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_AcquisitionAssistElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_AcquisitionAssistElement_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_AcquisitionAssistElement_H_ */
#include <asn_internal.h>
