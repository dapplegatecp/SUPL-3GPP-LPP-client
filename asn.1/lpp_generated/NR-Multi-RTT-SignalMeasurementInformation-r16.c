/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-Multi-RTT-SignalMeasurementInformation-r16.h"

#include "NR-SRS-TxTEG-Element-r17.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nr_SRS_TxTEG_Set_r17_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 256UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_NTA_Offset_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_SRS_TxTEG_Set_r17_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_SRS_TxTEG_Set_r17_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_nr_NTA_Offset_r16_value2enum_3[] = {
	{ 0,	4,	"nTA1" },
	{ 1,	4,	"nTA2" },
	{ 2,	4,	"nTA3" },
	{ 3,	4,	"nTA4" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_nr_NTA_Offset_r16_enum2value_3[] = {
	0,	/* nTA1(0) */
	1,	/* nTA2(1) */
	2,	/* nTA3(2) */
	3	/* nTA4(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_NTA_Offset_r16_specs_3 = {
	asn_MAP_nr_NTA_Offset_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_NTA_Offset_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_NTA_Offset_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_NTA_Offset_r16_3 = {
	"nr-NTA-Offset-r16",
	"nr-NTA-Offset-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_NTA_Offset_r16_tags_3,
	sizeof(asn_DEF_nr_NTA_Offset_r16_tags_3)
		/sizeof(asn_DEF_nr_NTA_Offset_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_nr_NTA_Offset_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_nr_NTA_Offset_r16_tags_3)
		/sizeof(asn_DEF_nr_NTA_Offset_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_NTA_Offset_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_NTA_Offset_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_SRS_TxTEG_Set_r17_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SRS_TxTEG_Element_r17,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nr_SRS_TxTEG_Set_r17_specs_11 = {
	sizeof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext1__nr_SRS_TxTEG_Set_r17),
	offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext1__nr_SRS_TxTEG_Set_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_SRS_TxTEG_Set_r17_11 = {
	"nr-SRS-TxTEG-Set-r17",
	"nr-SRS-TxTEG-Set-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11,
	sizeof(asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11)
		/sizeof(asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11)
		/sizeof(asn_DEF_nr_SRS_TxTEG_Set_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_SRS_TxTEG_Set_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_nr_SRS_TxTEG_Set_r17_11,
	1,	/* Single element */
	&asn_SPC_nr_SRS_TxTEG_Set_r17_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_10[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext1, nr_SRS_TxTEG_Set_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nr_SRS_TxTEG_Set_r17_11,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_SRS_TxTEG_Set_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_SRS_TxTEG_Set_r17_constraint_10
		},
		0, 0, /* No default value */
		"nr-SRS-TxTEG-Set-r17"
		},
};
static const int asn_MAP_ext1_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nr-SRS-TxTEG-Set-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_10 = {
	sizeof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext1),
	offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_10,
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_10,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext2, nr_UE_RxTEG_TimingErrorMargin_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TEG_TimingErrorMargin_r17,
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
		"nr-UE-RxTEG-TimingErrorMargin-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext2, nr_UE_TxTEG_TimingErrorMargin_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TEG_TimingErrorMargin_r17,
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
		"nr-UE-TxTEG-TimingErrorMargin-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext2, nr_UE_RxTxTEG_TimingErrorMargin_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RxTxTEG_TimingErrorMargin_r17,
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
		"nr-UE-RxTxTEG-TimingErrorMargin-r17"
		},
};
static const int asn_MAP_ext2_oms_13[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-UE-RxTEG-TimingErrorMargin-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-UE-TxTEG-TimingErrorMargin-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-UE-RxTxTEG-TimingErrorMargin-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
	sizeof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext2),
	offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_13,
	3,	/* Count of tags in the map */
	asn_MAP_ext2_oms_13,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_13,
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_13,
	3,	/* Elements count */
	&asn_SPC_ext2_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_Multi_RTT_SignalMeasurementInformation_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16, nr_Multi_RTT_MeasList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Multi_RTT_MeasList_r16,
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
		"nr-Multi-RTT-MeasList-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16, nr_NTA_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_NTA_Offset_r16_3,
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
		"nr-NTA-Offset-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_10,
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
	{ ATF_POINTER, 1, offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext2_13,
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
static const int asn_MAP_NR_Multi_RTT_SignalMeasurementInformation_r16_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_Multi_RTT_SignalMeasurementInformation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-Multi-RTT-MeasList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-NTA-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_Multi_RTT_SignalMeasurementInformation_r16_specs_1 = {
	sizeof(struct NR_Multi_RTT_SignalMeasurementInformation_r16),
	offsetof(struct NR_Multi_RTT_SignalMeasurementInformation_r16, _asn_ctx),
	asn_MAP_NR_Multi_RTT_SignalMeasurementInformation_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_Multi_RTT_SignalMeasurementInformation_r16_oms_1,	/* Optional members */
	1, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16 = {
	"NR-Multi-RTT-SignalMeasurementInformation-r16",
	"NR-Multi-RTT-SignalMeasurementInformation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1,
	sizeof(asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1)
		/sizeof(asn_DEF_NR_Multi_RTT_SignalMeasurementInformation_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_Multi_RTT_SignalMeasurementInformation_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_Multi_RTT_SignalMeasurementInformation_r16_specs_1	/* Additional specs */
};

