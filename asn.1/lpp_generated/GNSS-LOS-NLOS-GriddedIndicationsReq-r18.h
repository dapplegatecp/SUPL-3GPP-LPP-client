/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_LOS_NLOS_GriddedIndicationsReq_r18_H_
#define	_GNSS_LOS_NLOS_GriddedIndicationsReq_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR {
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR_NOTHING,	/* No components present */
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR_inside_r18,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR_outside_r18
} GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR;
typedef enum GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18 {
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18_upper_left	= 0,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18_upper_right	= 1,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18_lower_left	= 2,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18_lower_right	= 3
	/*
	 * Enumeration is extensible
	 */
} e_GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__inside_r18;
typedef enum GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18 {
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_north	= 0,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_west	= 1,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_south	= 2,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_east	= 3,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_above	= 4,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18_below	= 5
	/*
	 * Enumeration is extensible
	 */
} e_GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18__outside_r18;
typedef enum GNSS_LOS_NLOS_GriddedIndicationsReq_r18__verticalGridType_r18 {
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__verticalGridType_r18_ground_level	= 0,
	GNSS_LOS_NLOS_GriddedIndicationsReq_r18__verticalGridType_r18_threeD	= 1
} e_GNSS_LOS_NLOS_GriddedIndicationsReq_r18__verticalGridType_r18;

/* GNSS-LOS-NLOS-GriddedIndicationsReq-r18 */
typedef struct GNSS_LOS_NLOS_GriddedIndicationsReq_r18 {
	long	*gridPointsSetID_Req_r18;	/* OPTIONAL */
	struct GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18 {
		GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_PR present;
		union GNSS_LOS_NLOS_GriddedIndicationsReq_r18__relativeLocationInfo_r18_u {
			long	 inside_r18;
			long	 outside_r18;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *relativeLocationInfo_r18;
	long	 verticalGridType_r18;
	long	*referenceAltitudeFine_r18;	/* OPTIONAL */
	long	*referenceAltitudeCoarse_r18;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_LOS_NLOS_GriddedIndicationsReq_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_inside_r18_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_outside_r18_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_verticalGridType_r18_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_LOS_NLOS_GriddedIndicationsReq_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_LOS_NLOS_GriddedIndicationsReq_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_LOS_NLOS_GriddedIndicationsReq_r18_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_LOS_NLOS_GriddedIndicationsReq_r18_H_ */
#include <asn_internal.h>
