/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_CommonIEsRequestLocationInformation_H_
#define	_CommonIEsRequestLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationInformationType.h"
#include "AdditionalInformation.h"
#include "Environment.h"
#include <constr_SEQUENCE.h>
#include "SegmentationInfo-r14.h"
#include "TargetIntegrityRisk-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TriggeredReportingCriteria;
struct PeriodicalReportingCriteria;
struct QoS;
struct LocationCoordinateTypes;
struct VelocityTypes;
struct MessageSizeLimitNB_r14;
struct ScheduledLocationTime_r17;
struct PeriodicalReportingCriteriaExt_r18;

/* CommonIEsRequestLocationInformation */
typedef struct CommonIEsRequestLocationInformation {
	LocationInformationType_t	 locationInformationType;
	struct TriggeredReportingCriteria	*triggeredReporting;	/* OPTIONAL */
	struct PeriodicalReportingCriteria	*periodicalReporting;	/* OPTIONAL */
	AdditionalInformation_t	*additionalInformation;	/* OPTIONAL */
	struct QoS	*qos;	/* OPTIONAL */
	Environment_t	*environment;	/* OPTIONAL */
	struct LocationCoordinateTypes	*locationCoordinateTypes;	/* OPTIONAL */
	struct VelocityTypes	*velocityTypes;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CommonIEsRequestLocationInformation__ext1 {
		struct MessageSizeLimitNB_r14	*messageSizeLimitNB_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct CommonIEsRequestLocationInformation__ext2 {
		SegmentationInfo_r14_t	*segmentationInfo_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct CommonIEsRequestLocationInformation__ext3 {
		struct ScheduledLocationTime_r17	*scheduledLocationTime_r17;	/* OPTIONAL */
		TargetIntegrityRisk_r17_t	*targetIntegrityRisk_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct CommonIEsRequestLocationInformation__ext4 {
		struct PeriodicalReportingCriteriaExt_r18	*periodicalReportingExt_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonIEsRequestLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonIEsRequestLocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonIEsRequestLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonIEsRequestLocationInformation_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _CommonIEsRequestLocationInformation_H_ */
#include <asn_internal.h>
