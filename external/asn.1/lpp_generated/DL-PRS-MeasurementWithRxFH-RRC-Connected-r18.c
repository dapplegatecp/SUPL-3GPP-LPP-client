/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "DL-PRS-MeasurementWithRxFH-RRC-Connected-r18.h"

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
static asn_per_constraints_t asn_PER_type_maximumPRS_BandwidthAcrossAllHopsFR1_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumPRS_BandwidthAcrossAllHopsFR2_r18_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumFH_Hops_r18_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_processingPRS_SymbolsDurationN3_r18_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  17 }	/* (0..17) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_processingDurationT3_r18_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_RxRetuneTimeFR1_r18_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_RxRetuneTimeFR2_r18_constr_52 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_numOfOverlappingPRB_r18_constr_56 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR1_r18_value2enum_2[] = {
	{ 0,	5,	"mhz40" },
	{ 1,	5,	"mhz50" },
	{ 2,	5,	"mhz80" },
	{ 3,	6,	"mhz100" }
};
static const unsigned int asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR1_r18_enum2value_2[] = {
	3,	/* mhz100(3) */
	0,	/* mhz40(0) */
	1,	/* mhz50(1) */
	2	/* mhz80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumPRS_BandwidthAcrossAllHopsFR1_r18_specs_2 = {
	asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR1_r18_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR1_r18_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_2 = {
	"maximumPRS-BandwidthAcrossAllHopsFR1-r18",
	"maximumPRS-BandwidthAcrossAllHopsFR1-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2,
	sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2)
		/sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2[0]) - 1, /* 1 */
	asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2,	/* Same as above */
	sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2)
		/sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumPRS_BandwidthAcrossAllHopsFR1_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumPRS_BandwidthAcrossAllHopsFR1_r18_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR2_r18_value2enum_7[] = {
	{ 0,	6,	"mhz100" },
	{ 1,	6,	"mhz200" },
	{ 2,	6,	"mhz400" }
};
static const unsigned int asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR2_r18_enum2value_7[] = {
	0,	/* mhz100(0) */
	1,	/* mhz200(1) */
	2	/* mhz400(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumPRS_BandwidthAcrossAllHopsFR2_r18_specs_7 = {
	asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR2_r18_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumPRS_BandwidthAcrossAllHopsFR2_r18_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_7 = {
	"maximumPRS-BandwidthAcrossAllHopsFR2-r18",
	"maximumPRS-BandwidthAcrossAllHopsFR2-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7,
	sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7)
		/sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7[0]) - 1, /* 1 */
	asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7,	/* Same as above */
	sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7)
		/sizeof(asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumPRS_BandwidthAcrossAllHopsFR2_r18_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumPRS_BandwidthAcrossAllHopsFR2_r18_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumFH_Hops_r18_value2enum_11[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n5" },
	{ 4,	2,	"n6" }
};
static const unsigned int asn_MAP_maximumFH_Hops_r18_enum2value_11[] = {
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n5(3) */
	4	/* n6(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumFH_Hops_r18_specs_11 = {
	asn_MAP_maximumFH_Hops_r18_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumFH_Hops_r18_enum2value_11,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumFH_Hops_r18_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumFH_Hops_r18_11 = {
	"maximumFH-Hops-r18",
	"maximumFH-Hops-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumFH_Hops_r18_tags_11,
	sizeof(asn_DEF_maximumFH_Hops_r18_tags_11)
		/sizeof(asn_DEF_maximumFH_Hops_r18_tags_11[0]) - 1, /* 1 */
	asn_DEF_maximumFH_Hops_r18_tags_11,	/* Same as above */
	sizeof(asn_DEF_maximumFH_Hops_r18_tags_11)
		/sizeof(asn_DEF_maximumFH_Hops_r18_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumFH_Hops_r18_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumFH_Hops_r18_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_processingPRS_SymbolsDurationN3_r18_value2enum_18[] = {
	{ 0,	8,	"msDot125" },
	{ 1,	7,	"msDot25" },
	{ 2,	6,	"msDot5" },
	{ 3,	3,	"ms1" },
	{ 4,	3,	"ms2" },
	{ 5,	3,	"ms4" },
	{ 6,	3,	"ms6" },
	{ 7,	3,	"ms8" },
	{ 8,	4,	"ms12" },
	{ 9,	4,	"ms16" },
	{ 10,	4,	"ms20" },
	{ 11,	4,	"ms25" },
	{ 12,	4,	"ms30" },
	{ 13,	4,	"ms32" },
	{ 14,	4,	"ms35" },
	{ 15,	4,	"ms40" },
	{ 16,	4,	"ms45" },
	{ 17,	4,	"ms50" }
};
static const unsigned int asn_MAP_processingPRS_SymbolsDurationN3_r18_enum2value_18[] = {
	3,	/* ms1(3) */
	8,	/* ms12(8) */
	9,	/* ms16(9) */
	4,	/* ms2(4) */
	10,	/* ms20(10) */
	11,	/* ms25(11) */
	12,	/* ms30(12) */
	13,	/* ms32(13) */
	14,	/* ms35(14) */
	5,	/* ms4(5) */
	15,	/* ms40(15) */
	16,	/* ms45(16) */
	17,	/* ms50(17) */
	6,	/* ms6(6) */
	7,	/* ms8(7) */
	0,	/* msDot125(0) */
	1,	/* msDot25(1) */
	2	/* msDot5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_processingPRS_SymbolsDurationN3_r18_specs_18 = {
	asn_MAP_processingPRS_SymbolsDurationN3_r18_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_processingPRS_SymbolsDurationN3_r18_enum2value_18,	/* N => "tag"; sorted by N */
	18,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_processingPRS_SymbolsDurationN3_r18_18 = {
	"processingPRS-SymbolsDurationN3-r18",
	"processingPRS-SymbolsDurationN3-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18,
	sizeof(asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18)
		/sizeof(asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18[0]) - 1, /* 1 */
	asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18,	/* Same as above */
	sizeof(asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18)
		/sizeof(asn_DEF_processingPRS_SymbolsDurationN3_r18_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_processingPRS_SymbolsDurationN3_r18_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_processingPRS_SymbolsDurationN3_r18_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_processingDurationT3_r18_value2enum_37[] = {
	{ 0,	3,	"ms8" },
	{ 1,	4,	"ms16" },
	{ 2,	4,	"ms20" },
	{ 3,	4,	"ms30" },
	{ 4,	4,	"ms40" },
	{ 5,	4,	"ms80" },
	{ 6,	5,	"ms160" },
	{ 7,	5,	"ms320" },
	{ 8,	5,	"ms640" },
	{ 9,	6,	"ms1280" }
};
static const unsigned int asn_MAP_processingDurationT3_r18_enum2value_37[] = {
	9,	/* ms1280(9) */
	1,	/* ms16(1) */
	6,	/* ms160(6) */
	2,	/* ms20(2) */
	3,	/* ms30(3) */
	7,	/* ms320(7) */
	4,	/* ms40(4) */
	8,	/* ms640(8) */
	0,	/* ms8(0) */
	5	/* ms80(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_processingDurationT3_r18_specs_37 = {
	asn_MAP_processingDurationT3_r18_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_processingDurationT3_r18_enum2value_37,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_processingDurationT3_r18_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_processingDurationT3_r18_37 = {
	"processingDurationT3-r18",
	"processingDurationT3-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_processingDurationT3_r18_tags_37,
	sizeof(asn_DEF_processingDurationT3_r18_tags_37)
		/sizeof(asn_DEF_processingDurationT3_r18_tags_37[0]) - 1, /* 1 */
	asn_DEF_processingDurationT3_r18_tags_37,	/* Same as above */
	sizeof(asn_DEF_processingDurationT3_r18_tags_37)
		/sizeof(asn_DEF_processingDurationT3_r18_tags_37[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_processingDurationT3_r18_constr_37,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_processingDurationT3_r18_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_processingDuration_r18_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18__processingDuration_r18, processingPRS_SymbolsDurationN3_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_processingPRS_SymbolsDurationN3_r18_18,
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
		"processingPRS-SymbolsDurationN3-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18__processingDuration_r18, processingDurationT3_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_processingDurationT3_r18_37,
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
		"processingDurationT3-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_processingDuration_r18_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_processingDuration_r18_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* processingPRS-SymbolsDurationN3-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* processingDurationT3-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_processingDuration_r18_specs_17 = {
	sizeof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18__processingDuration_r18),
	offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18__processingDuration_r18, _asn_ctx),
	asn_MAP_processingDuration_r18_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_processingDuration_r18_17 = {
	"processingDuration-r18",
	"processingDuration-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_processingDuration_r18_tags_17,
	sizeof(asn_DEF_processingDuration_r18_tags_17)
		/sizeof(asn_DEF_processingDuration_r18_tags_17[0]) - 1, /* 1 */
	asn_DEF_processingDuration_r18_tags_17,	/* Same as above */
	sizeof(asn_DEF_processingDuration_r18_tags_17)
		/sizeof(asn_DEF_processingDuration_r18_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_processingDuration_r18_17,
	2,	/* Elements count */
	&asn_SPC_processingDuration_r18_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rf_RxRetuneTimeFR1_r18_value2enum_48[] = {
	{ 0,	3,	"n70" },
	{ 1,	4,	"n140" },
	{ 2,	4,	"n210" }
};
static const unsigned int asn_MAP_rf_RxRetuneTimeFR1_r18_enum2value_48[] = {
	1,	/* n140(1) */
	2,	/* n210(2) */
	0	/* n70(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_RxRetuneTimeFR1_r18_specs_48 = {
	asn_MAP_rf_RxRetuneTimeFR1_r18_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_RxRetuneTimeFR1_r18_enum2value_48,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_RxRetuneTimeFR1_r18_48 = {
	"rf-RxRetuneTimeFR1-r18",
	"rf-RxRetuneTimeFR1-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48,
	sizeof(asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48)
		/sizeof(asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48[0]) - 1, /* 1 */
	asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48,	/* Same as above */
	sizeof(asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48)
		/sizeof(asn_DEF_rf_RxRetuneTimeFR1_r18_tags_48[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_RxRetuneTimeFR1_r18_constr_48,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_RxRetuneTimeFR1_r18_specs_48	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rf_RxRetuneTimeFR2_r18_value2enum_52[] = {
	{ 0,	3,	"n35" },
	{ 1,	3,	"n70" },
	{ 2,	4,	"n140" }
};
static const unsigned int asn_MAP_rf_RxRetuneTimeFR2_r18_enum2value_52[] = {
	2,	/* n140(2) */
	0,	/* n35(0) */
	1	/* n70(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_RxRetuneTimeFR2_r18_specs_52 = {
	asn_MAP_rf_RxRetuneTimeFR2_r18_value2enum_52,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_RxRetuneTimeFR2_r18_enum2value_52,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_RxRetuneTimeFR2_r18_52 = {
	"rf-RxRetuneTimeFR2-r18",
	"rf-RxRetuneTimeFR2-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52,
	sizeof(asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52)
		/sizeof(asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52[0]) - 1, /* 1 */
	asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52,	/* Same as above */
	sizeof(asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52)
		/sizeof(asn_DEF_rf_RxRetuneTimeFR2_r18_tags_52[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_RxRetuneTimeFR2_r18_constr_52,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_RxRetuneTimeFR2_r18_specs_52	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_numOfOverlappingPRB_r18_value2enum_56[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_numOfOverlappingPRB_r18_enum2value_56[] = {
	0,	/* n0(0) */
	1,	/* n1(1) */
	2,	/* n2(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numOfOverlappingPRB_r18_specs_56 = {
	asn_MAP_numOfOverlappingPRB_r18_value2enum_56,	/* "tag" => N; sorted by tag */
	asn_MAP_numOfOverlappingPRB_r18_enum2value_56,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numOfOverlappingPRB_r18_tags_56[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numOfOverlappingPRB_r18_56 = {
	"numOfOverlappingPRB-r18",
	"numOfOverlappingPRB-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_numOfOverlappingPRB_r18_tags_56,
	sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_56)
		/sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_56[0]) - 1, /* 1 */
	asn_DEF_numOfOverlappingPRB_r18_tags_56,	/* Same as above */
	sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_56)
		/sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_56[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_numOfOverlappingPRB_r18_constr_56,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numOfOverlappingPRB_r18_specs_56	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_1[] = {
	{ ATF_POINTER, 7, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, maximumPRS_BandwidthAcrossAllHopsFR1_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR1_r18_2,
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
		"maximumPRS-BandwidthAcrossAllHopsFR1-r18"
		},
	{ ATF_POINTER, 6, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, maximumPRS_BandwidthAcrossAllHopsFR2_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumPRS_BandwidthAcrossAllHopsFR2_r18_7,
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
		"maximumPRS-BandwidthAcrossAllHopsFR2-r18"
		},
	{ ATF_POINTER, 5, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, maximumFH_Hops_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumFH_Hops_r18_11,
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
		"maximumFH-Hops-r18"
		},
	{ ATF_POINTER, 4, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, processingDuration_r18),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_processingDuration_r18_17,
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
		"processingDuration-r18"
		},
	{ ATF_POINTER, 3, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, rf_RxRetuneTimeFR1_r18),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_RxRetuneTimeFR1_r18_48,
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
		"rf-RxRetuneTimeFR1-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, rf_RxRetuneTimeFR2_r18),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_RxRetuneTimeFR2_r18_52,
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
		"rf-RxRetuneTimeFR2-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, numOfOverlappingPRB_r18),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numOfOverlappingPRB_r18_56,
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
		"numOfOverlappingPRB-r18"
		},
};
static const int asn_MAP_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maximumPRS-BandwidthAcrossAllHopsFR1-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maximumPRS-BandwidthAcrossAllHopsFR2-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maximumFH-Hops-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* processingDuration-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rf-RxRetuneTimeFR1-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rf-RxRetuneTimeFR2-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* numOfOverlappingPRB-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_specs_1 = {
	sizeof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18),
	offsetof(struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18, _asn_ctx),
	asn_MAP_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 = {
	"DL-PRS-MeasurementWithRxFH-RRC-Connected-r18",
	"DL-PRS-MeasurementWithRxFH-RRC-Connected-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1,
	sizeof(asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1)
		/sizeof(asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1[0]), /* 1 */
	asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1)
		/sizeof(asn_DEF_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_1,
	7,	/* Elements count */
	&asn_SPC_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_specs_1	/* Additional specs */
};

