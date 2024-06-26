/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-UE-TEG-ID-CapabilityPerBand-r17.h"

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
static asn_per_constraints_t asn_PER_type_nr_UE_RxTEG_ID_MaxSupport_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_UE_TxTEG_ID_MaxSupport_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_UE_RxTxTEG_ID_MaxSupport_r17_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_nr_UE_RxTEG_ID_MaxSupport_r17_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" }
};
static const unsigned int asn_MAP_nr_UE_RxTEG_ID_MaxSupport_r17_enum2value_3[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_UE_RxTEG_ID_MaxSupport_r17_specs_3 = {
	asn_MAP_nr_UE_RxTEG_ID_MaxSupport_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_UE_RxTEG_ID_MaxSupport_r17_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_3 = {
	"nr-UE-RxTEG-ID-MaxSupport-r17",
	"nr-UE-RxTEG-ID-MaxSupport-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3,
	sizeof(asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3)
		/sizeof(asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3)
		/sizeof(asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_UE_RxTEG_ID_MaxSupport_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_UE_RxTEG_ID_MaxSupport_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nr_UE_TxTEG_ID_MaxSupport_r17_value2enum_10[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" }
};
static const unsigned int asn_MAP_nr_UE_TxTEG_ID_MaxSupport_r17_enum2value_10[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_UE_TxTEG_ID_MaxSupport_r17_specs_10 = {
	asn_MAP_nr_UE_TxTEG_ID_MaxSupport_r17_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_UE_TxTEG_ID_MaxSupport_r17_enum2value_10,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_10 = {
	"nr-UE-TxTEG-ID-MaxSupport-r17",
	"nr-UE-TxTEG-ID-MaxSupport-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10,
	sizeof(asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10)
		/sizeof(asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10)
		/sizeof(asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_UE_TxTEG_ID_MaxSupport_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_UE_TxTEG_ID_MaxSupport_r17_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nr_UE_RxTxTEG_ID_MaxSupport_r17_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n8" },
	{ 5,	3,	"n12" },
	{ 6,	3,	"n16" },
	{ 7,	3,	"n24" },
	{ 8,	3,	"n32" },
	{ 9,	3,	"n36" },
	{ 10,	3,	"n48" },
	{ 11,	3,	"n64" }
};
static const unsigned int asn_MAP_nr_UE_RxTxTEG_ID_MaxSupport_r17_enum2value_17[] = {
	0,	/* n1(0) */
	5,	/* n12(5) */
	6,	/* n16(6) */
	1,	/* n2(1) */
	7,	/* n24(7) */
	8,	/* n32(8) */
	9,	/* n36(9) */
	2,	/* n4(2) */
	10,	/* n48(10) */
	3,	/* n6(3) */
	11,	/* n64(11) */
	4	/* n8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_UE_RxTxTEG_ID_MaxSupport_r17_specs_17 = {
	asn_MAP_nr_UE_RxTxTEG_ID_MaxSupport_r17_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_UE_RxTxTEG_ID_MaxSupport_r17_enum2value_17,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_17 = {
	"nr-UE-RxTxTEG-ID-MaxSupport-r17",
	"nr-UE-RxTxTEG-ID-MaxSupport-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17,
	sizeof(asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17)
		/sizeof(asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17[0]) - 1, /* 1 */
	asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17,	/* Same as above */
	sizeof(asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17)
		/sizeof(asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_UE_RxTxTEG_ID_MaxSupport_r17_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_UE_RxTxTEG_ID_MaxSupport_r17_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_value2enum_30[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n8" }
};
static const unsigned int asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_enum2value_30[] = {
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n6(3) */
	4	/* n8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_specs_30 = {
	asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_enum2value_30,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_30 = {
	"measureSameDL-PRS-ResourceWithDifferentRxTEGs-r17",
	"measureSameDL-PRS-ResourceWithDifferentRxTEGs-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30,
	sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30)
		/sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30[0]) - 1, /* 1 */
	asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30,	/* Same as above */
	sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30)
		/sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_tags_30[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_constr_30,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_value2enum_36[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" }
};
static const unsigned int asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_enum2value_36[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_specs_36 = {
	asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_enum2value_36,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_36 = {
	"measureSameDL-PRS-ResourceWithDifferentRxTEGsSimul-r17",
	"measureSameDL-PRS-ResourceWithDifferentRxTEGsSimul-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36,
	sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36)
		/sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36[0]) - 1, /* 1 */
	asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36,	/* Same as above */
	sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36)
		/sizeof(asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_tags_36[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_constr_36,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_specs_36	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UE_TEG_ID_CapabilityPerBand_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, freqBandIndicatorNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorNR_r16,
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
		"freqBandIndicatorNR-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, nr_UE_RxTEG_ID_MaxSupport_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_3,
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
		"nr-UE-RxTEG-ID-MaxSupport-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, nr_UE_TxTEG_ID_MaxSupport_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_10,
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
		"nr-UE-TxTEG-ID-MaxSupport-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, nr_UE_RxTxTEG_ID_MaxSupport_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_17,
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
		"nr-UE-RxTxTEG-ID-MaxSupport-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_30,
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
		"measureSameDL-PRS-ResourceWithDifferentRxTEGs-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_36,
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
		"measureSameDL-PRS-ResourceWithDifferentRxTEGsSimul-r17"
		},
};
static const int asn_MAP_NR_UE_TEG_ID_CapabilityPerBand_r17_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UE_TEG_ID_CapabilityPerBand_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandIndicatorNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-UE-RxTEG-ID-MaxSupport-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nr-UE-TxTEG-ID-MaxSupport-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nr-UE-RxTxTEG-ID-MaxSupport-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measureSameDL-PRS-ResourceWithDifferentRxTEGs-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* measureSameDL-PRS-ResourceWithDifferentRxTEGsSimul-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UE_TEG_ID_CapabilityPerBand_r17_specs_1 = {
	sizeof(struct NR_UE_TEG_ID_CapabilityPerBand_r17),
	offsetof(struct NR_UE_TEG_ID_CapabilityPerBand_r17, _asn_ctx),
	asn_MAP_NR_UE_TEG_ID_CapabilityPerBand_r17_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_UE_TEG_ID_CapabilityPerBand_r17_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17 = {
	"NR-UE-TEG-ID-CapabilityPerBand-r17",
	"NR-UE-TEG-ID-CapabilityPerBand-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1,
	sizeof(asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1)
		/sizeof(asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1)
		/sizeof(asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UE_TEG_ID_CapabilityPerBand_r17_1,
	6,	/* Elements count */
	&asn_SPC_NR_UE_TEG_ID_CapabilityPerBand_r17_specs_1	/* Additional specs */
};

