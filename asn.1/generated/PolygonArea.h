/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "/home/martin/repos/LPP-Client/asn/ULP-Components.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_PolygonArea_H_
#define	_PolygonArea_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PolygonDescription.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PolygonArea */
typedef struct PolygonArea {
	PolygonDescription_t	 polygonDescription;
	long	*polygonHysteresis	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolygonArea_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PolygonArea;
extern asn_SEQUENCE_specifics_t asn_SPC_PolygonArea_specs_1;
extern asn_TYPE_member_t asn_MBR_PolygonArea_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PolygonArea_H_ */
#include <asn_internal.h>