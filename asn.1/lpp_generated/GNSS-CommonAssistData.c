/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-CommonAssistData.h"

#include "GNSS-ReferenceTime.h"
#include "GNSS-ReferenceLocation.h"
#include "GNSS-IonosphericModel.h"
#include "GNSS-EarthOrientationParameters.h"
#include "GNSS-RTK-ReferenceStationInfo-r15.h"
#include "GNSS-RTK-CommonObservationInfo-r15.h"
#include "GNSS-RTK-AuxiliaryStationData-r15.h"
#include "GNSS-SSR-CorrectionPoints-r16.h"
#include "GNSS-Integrity-ServiceParameters-r17.h"
#include "GNSS-Integrity-ServiceAlert-r17.h"
#include "GNSS-LOS-NLOS-GridPoints-r18.h"
#include "GNSS-SSR-IOD-Update-r18.h"
static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 3, offsetof(struct GNSS_CommonAssistData__ext1, gnss_RTK_ReferenceStationInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_ReferenceStationInfo_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-RTK-ReferenceStationInfo-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_CommonAssistData__ext1, gnss_RTK_CommonObservationInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_CommonObservationInfo_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-RTK-CommonObservationInfo-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_CommonAssistData__ext1, gnss_RTK_AuxiliaryStationData_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_AuxiliaryStationData_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-RTK-AuxiliaryStationData-r15"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-RTK-ReferenceStationInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-RTK-CommonObservationInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gnss-RTK-AuxiliaryStationData-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct GNSS_CommonAssistData__ext1),
	offsetof(struct GNSS_CommonAssistData__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_7,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_11[] = {
	{ ATF_POINTER, 1, offsetof(struct GNSS_CommonAssistData__ext2, gnss_SSR_CorrectionPoints_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_CorrectionPoints_r16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-SSR-CorrectionPoints-r16"
		},
};
static const int asn_MAP_ext2_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gnss-SSR-CorrectionPoints-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_11 = {
	sizeof(struct GNSS_CommonAssistData__ext2),
	offsetof(struct GNSS_CommonAssistData__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_11 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_11,
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_11,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_13[] = {
	{ ATF_POINTER, 2, offsetof(struct GNSS_CommonAssistData__ext3, gnss_Integrity_ServiceParameters_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_Integrity_ServiceParameters_r17,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-Integrity-ServiceParameters-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_CommonAssistData__ext3, gnss_Integrity_ServiceAlert_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_Integrity_ServiceAlert_r17,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-Integrity-ServiceAlert-r17"
		},
};
static const int asn_MAP_ext3_oms_13[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-Integrity-ServiceParameters-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gnss-Integrity-ServiceAlert-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_13 = {
	sizeof(struct GNSS_CommonAssistData__ext3),
	offsetof(struct GNSS_CommonAssistData__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_ext3_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_13 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_13,
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_13,
	2,	/* Elements count */
	&asn_SPC_ext3_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_16[] = {
	{ ATF_POINTER, 2, offsetof(struct GNSS_CommonAssistData__ext4, gnss_los_nlos_GridPoints_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_LOS_NLOS_GridPoints_r18,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-los-nlos-GridPoints-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_CommonAssistData__ext4, gnss_SSR_IOD_Update_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_IOD_Update_r18,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-SSR-IOD-Update-r18"
		},
};
static const int asn_MAP_ext4_oms_16[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-los-nlos-GridPoints-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gnss-SSR-IOD-Update-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_16 = {
	sizeof(struct GNSS_CommonAssistData__ext4),
	offsetof(struct GNSS_CommonAssistData__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_16,
	2,	/* Count of tags in the map */
	asn_MAP_ext4_oms_16,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_16 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_16,
	sizeof(asn_DEF_ext4_tags_16)
		/sizeof(asn_DEF_ext4_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_16)
		/sizeof(asn_DEF_ext4_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext4_16,
	2,	/* Elements count */
	&asn_SPC_ext4_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_CommonAssistData_1[] = {
	{ ATF_POINTER, 8, offsetof(struct GNSS_CommonAssistData, gnss_ReferenceTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ReferenceTime,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-ReferenceTime"
		},
	{ ATF_POINTER, 7, offsetof(struct GNSS_CommonAssistData, gnss_ReferenceLocation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ReferenceLocation,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-ReferenceLocation"
		},
	{ ATF_POINTER, 6, offsetof(struct GNSS_CommonAssistData, gnss_IonosphericModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_IonosphericModel,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-IonosphericModel"
		},
	{ ATF_POINTER, 5, offsetof(struct GNSS_CommonAssistData, gnss_EarthOrientationParameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_EarthOrientationParameters,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"gnss-EarthOrientationParameters"
		},
	{ ATF_POINTER, 4, offsetof(struct GNSS_CommonAssistData, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_7,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct GNSS_CommonAssistData, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext2_11,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_CommonAssistData, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext3_13,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_CommonAssistData, ext4),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext4_16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext4"
		},
};
static const int asn_MAP_GNSS_CommonAssistData_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_GNSS_CommonAssistData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_CommonAssistData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-ReferenceTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-ReferenceLocation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-IonosphericModel */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-EarthOrientationParameters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_CommonAssistData_specs_1 = {
	sizeof(struct GNSS_CommonAssistData),
	offsetof(struct GNSS_CommonAssistData, _asn_ctx),
	asn_MAP_GNSS_CommonAssistData_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_GNSS_CommonAssistData_oms_1,	/* Optional members */
	4, 4,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_CommonAssistData = {
	"GNSS-CommonAssistData",
	"GNSS-CommonAssistData",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_CommonAssistData_tags_1,
	sizeof(asn_DEF_GNSS_CommonAssistData_tags_1)
		/sizeof(asn_DEF_GNSS_CommonAssistData_tags_1[0]), /* 1 */
	asn_DEF_GNSS_CommonAssistData_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_CommonAssistData_tags_1)
		/sizeof(asn_DEF_GNSS_CommonAssistData_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_CommonAssistData_1,
	8,	/* Elements count */
	&asn_SPC_GNSS_CommonAssistData_specs_1	/* Additional specs */
};

