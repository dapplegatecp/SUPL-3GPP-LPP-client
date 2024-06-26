/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_H_
#define	_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HighAccuracyEllipsoidPointWithUncertaintyEllipse-r15 */
typedef struct HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15 {
	long	 degreesLatitude_r15;
	long	 degreesLongitude_r15;
	long	 uncertaintySemiMajor_r15;
	long	 uncertaintySemiMinor_r15;
	long	 orientationMajorAxis_r15;
	long	 confidence_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_H_ */
#include <asn_internal.h>
