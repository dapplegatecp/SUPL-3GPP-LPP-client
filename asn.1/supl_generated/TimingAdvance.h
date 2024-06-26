/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "src/ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_TimingAdvance_H_
#define	_TimingAdvance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "TAResolution.h"
#include "ChipRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimingAdvance */
typedef struct TimingAdvance {
	long	 tA;
	TAResolution_t	*tAResolution;	/* OPTIONAL */
	ChipRate_t	*chipRate;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimingAdvance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimingAdvance;
extern asn_SEQUENCE_specifics_t asn_SPC_TimingAdvance_specs_1;
extern asn_TYPE_member_t asn_MBR_TimingAdvance_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TimingAdvance_H_ */
#include <asn_internal.h>
