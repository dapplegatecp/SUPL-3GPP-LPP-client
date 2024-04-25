/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_TDOA_TargetDeviceErrorCauses_r16_H_
#define	_NR_DL_TDOA_TargetDeviceErrorCauses_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16 {
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_undefined	= 0,
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_assistance_data_missing	= 1,
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_unableToMeasureAnyTRP	= 2,
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_attemptedButUnableToMeasureSomeNeighbourTRPs	= 3,
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_thereWereNotEnoughSignalsReceivedForUeBasedDL_TDOA	= 4,
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16_locationCalculationAssistanceDataMissing	= 5
	/*
	 * Enumeration is extensible
	 */
} e_NR_DL_TDOA_TargetDeviceErrorCauses_r16__cause_r16;
typedef enum NR_DL_TDOA_TargetDeviceErrorCauses_r16__ext1__remoteUE_Indication_r18 {
	NR_DL_TDOA_TargetDeviceErrorCauses_r16__ext1__remoteUE_Indication_r18_true	= 0
} e_NR_DL_TDOA_TargetDeviceErrorCauses_r16__ext1__remoteUE_Indication_r18;

/* NR-DL-TDOA-TargetDeviceErrorCauses-r16 */
typedef struct NR_DL_TDOA_TargetDeviceErrorCauses_r16 {
	long	 cause_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DL_TDOA_TargetDeviceErrorCauses_r16__ext1 {
		long	*remoteUE_Indication_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_TDOA_TargetDeviceErrorCauses_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cause_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_remoteUE_Indication_r18_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_TDOA_TargetDeviceErrorCauses_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_TDOA_TargetDeviceErrorCauses_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_TDOA_TargetDeviceErrorCauses_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_TDOA_TargetDeviceErrorCauses_r16_H_ */
#include <asn_internal.h>
