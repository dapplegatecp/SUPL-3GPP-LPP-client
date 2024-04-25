/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_LocationCoordinates_H_
#define	_LocationCoordinates_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ellipsoid-Point.h"
#include "Ellipsoid-PointWithUncertaintyCircle.h"
#include "EllipsoidPointWithUncertaintyEllipse.h"
#include "Polygon.h"
#include "EllipsoidPointWithAltitude.h"
#include "EllipsoidPointWithAltitudeAndUncertaintyEllipsoid.h"
#include "EllipsoidArc.h"
#include "HighAccuracyEllipsoidPointWithUncertaintyEllipse-r15.h"
#include "HighAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid-r15.h"
#include "HA-EllipsoidPointWithScalableUncertaintyEllipse-r16.h"
#include "HA-EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid-r16.h"
#include "Local2dPointWithUncertaintyEllipse-r18.h"
#include "Local3dPointWithUncertaintyEllipsoid-r18.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationCoordinates_PR {
	LocationCoordinates_PR_NOTHING,	/* No components present */
	LocationCoordinates_PR_ellipsoidPoint,
	LocationCoordinates_PR_ellipsoidPointWithUncertaintyCircle,
	LocationCoordinates_PR_ellipsoidPointWithUncertaintyEllipse,
	LocationCoordinates_PR_polygon,
	LocationCoordinates_PR_ellipsoidPointWithAltitude,
	LocationCoordinates_PR_ellipsoidPointWithAltitudeAndUncertaintyEllipsoid,
	LocationCoordinates_PR_ellipsoidArc,
	/* Extensions may appear below */
	LocationCoordinates_PR_highAccuracyEllipsoidPointWithUncertaintyEllipse_v1510,
	LocationCoordinates_PR_highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_v1510,
	LocationCoordinates_PR_ha_EllipsoidPointWithScalableUncertaintyEllipse_v1680,
	LocationCoordinates_PR_ha_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_v1680,
	LocationCoordinates_PR_local2dPointWithUncertaintyEllipse_v1800,
	LocationCoordinates_PR_local3dPointWithUncertaintyEllipsoid_v1800
} LocationCoordinates_PR;

/* LocationCoordinates */
typedef struct LocationCoordinates {
	LocationCoordinates_PR present;
	union LocationCoordinates_u {
		Ellipsoid_Point_t	 ellipsoidPoint;
		Ellipsoid_PointWithUncertaintyCircle_t	 ellipsoidPointWithUncertaintyCircle;
		EllipsoidPointWithUncertaintyEllipse_t	 ellipsoidPointWithUncertaintyEllipse;
		Polygon_t	 polygon;
		EllipsoidPointWithAltitude_t	 ellipsoidPointWithAltitude;
		EllipsoidPointWithAltitudeAndUncertaintyEllipsoid_t	 ellipsoidPointWithAltitudeAndUncertaintyEllipsoid;
		EllipsoidArc_t	 ellipsoidArc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15_t	 highAccuracyEllipsoidPointWithUncertaintyEllipse_v1510;
		HighAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15_t	 highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_v1510;
		HA_EllipsoidPointWithScalableUncertaintyEllipse_r16_t	 ha_EllipsoidPointWithScalableUncertaintyEllipse_v1680;
		HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16_t	 ha_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_v1680;
		Local2dPointWithUncertaintyEllipse_r18_t	 local2dPointWithUncertaintyEllipse_v1800;
		Local3dPointWithUncertaintyEllipsoid_r18_t	 local3dPointWithUncertaintyEllipsoid_v1800;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationCoordinates_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationCoordinates;
extern asn_CHOICE_specifics_t asn_SPC_LocationCoordinates_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationCoordinates_1[13];
extern asn_per_constraints_t asn_PER_type_LocationCoordinates_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationCoordinates_H_ */
#include <asn_internal.h>
