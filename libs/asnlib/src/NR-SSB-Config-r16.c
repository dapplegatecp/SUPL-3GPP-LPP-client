/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "NR-SSB-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_shortBitmap_r16_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_mediumBitmap_r16_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_longBitmap_r16_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sf5_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
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
memb_sf10_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_sf20_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_sf40_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_sf80_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_sf160_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ss_PBCH_BlockPower_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
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
memb_halfFrameIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
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
memb_sfn_SSB_Offset_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ssb_Periodicity_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_shortBitmap_r16_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mediumBitmap_r16_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_longBitmap_r16_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ssb_PositionsInBurst_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ssbSubcarrierSpacing_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf5_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf10_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf20_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf40_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf80_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf160_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicityAndOffset_r16_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_duration_r16_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ss_PBCH_BlockPower_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_halfFrameIndex_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sfn_SSB_Offset_r16_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ssb_Periodicity_r16_value2enum_5[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms20" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms80" },
	{ 5,	5,	"ms160" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ssb_Periodicity_r16_enum2value_5[] = {
	1,	/* ms10(1) */
	5,	/* ms160(5) */
	2,	/* ms20(2) */
	3,	/* ms40(3) */
	0,	/* ms5(0) */
	4	/* ms80(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ssb_Periodicity_r16_specs_5 = {
	asn_MAP_ssb_Periodicity_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ssb_Periodicity_r16_enum2value_5,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ssb_Periodicity_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_Periodicity_r16_5 = {
	"ssb-Periodicity-r16",
	"ssb-Periodicity-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ssb_Periodicity_r16_tags_5,
	sizeof(asn_DEF_ssb_Periodicity_r16_tags_5)
		/sizeof(asn_DEF_ssb_Periodicity_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_ssb_Periodicity_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_ssb_Periodicity_r16_tags_5)
		/sizeof(asn_DEF_ssb_Periodicity_r16_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ssb_Periodicity_r16_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ssb_Periodicity_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_PositionsInBurst_r16_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16, choice.shortBitmap_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_shortBitmap_r16_constr_14,  memb_shortBitmap_r16_constraint_13 },
		0, 0, /* No default value */
		"shortBitmap-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16, choice.mediumBitmap_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_mediumBitmap_r16_constr_15,  memb_mediumBitmap_r16_constraint_13 },
		0, 0, /* No default value */
		"mediumBitmap-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16, choice.longBitmap_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_longBitmap_r16_constr_16,  memb_longBitmap_r16_constraint_13 },
		0, 0, /* No default value */
		"longBitmap-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ssb_PositionsInBurst_r16_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortBitmap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mediumBitmap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* longBitmap-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_ssb_PositionsInBurst_r16_specs_13 = {
	sizeof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16),
	offsetof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16, _asn_ctx),
	offsetof(struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16, present),
	sizeof(((struct NR_SSB_Config_r16__ssb_PositionsInBurst_r16 *)0)->present),
	asn_MAP_ssb_PositionsInBurst_r16_tag2el_13,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_PositionsInBurst_r16_13 = {
	"ssb-PositionsInBurst-r16",
	"ssb-PositionsInBurst-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ssb_PositionsInBurst_r16_constr_13, CHOICE_constraint },
	asn_MBR_ssb_PositionsInBurst_r16_13,
	3,	/* Elements count */
	&asn_SPC_ssb_PositionsInBurst_r16_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ssbSubcarrierSpacing_r16_value2enum_17[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	5,	"kHz60" },
	{ 3,	6,	"kHz120" },
	{ 4,	6,	"kHz240" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ssbSubcarrierSpacing_r16_enum2value_17[] = {
	3,	/* kHz120(3) */
	0,	/* kHz15(0) */
	4,	/* kHz240(4) */
	1,	/* kHz30(1) */
	2	/* kHz60(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ssbSubcarrierSpacing_r16_specs_17 = {
	asn_MAP_ssbSubcarrierSpacing_r16_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_ssbSubcarrierSpacing_r16_enum2value_17,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ssbSubcarrierSpacing_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssbSubcarrierSpacing_r16_17 = {
	"ssbSubcarrierSpacing-r16",
	"ssbSubcarrierSpacing-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ssbSubcarrierSpacing_r16_tags_17,
	sizeof(asn_DEF_ssbSubcarrierSpacing_r16_tags_17)
		/sizeof(asn_DEF_ssbSubcarrierSpacing_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_ssbSubcarrierSpacing_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_ssbSubcarrierSpacing_r16_tags_17)
		/sizeof(asn_DEF_ssbSubcarrierSpacing_r16_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_ssbSubcarrierSpacing_r16_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ssbSubcarrierSpacing_r16_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodicityAndOffset_r16_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf5_constr_27,  memb_sf5_constraint_26 },
		0, 0, /* No default value */
		"sf5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf10_constr_28,  memb_sf10_constraint_26 },
		0, 0, /* No default value */
		"sf10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf20),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf20_constr_29,  memb_sf20_constraint_26 },
		0, 0, /* No default value */
		"sf20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf40_constr_30,  memb_sf40_constraint_26 },
		0, 0, /* No default value */
		"sf40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf80),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf80_constr_31,  memb_sf80_constraint_26 },
		0, 0, /* No default value */
		"sf80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, choice.sf160),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf160_constr_32,  memb_sf160_constraint_26 },
		0, 0, /* No default value */
		"sf160"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_periodicityAndOffset_r16_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf5 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sf10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf20 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sf80 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sf160 */
};
static asn_CHOICE_specifics_t asn_SPC_periodicityAndOffset_r16_specs_26 = {
	sizeof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16),
	offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, _asn_ctx),
	offsetof(struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16, present),
	sizeof(((struct NR_SSB_Config_r16__smtc_r16__periodicityAndOffset_r16 *)0)->present),
	asn_MAP_periodicityAndOffset_r16_tag2el_26,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityAndOffset_r16_26 = {
	"periodicityAndOffset-r16",
	"periodicityAndOffset-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_periodicityAndOffset_r16_constr_26, CHOICE_constraint },
	asn_MBR_periodicityAndOffset_r16_26,
	6,	/* Elements count */
	&asn_SPC_periodicityAndOffset_r16_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_duration_r16_value2enum_33[] = {
	{ 0,	3,	"sf1" },
	{ 1,	3,	"sf2" },
	{ 2,	3,	"sf3" },
	{ 3,	3,	"sf4" },
	{ 4,	3,	"sf5" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_duration_r16_enum2value_33[] = {
	0,	/* sf1(0) */
	1,	/* sf2(1) */
	2,	/* sf3(2) */
	3,	/* sf4(3) */
	4	/* sf5(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_duration_r16_specs_33 = {
	asn_MAP_duration_r16_value2enum_33,	/* "tag" => N; sorted by tag */
	asn_MAP_duration_r16_enum2value_33,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_duration_r16_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_duration_r16_33 = {
	"duration-r16",
	"duration-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_duration_r16_tags_33,
	sizeof(asn_DEF_duration_r16_tags_33)
		/sizeof(asn_DEF_duration_r16_tags_33[0]) - 1, /* 1 */
	asn_DEF_duration_r16_tags_33,	/* Same as above */
	sizeof(asn_DEF_duration_r16_tags_33)
		/sizeof(asn_DEF_duration_r16_tags_33[0]), /* 2 */
	{ 0, &asn_PER_type_duration_r16_constr_33, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_duration_r16_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_smtc_r16_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16, periodicityAndOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_periodicityAndOffset_r16_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16__smtc_r16, duration_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_duration_r16_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duration-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_smtc_r16_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_smtc_r16_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicityAndOffset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* duration-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_smtc_r16_specs_25 = {
	sizeof(struct NR_SSB_Config_r16__smtc_r16),
	offsetof(struct NR_SSB_Config_r16__smtc_r16, _asn_ctx),
	asn_MAP_smtc_r16_tag2el_25,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_smtc_r16_25 = {
	"smtc-r16",
	"smtc-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_smtc_r16_tags_25,
	sizeof(asn_DEF_smtc_r16_tags_25)
		/sizeof(asn_DEF_smtc_r16_tags_25[0]) - 1, /* 1 */
	asn_DEF_smtc_r16_tags_25,	/* Same as above */
	sizeof(asn_DEF_smtc_r16_tags_25)
		/sizeof(asn_DEF_smtc_r16_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_smtc_r16_25,
	2,	/* Elements count */
	&asn_SPC_smtc_r16_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SSB_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, trp_ID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TRP_ID_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trp-ID-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, ss_PBCH_BlockPower_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ss_PBCH_BlockPower_r16_constr_3,  memb_ss_PBCH_BlockPower_r16_constraint_1 },
		0, 0, /* No default value */
		"ss-PBCH-BlockPower-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, halfFrameIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_halfFrameIndex_r16_constr_4,  memb_halfFrameIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"halfFrameIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, ssb_Periodicity_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ssb_Periodicity_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-Periodicity-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SSB_Config_r16, ssb_PositionsInBurst_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ssb_PositionsInBurst_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionsInBurst-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, ssbSubcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ssbSubcarrierSpacing_r16_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbSubcarrierSpacing-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, sfn_SSB_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sfn_SSB_Offset_r16_constr_24,  memb_sfn_SSB_Offset_r16_constraint_1 },
		0, 0, /* No default value */
		"sfn-SSB-Offset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_Config_r16, smtc_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_smtc_r16_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc-r16"
		},
};
static const int asn_MAP_NR_SSB_Config_r16_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_NR_SSB_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SSB_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trp-ID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ss-PBCH-BlockPower-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* halfFrameIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-Periodicity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ssb-PositionsInBurst-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ssbSubcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sfn-SSB-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* smtc-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SSB_Config_r16_specs_1 = {
	sizeof(struct NR_SSB_Config_r16),
	offsetof(struct NR_SSB_Config_r16, _asn_ctx),
	asn_MAP_NR_SSB_Config_r16_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NR_SSB_Config_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SSB_Config_r16 = {
	"NR-SSB-Config-r16",
	"NR-SSB-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SSB_Config_r16_tags_1,
	sizeof(asn_DEF_NR_SSB_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SSB_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SSB_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SSB_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SSB_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SSB_Config_r16_1,
	8,	/* Elements count */
	&asn_SPC_NR_SSB_Config_r16_specs_1	/* Additional specs */
};

