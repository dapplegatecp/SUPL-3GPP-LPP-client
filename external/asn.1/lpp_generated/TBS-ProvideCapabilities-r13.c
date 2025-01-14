/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "TBS-ProvideCapabilities-r13.h"

#include "MBS-AssistanceDataSupportList-r14.h"
#include "PositioningModes.h"
#include "ScheduledLocationTimeSupportPerMode-r17.h"
#include "PeriodicReportingIntervalMsSupportPerMode-r18.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_mbs_ConfigSupport_r14_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1UL && size <= 8UL)) {
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
memb_tbs_Modes_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1UL && size <= 8UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mbs_IdleStateForMeasurements_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mbs_ConfigSupport_r14_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_tbs_Modes_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mbs_IdleStateForMeasurements_r14_value2enum_15[] = {
	{ 0,	8,	"required" }
};
static const unsigned int asn_MAP_mbs_IdleStateForMeasurements_r14_enum2value_15[] = {
	0	/* required(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbs_IdleStateForMeasurements_r14_specs_15 = {
	asn_MAP_mbs_IdleStateForMeasurements_r14_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_mbs_IdleStateForMeasurements_r14_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbs_IdleStateForMeasurements_r14_15 = {
	"mbs-IdleStateForMeasurements-r14",
	"mbs-IdleStateForMeasurements-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15,
	sizeof(asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15)
		/sizeof(asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15)
		/sizeof(asn_DEF_mbs_IdleStateForMeasurements_r14_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mbs_IdleStateForMeasurements_r14_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbs_IdleStateForMeasurements_r14_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 4, offsetof(struct TBS_ProvideCapabilities_r13__ext1, mbs_AssistanceDataSupportList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBS_AssistanceDataSupportList_r14,
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
		"mbs-AssistanceDataSupportList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct TBS_ProvideCapabilities_r13__ext1, periodicalReportingSupported_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningModes,
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
		"periodicalReportingSupported-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct TBS_ProvideCapabilities_r13__ext1, mbs_ConfigSupport_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mbs_ConfigSupport_r14_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mbs_ConfigSupport_r14_constraint_7
		},
		0, 0, /* No default value */
		"mbs-ConfigSupport-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct TBS_ProvideCapabilities_r13__ext1, mbs_IdleStateForMeasurements_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbs_IdleStateForMeasurements_r14_15,
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
		"mbs-IdleStateForMeasurements-r14"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbs-AssistanceDataSupportList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* periodicalReportingSupported-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbs-ConfigSupport-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mbs-IdleStateForMeasurements-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct TBS_ProvideCapabilities_r13__ext1),
	offsetof(struct TBS_ProvideCapabilities_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	4,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	4, 0,	/* Root/Additions */
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
	4,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_17[] = {
	{ ATF_POINTER, 1, offsetof(struct TBS_ProvideCapabilities_r13__ext2, scheduledLocationRequestSupported_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ScheduledLocationTimeSupportPerMode_r17,
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
		"scheduledLocationRequestSupported-r17"
		},
};
static const int asn_MAP_ext2_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scheduledLocationRequestSupported-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_17 = {
	sizeof(struct TBS_ProvideCapabilities_r13__ext2),
	offsetof(struct TBS_ProvideCapabilities_r13__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_17 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_17,
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_17,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_17,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_19[] = {
	{ ATF_POINTER, 1, offsetof(struct TBS_ProvideCapabilities_r13__ext3, periodicReportingIntervalMsSupport_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicReportingIntervalMsSupportPerMode_r18,
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
		"periodicReportingIntervalMsSupport-r18"
		},
};
static const int asn_MAP_ext3_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* periodicReportingIntervalMsSupport-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_19 = {
	sizeof(struct TBS_ProvideCapabilities_r13__ext3),
	offsetof(struct TBS_ProvideCapabilities_r13__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_19 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_19,
	sizeof(asn_DEF_ext3_tags_19)
		/sizeof(asn_DEF_ext3_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_19)
		/sizeof(asn_DEF_ext3_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_19,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TBS_ProvideCapabilities_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TBS_ProvideCapabilities_r13, tbs_Modes_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_tbs_Modes_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_tbs_Modes_r13_constraint_1
		},
		0, 0, /* No default value */
		"tbs-Modes-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct TBS_ProvideCapabilities_r13, ext1),
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
	{ ATF_POINTER, 2, offsetof(struct TBS_ProvideCapabilities_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext2_17,
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
	{ ATF_POINTER, 1, offsetof(struct TBS_ProvideCapabilities_r13, ext3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext3_19,
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
};
static const int asn_MAP_TBS_ProvideCapabilities_r13_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_TBS_ProvideCapabilities_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TBS_ProvideCapabilities_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tbs-Modes-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_TBS_ProvideCapabilities_r13_specs_1 = {
	sizeof(struct TBS_ProvideCapabilities_r13),
	offsetof(struct TBS_ProvideCapabilities_r13, _asn_ctx),
	asn_MAP_TBS_ProvideCapabilities_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_TBS_ProvideCapabilities_r13_oms_1,	/* Optional members */
	0, 3,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TBS_ProvideCapabilities_r13 = {
	"TBS-ProvideCapabilities-r13",
	"TBS-ProvideCapabilities-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_TBS_ProvideCapabilities_r13_tags_1,
	sizeof(asn_DEF_TBS_ProvideCapabilities_r13_tags_1)
		/sizeof(asn_DEF_TBS_ProvideCapabilities_r13_tags_1[0]), /* 1 */
	asn_DEF_TBS_ProvideCapabilities_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_TBS_ProvideCapabilities_r13_tags_1)
		/sizeof(asn_DEF_TBS_ProvideCapabilities_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TBS_ProvideCapabilities_r13_1,
	4,	/* Elements count */
	&asn_SPC_TBS_ProvideCapabilities_r13_specs_1	/* Additional specs */
};

