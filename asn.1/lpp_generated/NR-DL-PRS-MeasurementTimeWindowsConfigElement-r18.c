/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-DL-PRS-MeasurementTimeWindowsConfigElement-r18.h"

#include "NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r16.h"
#include "NR-SelectedDL-PRS-IndexPerTRP-r18.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nr_StartSFN_TimeWindow_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1023L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nr_SymbolOffsetTimeWindow_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 13L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nr_SelectedDL_PRS_FrequencyLayerIndex_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 3L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nr_SelectedDL_PRS_IndexListPerFreq_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
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
static asn_per_constraints_t asn_PER_type_nr_DurationTimeWindow_r18_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_SelectedDL_PRS_IndexListPerFreq_r18_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_StartSFN_TimeWindow_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_SymbolOffsetTimeWindow_r18_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_SelectedDL_PRS_FrequencyLayerIndex_r18_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_SelectedDL_PRS_IndexListPerFreq_r18_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_nr_DurationTimeWindow_r18_value2enum_5[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n8" },
	{ 5,	3,	"n12" },
	{ 6,	3,	"n16" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_nr_DurationTimeWindow_r18_enum2value_5[] = {
	0,	/* n1(0) */
	5,	/* n12(5) */
	6,	/* n16(6) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3,	/* n6(3) */
	4	/* n8(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_DurationTimeWindow_r18_specs_5 = {
	asn_MAP_nr_DurationTimeWindow_r18_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_DurationTimeWindow_r18_enum2value_5,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_DurationTimeWindow_r18_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_DurationTimeWindow_r18_5 = {
	"nr-DurationTimeWindow-r18",
	"nr-DurationTimeWindow-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_DurationTimeWindow_r18_tags_5,
	sizeof(asn_DEF_nr_DurationTimeWindow_r18_tags_5)
		/sizeof(asn_DEF_nr_DurationTimeWindow_r18_tags_5[0]) - 1, /* 1 */
	asn_DEF_nr_DurationTimeWindow_r18_tags_5,	/* Same as above */
	sizeof(asn_DEF_nr_DurationTimeWindow_r18_tags_5)
		/sizeof(asn_DEF_nr_DurationTimeWindow_r18_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_DurationTimeWindow_r18_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_DurationTimeWindow_r18_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_SelectedDL_PRS_IndexListPerFreq_r18_15[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SelectedDL_PRS_IndexPerTRP_r18,
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
static const ber_tlv_tag_t asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nr_SelectedDL_PRS_IndexListPerFreq_r18_specs_15 = {
	sizeof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_SelectedDL_PRS_IndexListPerFreq_r18),
	offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18__nr_SelectedDL_PRS_IndexListPerFreq_r18, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_15 = {
	"nr-SelectedDL-PRS-IndexListPerFreq-r18",
	"nr-SelectedDL-PRS-IndexListPerFreq-r18",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15,
	sizeof(asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15)
		/sizeof(asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15[0]) - 1, /* 1 */
	asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15,	/* Same as above */
	sizeof(asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15)
		/sizeof(asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_SelectedDL_PRS_IndexListPerFreq_r18_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_nr_SelectedDL_PRS_IndexListPerFreq_r18_15,
	1,	/* Single element */
	&asn_SPC_nr_SelectedDL_PRS_IndexListPerFreq_r18_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_StartSFN_TimeWindow_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_StartSFN_TimeWindow_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_StartSFN_TimeWindow_r18_constraint_1
		},
		0, 0, /* No default value */
		"nr-StartSFN-TimeWindow-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_PeriodicityAndSlotOffsetTimeWindow_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16,
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
		"nr-PeriodicityAndSlotOffsetTimeWindow-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_SymbolOffsetTimeWindow_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_SymbolOffsetTimeWindow_r18_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_SymbolOffsetTimeWindow_r18_constraint_1
		},
		0, 0, /* No default value */
		"nr-SymbolOffsetTimeWindow-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_DurationTimeWindow_r18),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_DurationTimeWindow_r18_5,
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
		"nr-DurationTimeWindow-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_SelectedDL_PRS_FrequencyLayerIndex_r18),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_SelectedDL_PRS_FrequencyLayerIndex_r18_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_SelectedDL_PRS_FrequencyLayerIndex_r18_constraint_1
		},
		0, 0, /* No default value */
		"nr-SelectedDL-PRS-FrequencyLayerIndex-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, nr_SelectedDL_PRS_IndexListPerFreq_r18),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_nr_SelectedDL_PRS_IndexListPerFreq_r18_15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_SelectedDL_PRS_IndexListPerFreq_r18_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_SelectedDL_PRS_IndexListPerFreq_r18_constraint_1
		},
		0, 0, /* No default value */
		"nr-SelectedDL-PRS-IndexListPerFreq-r18"
		},
};
static const int asn_MAP_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_oms_1[] = { 1, 2, 5 };
static const ber_tlv_tag_t asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-StartSFN-TimeWindow-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-PeriodicityAndSlotOffsetTimeWindow-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nr-SymbolOffsetTimeWindow-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nr-DurationTimeWindow-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nr-SelectedDL-PRS-FrequencyLayerIndex-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nr-SelectedDL-PRS-IndexListPerFreq-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_specs_1 = {
	sizeof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18),
	offsetof(struct NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18, _asn_ctx),
	asn_MAP_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18 = {
	"NR-DL-PRS-MeasurementTimeWindowsConfigElement-r18",
	"NR-DL-PRS-MeasurementTimeWindowsConfigElement-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1,
	sizeof(asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_1,
	6,	/* Elements count */
	&asn_SPC_NR_DL_PRS_MeasurementTimeWindowsConfigElement_r18_specs_1	/* Additional specs */
};
