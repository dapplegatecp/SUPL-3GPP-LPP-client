/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "CommonIEsProvideCapabilities.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_locationEstimateAndMeasurementReporting_r18_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_ext1_3[] = {
	{ ATF_POINTER, 2, offsetof(struct CommonIEsProvideCapabilities__ext1, segmentationInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentationInfo_r14,
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
		"segmentationInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonIEsProvideCapabilities__ext1, lpp_message_segmentation_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
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
		"lpp-message-segmentation-r14"
		},
};
static const int asn_MAP_ext1_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* segmentationInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lpp-message-segmentation-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_3 = {
	sizeof(struct CommonIEsProvideCapabilities__ext1),
	offsetof(struct CommonIEsProvideCapabilities__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_3 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_3,
	sizeof(asn_DEF_ext1_tags_3)
		/sizeof(asn_DEF_ext1_tags_3[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_3,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_3)
		/sizeof(asn_DEF_ext1_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_3,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_locationEstimateAndMeasurementReporting_r18_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_locationEstimateAndMeasurementReporting_r18_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_locationEstimateAndMeasurementReporting_r18_specs_10 = {
	asn_MAP_locationEstimateAndMeasurementReporting_r18_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_locationEstimateAndMeasurementReporting_r18_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_locationEstimateAndMeasurementReporting_r18_10 = {
	"locationEstimateAndMeasurementReporting-r18",
	"locationEstimateAndMeasurementReporting-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10,
	sizeof(asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10)
		/sizeof(asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10[0]) - 1, /* 1 */
	asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10,	/* Same as above */
	sizeof(asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10)
		/sizeof(asn_DEF_locationEstimateAndMeasurementReporting_r18_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_locationEstimateAndMeasurementReporting_r18_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_locationEstimateAndMeasurementReporting_r18_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 2, offsetof(struct CommonIEsProvideCapabilities__ext2, remoteUE_Indication_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"remoteUE-Indication-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct CommonIEsProvideCapabilities__ext2, locationEstimateAndMeasurementReporting_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_locationEstimateAndMeasurementReporting_r18_10,
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
		"locationEstimateAndMeasurementReporting-r18"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* remoteUE-Indication-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* locationEstimateAndMeasurementReporting-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct CommonIEsProvideCapabilities__ext2),
	offsetof(struct CommonIEsProvideCapabilities__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_8,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CommonIEsProvideCapabilities_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CommonIEsProvideCapabilities, ext1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ext1_3,
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
	{ ATF_POINTER, 1, offsetof(struct CommonIEsProvideCapabilities, ext2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext2_8,
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
};
static const int asn_MAP_CommonIEsProvideCapabilities_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_CommonIEsProvideCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CommonIEsProvideCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_CommonIEsProvideCapabilities_specs_1 = {
	sizeof(struct CommonIEsProvideCapabilities),
	offsetof(struct CommonIEsProvideCapabilities, _asn_ctx),
	asn_MAP_CommonIEsProvideCapabilities_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CommonIEsProvideCapabilities_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	0,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CommonIEsProvideCapabilities = {
	"CommonIEsProvideCapabilities",
	"CommonIEsProvideCapabilities",
	&asn_OP_SEQUENCE,
	asn_DEF_CommonIEsProvideCapabilities_tags_1,
	sizeof(asn_DEF_CommonIEsProvideCapabilities_tags_1)
		/sizeof(asn_DEF_CommonIEsProvideCapabilities_tags_1[0]), /* 1 */
	asn_DEF_CommonIEsProvideCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonIEsProvideCapabilities_tags_1)
		/sizeof(asn_DEF_CommonIEsProvideCapabilities_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CommonIEsProvideCapabilities_1,
	2,	/* Elements count */
	&asn_SPC_CommonIEsProvideCapabilities_specs_1	/* Additional specs */
};

