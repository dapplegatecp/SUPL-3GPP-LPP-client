/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_H_
#define	_HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HA-EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid-r16 */
typedef struct HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16 {
	long	 degreesLatitude_r16;
	long	 degreesLongitude_r16;
	long	 altitude_r16;
	long	 uncertaintySemiMajor_r16;
	long	 uncertaintySemiMinor_r16;
	long	 orientationMajorAxis_r16;
	long	 horizontalConfidence_r16;
	long	 uncertaintyAltitude_r16;
	long	 verticalConfidence_r16;
	BOOLEAN_t	 ha_HorizontalExtendedRangeUsed_r16;
	BOOLEAN_t	 ha_VerticalExtendedRangeUsed_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_H_ */
#include <asn_internal.h>
