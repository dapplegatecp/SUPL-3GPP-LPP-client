/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-DL-TDOA-LocationInformation-r16.h"

#include "LocationCoordinates.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measurementReferenceTime_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_measurementReferenceTime_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16, choice.systemFrameNumber_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeStamp_r16,
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
		"systemFrameNumber-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16, choice.utc_time_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCTime,
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
		"utc-time-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measurementReferenceTime_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemFrameNumber-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utc-time-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_measurementReferenceTime_r16_specs_2 = {
	sizeof(struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16),
	offsetof(struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16, _asn_ctx),
	offsetof(struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16, present),
	sizeof(((struct NR_DL_TDOA_LocationInformation_r16__measurementReferenceTime_r16 *)0)->present),
	asn_MAP_measurementReferenceTime_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measurementReferenceTime_r16_2 = {
	"measurementReferenceTime-r16",
	"measurementReferenceTime-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measurementReferenceTime_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_measurementReferenceTime_r16_2,
	2,	/* Elements count */
	&asn_SPC_measurementReferenceTime_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_DL_TDOA_LocationInformation_r16__ext1, locationCoordinates_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LocationCoordinates,
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
		"locationCoordinates-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_TDOA_LocationInformation_r16__ext1, locationSource_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationSource_r13,
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
		"locationSource-r17"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationCoordinates-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* locationSource-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct NR_DL_TDOA_LocationInformation_r16__ext1),
	offsetof(struct NR_DL_TDOA_LocationInformation_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
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
	2,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DL_TDOA_LocationInformation_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_DL_TDOA_LocationInformation_r16, measurementReferenceTime_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measurementReferenceTime_r16_2,
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
		"measurementReferenceTime-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_TDOA_LocationInformation_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
};
static const int asn_MAP_NR_DL_TDOA_LocationInformation_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_TDOA_LocationInformation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementReferenceTime-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_TDOA_LocationInformation_r16_specs_1 = {
	sizeof(struct NR_DL_TDOA_LocationInformation_r16),
	offsetof(struct NR_DL_TDOA_LocationInformation_r16, _asn_ctx),
	asn_MAP_NR_DL_TDOA_LocationInformation_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_DL_TDOA_LocationInformation_r16_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_TDOA_LocationInformation_r16 = {
	"NR-DL-TDOA-LocationInformation-r16",
	"NR-DL-TDOA-LocationInformation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1,
	sizeof(asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_TDOA_LocationInformation_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DL_TDOA_LocationInformation_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_DL_TDOA_LocationInformation_r16_specs_1	/* Additional specs */
};

