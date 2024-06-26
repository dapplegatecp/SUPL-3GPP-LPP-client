/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "src/SUPL-TRIGGERED-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_AreaEventParams_H_
#define	_AreaEventParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AreaEventType.h"
#include <BOOLEAN.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RepeatedReportingParams;
struct GeographicTargetAreaList;
struct AreaIdList;

/* AreaEventParams */
typedef struct AreaEventParams {
	AreaEventType_t	 areaEventType;
	BOOLEAN_t	 locationEstimate;
	struct RepeatedReportingParams	*repeatedReportingParams;	/* OPTIONAL */
	long	*startTime;	/* OPTIONAL */
	long	*stopTime;	/* OPTIONAL */
	struct GeographicTargetAreaList	*geographicTargetAreaList;	/* OPTIONAL */
	struct AreaEventParams__areaIdLists {
		A_SEQUENCE_OF(struct AreaIdList) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *areaIdLists;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaEventParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaEventParams;
extern asn_SEQUENCE_specifics_t asn_SPC_AreaEventParams_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaEventParams_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _AreaEventParams_H_ */
#include <asn_internal.h>
