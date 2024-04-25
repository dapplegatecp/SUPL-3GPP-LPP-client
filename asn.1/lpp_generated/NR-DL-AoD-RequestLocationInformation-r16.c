/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-DL-AoD-RequestLocationInformation-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_multiMeasInSameReport_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_DL_PRS_RxHoppingRequest_r18_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fr1_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fr2_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_DL_PRS_RxHoppingTotalBandwidth_r18_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_multiMeasInSameReport_r17_value2enum_6[] = {
	{ 0,	9,	"requested" }
};
static const unsigned int asn_MAP_multiMeasInSameReport_r17_enum2value_6[] = {
	0	/* requested(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiMeasInSameReport_r17_specs_6 = {
	asn_MAP_multiMeasInSameReport_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_multiMeasInSameReport_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiMeasInSameReport_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiMeasInSameReport_r17_6 = {
	"multiMeasInSameReport-r17",
	"multiMeasInSameReport-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiMeasInSameReport_r17_tags_6,
	sizeof(asn_DEF_multiMeasInSameReport_r17_tags_6)
		/sizeof(asn_DEF_multiMeasInSameReport_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_multiMeasInSameReport_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_multiMeasInSameReport_r17_tags_6)
		/sizeof(asn_DEF_multiMeasInSameReport_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_multiMeasInSameReport_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiMeasInSameReport_r17_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext1, multiMeasInSameReport_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiMeasInSameReport_r17_6,
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
		"multiMeasInSameReport-r17"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* multiMeasInSameReport-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct NR_DL_AoD_RequestLocationInformation_r16__ext1),
	offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nr_DL_PRS_RxHoppingRequest_r18_value2enum_9[] = {
	{ 0,	9,	"requested" }
};
static const unsigned int asn_MAP_nr_DL_PRS_RxHoppingRequest_r18_enum2value_9[] = {
	0	/* requested(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_DL_PRS_RxHoppingRequest_r18_specs_9 = {
	asn_MAP_nr_DL_PRS_RxHoppingRequest_r18_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_DL_PRS_RxHoppingRequest_r18_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_9 = {
	"nr-DL-PRS-RxHoppingRequest-r18",
	"nr-DL-PRS-RxHoppingRequest-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9,
	sizeof(asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9)
		/sizeof(asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9[0]) - 1, /* 1 */
	asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9,	/* Same as above */
	sizeof(asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9)
		/sizeof(asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_DL_PRS_RxHoppingRequest_r18_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_DL_PRS_RxHoppingRequest_r18_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr1_value2enum_12[] = {
	{ 0,	5,	"mhz40" },
	{ 1,	5,	"mhz50" },
	{ 2,	5,	"mhz80" },
	{ 3,	6,	"mhz100" }
};
static const unsigned int asn_MAP_fr1_enum2value_12[] = {
	3,	/* mhz100(3) */
	0,	/* mhz40(0) */
	1,	/* mhz50(1) */
	2	/* mhz80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_specs_12 = {
	asn_MAP_fr1_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_fr1_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr1_12 = {
	"fr1",
	"fr1",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr1_tags_12,
	sizeof(asn_DEF_fr1_tags_12)
		/sizeof(asn_DEF_fr1_tags_12[0]) - 1, /* 1 */
	asn_DEF_fr1_tags_12,	/* Same as above */
	sizeof(asn_DEF_fr1_tags_12)
		/sizeof(asn_DEF_fr1_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fr1_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr1_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_value2enum_17[] = {
	{ 0,	6,	"mhz100" },
	{ 1,	6,	"mhz200" },
	{ 2,	6,	"mhz400" }
};
static const unsigned int asn_MAP_fr2_enum2value_17[] = {
	0,	/* mhz100(0) */
	1,	/* mhz200(1) */
	2	/* mhz400(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_specs_17 = {
	asn_MAP_fr2_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_fr2_enum2value_17,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr2_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr2_17 = {
	"fr2",
	"fr2",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr2_tags_17,
	sizeof(asn_DEF_fr2_tags_17)
		/sizeof(asn_DEF_fr2_tags_17[0]) - 1, /* 1 */
	asn_DEF_fr2_tags_17,	/* Same as above */
	sizeof(asn_DEF_fr2_tags_17)
		/sizeof(asn_DEF_fr2_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fr2_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr2_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_DL_PRS_RxHoppingTotalBandwidth_r18_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18, choice.fr1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr1_12,
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
		"fr1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18, choice.fr2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr2_17,
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
		"fr2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_nr_DL_PRS_RxHoppingTotalBandwidth_r18_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fr1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fr2 */
};
static asn_CHOICE_specifics_t asn_SPC_nr_DL_PRS_RxHoppingTotalBandwidth_r18_specs_11 = {
	sizeof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18),
	offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18, _asn_ctx),
	offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18, present),
	sizeof(((struct NR_DL_AoD_RequestLocationInformation_r16__ext2__nr_DL_PRS_RxHoppingTotalBandwidth_r18 *)0)->present),
	asn_MAP_nr_DL_PRS_RxHoppingTotalBandwidth_r18_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_DL_PRS_RxHoppingTotalBandwidth_r18_11 = {
	"nr-DL-PRS-RxHoppingTotalBandwidth-r18",
	"nr-DL-PRS-RxHoppingTotalBandwidth-r18",
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
		&asn_PER_type_nr_DL_PRS_RxHoppingTotalBandwidth_r18_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_nr_DL_PRS_RxHoppingTotalBandwidth_r18_11,
	2,	/* Elements count */
	&asn_SPC_nr_DL_PRS_RxHoppingTotalBandwidth_r18_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2, nr_DL_PRS_RxHoppingRequest_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_DL_PRS_RxHoppingRequest_r18_9,
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
		"nr-DL-PRS-RxHoppingRequest-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2, nr_DL_PRS_RxHoppingTotalBandwidth_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_nr_DL_PRS_RxHoppingTotalBandwidth_r18_11,
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
		"nr-DL-PRS-RxHoppingTotalBandwidth-r18"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-PRS-RxHoppingRequest-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr-DL-PRS-RxHoppingTotalBandwidth-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2),
	offsetof(struct NR_DL_AoD_RequestLocationInformation_r16__ext2, _asn_ctx),
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

asn_TYPE_member_t asn_MBR_NR_DL_AoD_RequestLocationInformation_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16, nr_AssistanceAvailability_r16),
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
		"nr-AssistanceAvailability-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16, nr_DL_AoD_ReportConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_AoD_ReportConfig_r16,
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
		"nr-DL-AoD-ReportConfig-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_5,
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
	{ ATF_POINTER, 1, offsetof(struct NR_DL_AoD_RequestLocationInformation_r16, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
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
static const int asn_MAP_NR_DL_AoD_RequestLocationInformation_r16_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_AoD_RequestLocationInformation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-AssistanceAvailability-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-DL-AoD-ReportConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_AoD_RequestLocationInformation_r16_specs_1 = {
	sizeof(struct NR_DL_AoD_RequestLocationInformation_r16),
	offsetof(struct NR_DL_AoD_RequestLocationInformation_r16, _asn_ctx),
	asn_MAP_NR_DL_AoD_RequestLocationInformation_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_DL_AoD_RequestLocationInformation_r16_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_AoD_RequestLocationInformation_r16 = {
	"NR-DL-AoD-RequestLocationInformation-r16",
	"NR-DL-AoD-RequestLocationInformation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1,
	sizeof(asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_AoD_RequestLocationInformation_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DL_AoD_RequestLocationInformation_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_DL_AoD_RequestLocationInformation_r16_specs_1	/* Additional specs */
};

