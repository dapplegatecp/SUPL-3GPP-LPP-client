/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_Local3dPointWithUncertaintyEllipsoid_r18_H_
#define	_Local3dPointWithUncertaintyEllipsoid_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReferencePoint-r16.h"
#include <NativeEnumerated.h>
#include "X-Value-r18.h"
#include "Y-Value-r18.h"
#include "Z-Value-r18.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18 {
	Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18_mm	= 0,
	Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18_cm	= 1,
	Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18_dm	= 2,
	Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18_m	= 3
	/*
	 * Enumeration is extensible
	 */
} e_Local3dPointWithUncertaintyEllipsoid_r18__cartesianCoordinatesUnits_r18;

/* Local3dPointWithUncertaintyEllipsoid-r18 */
typedef struct Local3dPointWithUncertaintyEllipsoid_r18 {
	ReferencePoint_r16_t	 localOrigin_r18;
	long	 cartesianCoordinatesUnits_r18;
	X_Value_r18_t	 x_value_r18;
	Y_Value_r18_t	 y_value_r18;
	Z_Value_r18_t	 z_value_r18;
	long	 uncertaintySemiMajor_r18;
	long	 uncertaintySemiMinor_r18;
	long	 orientationMajorAxis_r18;
	long	 uncertaintyAltitude_r18;
	long	 confidence_r18;
	long	*vConfidence_r18;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Local3dPointWithUncertaintyEllipsoid_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cartesianCoordinatesUnits_r18_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Local3dPointWithUncertaintyEllipsoid_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_Local3dPointWithUncertaintyEllipsoid_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_Local3dPointWithUncertaintyEllipsoid_r18_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _Local3dPointWithUncertaintyEllipsoid_r18_H_ */
#include <asn_internal.h>
