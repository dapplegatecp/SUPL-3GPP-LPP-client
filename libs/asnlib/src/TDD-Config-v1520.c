/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "TDD-Config-v1520.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_subframeAssignment_v1520_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subframeAssignment_v1520_value2enum_2[] = {
	{ 0,	3,	"sa0" },
	{ 1,	3,	"sa1" },
	{ 2,	3,	"sa2" },
	{ 3,	3,	"sa3" },
	{ 4,	3,	"sa4" },
	{ 5,	3,	"sa5" },
	{ 6,	3,	"sa6" }
};
static const unsigned int asn_MAP_subframeAssignment_v1520_enum2value_2[] = {
	0,	/* sa0(0) */
	1,	/* sa1(1) */
	2,	/* sa2(2) */
	3,	/* sa3(3) */
	4,	/* sa4(4) */
	5,	/* sa5(5) */
	6	/* sa6(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_subframeAssignment_v1520_specs_2 = {
	asn_MAP_subframeAssignment_v1520_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_subframeAssignment_v1520_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subframeAssignment_v1520_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframeAssignment_v1520_2 = {
	"subframeAssignment-v1520",
	"subframeAssignment-v1520",
	&asn_OP_NativeEnumerated,
	asn_DEF_subframeAssignment_v1520_tags_2,
	sizeof(asn_DEF_subframeAssignment_v1520_tags_2)
		/sizeof(asn_DEF_subframeAssignment_v1520_tags_2[0]) - 1, /* 1 */
	asn_DEF_subframeAssignment_v1520_tags_2,	/* Same as above */
	sizeof(asn_DEF_subframeAssignment_v1520_tags_2)
		/sizeof(asn_DEF_subframeAssignment_v1520_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_subframeAssignment_v1520_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subframeAssignment_v1520_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TDD_Config_v1520_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_Config_v1520, subframeAssignment_v1520),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subframeAssignment_v1520_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignment-v1520"
		},
};
static const ber_tlv_tag_t asn_DEF_TDD_Config_v1520_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TDD_Config_v1520_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeAssignment-v1520 */
};
asn_SEQUENCE_specifics_t asn_SPC_TDD_Config_v1520_specs_1 = {
	sizeof(struct TDD_Config_v1520),
	offsetof(struct TDD_Config_v1520, _asn_ctx),
	asn_MAP_TDD_Config_v1520_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TDD_Config_v1520 = {
	"TDD-Config-v1520",
	"TDD-Config-v1520",
	&asn_OP_SEQUENCE,
	asn_DEF_TDD_Config_v1520_tags_1,
	sizeof(asn_DEF_TDD_Config_v1520_tags_1)
		/sizeof(asn_DEF_TDD_Config_v1520_tags_1[0]), /* 1 */
	asn_DEF_TDD_Config_v1520_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_Config_v1520_tags_1)
		/sizeof(asn_DEF_TDD_Config_v1520_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TDD_Config_v1520_1,
	1,	/* Elements count */
	&asn_SPC_TDD_Config_v1520_specs_1	/* Additional specs */
};

