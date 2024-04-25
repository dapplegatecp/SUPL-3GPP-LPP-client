/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_LOS_NLOS_GriddedIndications_r18_H_
#define	_GNSS_LOS_NLOS_GriddedIndications_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <UTCTime.h>
#include "GridList-r18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-LOS-NLOS-GriddedIndications-r18 */
typedef struct GNSS_LOS_NLOS_GriddedIndications_r18 {
	long	 gridPointsSetID_r18;
	UTCTime_t	*expirationTime_r18;	/* OPTIONAL */
	GridList_r18_t	 gridList_r18;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_LOS_NLOS_GriddedIndications_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_LOS_NLOS_GriddedIndications_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_LOS_NLOS_GriddedIndications_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_LOS_NLOS_GriddedIndications_r18_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_LOS_NLOS_GriddedIndications_r18_H_ */
#include <asn_internal.h>
