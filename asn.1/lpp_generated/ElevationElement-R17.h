/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_ElevationElement_R17_H_
#define	_ElevationElement_R17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BeamPowerElement_r17;

/* ElevationElement-R17 */
typedef struct ElevationElement_R17 {
	long	*elevation_r17;	/* OPTIONAL */
	long	*elevation_fine_r17;	/* OPTIONAL */
	struct ElevationElement_R17__beamPowerList_r17 {
		A_SEQUENCE_OF(struct BeamPowerElement_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} beamPowerList_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ElevationElement_R17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ElevationElement_R17;
extern asn_SEQUENCE_specifics_t asn_SPC_ElevationElement_R17_specs_1;
extern asn_TYPE_member_t asn_MBR_ElevationElement_R17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ElevationElement_R17_H_ */
#include <asn_internal.h>
