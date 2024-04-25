/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "OLPC-SRS-Pos-r16.h"

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
static asn_per_constraints_t asn_PER_type_olpc_SRS_PosBasedOnPRS_Serving_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_olpc_SRS_PosBasedOnSSB_Neigh_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_olpc_SRS_PosBasedOnPRS_Neigh_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberPathLossEstimatePerServing_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_olpc_SRS_PosBasedOnPRS_Serving_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_olpc_SRS_PosBasedOnPRS_Serving_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_olpc_SRS_PosBasedOnPRS_Serving_r16_specs_2 = {
	asn_MAP_olpc_SRS_PosBasedOnPRS_Serving_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_olpc_SRS_PosBasedOnPRS_Serving_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_2 = {
	"olpc-SRS-PosBasedOnPRS-Serving-r16",
	"olpc-SRS-PosBasedOnPRS-Serving-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2,
	sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_olpc_SRS_PosBasedOnPRS_Serving_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_olpc_SRS_PosBasedOnPRS_Serving_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_olpc_SRS_PosBasedOnSSB_Neigh_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_olpc_SRS_PosBasedOnSSB_Neigh_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_olpc_SRS_PosBasedOnSSB_Neigh_r16_specs_4 = {
	asn_MAP_olpc_SRS_PosBasedOnSSB_Neigh_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_olpc_SRS_PosBasedOnSSB_Neigh_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_4 = {
	"olpc-SRS-PosBasedOnSSB-Neigh-r16",
	"olpc-SRS-PosBasedOnSSB-Neigh-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4,
	sizeof(asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_olpc_SRS_PosBasedOnSSB_Neigh_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_olpc_SRS_PosBasedOnSSB_Neigh_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_olpc_SRS_PosBasedOnPRS_Neigh_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_olpc_SRS_PosBasedOnPRS_Neigh_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_olpc_SRS_PosBasedOnPRS_Neigh_r16_specs_6 = {
	asn_MAP_olpc_SRS_PosBasedOnPRS_Neigh_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_olpc_SRS_PosBasedOnPRS_Neigh_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_6 = {
	"olpc-SRS-PosBasedOnPRS-Neigh-r16",
	"olpc-SRS-PosBasedOnPRS-Neigh-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6,
	sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6)
		/sizeof(asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_olpc_SRS_PosBasedOnPRS_Neigh_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_olpc_SRS_PosBasedOnPRS_Neigh_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberPathLossEstimatePerServing_r16_value2enum_8[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" },
	{ 3,	3,	"n16" }
};
static const unsigned int asn_MAP_maxNumberPathLossEstimatePerServing_r16_enum2value_8[] = {
	0,	/* n1(0) */
	3,	/* n16(3) */
	1,	/* n4(1) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberPathLossEstimatePerServing_r16_specs_8 = {
	asn_MAP_maxNumberPathLossEstimatePerServing_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberPathLossEstimatePerServing_r16_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberPathLossEstimatePerServing_r16_8 = {
	"maxNumberPathLossEstimatePerServing-r16",
	"maxNumberPathLossEstimatePerServing-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8,
	sizeof(asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8)
		/sizeof(asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8)
		/sizeof(asn_DEF_maxNumberPathLossEstimatePerServing_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberPathLossEstimatePerServing_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberPathLossEstimatePerServing_r16_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OLPC_SRS_Pos_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct OLPC_SRS_Pos_r16, olpc_SRS_PosBasedOnPRS_Serving_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_olpc_SRS_PosBasedOnPRS_Serving_r16_2,
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
		"olpc-SRS-PosBasedOnPRS-Serving-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct OLPC_SRS_Pos_r16, olpc_SRS_PosBasedOnSSB_Neigh_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_olpc_SRS_PosBasedOnSSB_Neigh_r16_4,
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
		"olpc-SRS-PosBasedOnSSB-Neigh-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct OLPC_SRS_Pos_r16, olpc_SRS_PosBasedOnPRS_Neigh_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_olpc_SRS_PosBasedOnPRS_Neigh_r16_6,
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
		"olpc-SRS-PosBasedOnPRS-Neigh-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct OLPC_SRS_Pos_r16, maxNumberPathLossEstimatePerServing_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberPathLossEstimatePerServing_r16_8,
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
		"maxNumberPathLossEstimatePerServing-r16"
		},
};
static const int asn_MAP_OLPC_SRS_Pos_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_OLPC_SRS_Pos_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OLPC_SRS_Pos_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* olpc-SRS-PosBasedOnPRS-Serving-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* olpc-SRS-PosBasedOnSSB-Neigh-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* olpc-SRS-PosBasedOnPRS-Neigh-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxNumberPathLossEstimatePerServing-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_OLPC_SRS_Pos_r16_specs_1 = {
	sizeof(struct OLPC_SRS_Pos_r16),
	offsetof(struct OLPC_SRS_Pos_r16, _asn_ctx),
	asn_MAP_OLPC_SRS_Pos_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_OLPC_SRS_Pos_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OLPC_SRS_Pos_r16 = {
	"OLPC-SRS-Pos-r16",
	"OLPC-SRS-Pos-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_OLPC_SRS_Pos_r16_tags_1,
	sizeof(asn_DEF_OLPC_SRS_Pos_r16_tags_1)
		/sizeof(asn_DEF_OLPC_SRS_Pos_r16_tags_1[0]), /* 1 */
	asn_DEF_OLPC_SRS_Pos_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_OLPC_SRS_Pos_r16_tags_1)
		/sizeof(asn_DEF_OLPC_SRS_Pos_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_OLPC_SRS_Pos_r16_1,
	4,	/* Elements count */
	&asn_SPC_OLPC_SRS_Pos_r16_specs_1	/* Additional specs */
};

