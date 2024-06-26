/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_BT_MeasurementInformation_r13_H_
#define	_BT_MeasurementInformation_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTCTime.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BT_MeasurementList_r13;
struct BT_MeasurementList_r18;

/* BT-MeasurementInformation-r13 */
typedef struct BT_MeasurementInformation_r13 {
	UTCTime_t	*measurementReferenceTime_r13;	/* OPTIONAL */
	struct BT_MeasurementList_r13	*bt_MeasurementList_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct BT_MeasurementInformation_r13__ext1 {
		struct BT_MeasurementList_r18	*bt_MeasurementList_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BT_MeasurementInformation_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BT_MeasurementInformation_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_BT_MeasurementInformation_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BT_MeasurementInformation_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BT_MeasurementInformation_r13_H_ */
#include <asn_internal.h>
