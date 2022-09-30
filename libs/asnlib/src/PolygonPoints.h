/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_PolygonPoints_H_
#define	_PolygonPoints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PolygonPoints__latitudeSign {
	PolygonPoints__latitudeSign_north	= 0,
	PolygonPoints__latitudeSign_south	= 1
} e_PolygonPoints__latitudeSign;

/* PolygonPoints */
typedef struct PolygonPoints {
	long	 latitudeSign;
	long	 degreesLatitude;
	long	 degreesLongitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolygonPoints_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_latitudeSign_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PolygonPoints;
extern asn_SEQUENCE_specifics_t asn_SPC_PolygonPoints_specs_1;
extern asn_TYPE_member_t asn_MBR_PolygonPoints_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PolygonPoints_H_ */
#include <asn_internal.h>
