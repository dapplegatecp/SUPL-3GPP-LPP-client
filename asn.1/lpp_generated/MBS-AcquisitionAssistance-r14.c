/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "MBS-AcquisitionAssistance-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_transmitterID_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 32767L)) {
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
memb_pnCodeIndex_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 128L)) {
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
memb_freq_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 919750000L && value <= 927250000L)) {
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
static asn_per_constraints_t asn_PER_type_mbsConfiguration_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_transmitterID_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32767 }	/* (0..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_pnCodeIndex_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_freq_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 23, -1,  919750000,  927250000 }	/* (919750000..927250000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mbsConfiguration_r14_value2enum_3[] = {
	{ 0,	3,	"tb1" },
	{ 1,	3,	"tb2" },
	{ 2,	3,	"tb3" },
	{ 3,	3,	"tb4" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_mbsConfiguration_r14_enum2value_3[] = {
	0,	/* tb1(0) */
	1,	/* tb2(1) */
	2,	/* tb3(2) */
	3	/* tb4(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_mbsConfiguration_r14_specs_3 = {
	asn_MAP_mbsConfiguration_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mbsConfiguration_r14_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbsConfiguration_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbsConfiguration_r14_3 = {
	"mbsConfiguration-r14",
	"mbsConfiguration-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbsConfiguration_r14_tags_3,
	sizeof(asn_DEF_mbsConfiguration_r14_tags_3)
		/sizeof(asn_DEF_mbsConfiguration_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_mbsConfiguration_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_mbsConfiguration_r14_tags_3)
		/sizeof(asn_DEF_mbsConfiguration_r14_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mbsConfiguration_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbsConfiguration_r14_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBS_AcquisitionAssistance_r14_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MBS_AcquisitionAssistance_r14, transmitterID_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_transmitterID_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_transmitterID_r14_constraint_1
		},
		0, 0, /* No default value */
		"transmitterID-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MBS_AcquisitionAssistance_r14, mbsConfiguration_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbsConfiguration_r14_3,
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
		"mbsConfiguration-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MBS_AcquisitionAssistance_r14, pnCodeIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_pnCodeIndex_r14_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_pnCodeIndex_r14_constraint_1
		},
		0, 0, /* No default value */
		"pnCodeIndex-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MBS_AcquisitionAssistance_r14, freq_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_freq_r14_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_freq_r14_constraint_1
		},
		0, 0, /* No default value */
		"freq-r14"
		},
};
static const int asn_MAP_MBS_AcquisitionAssistance_r14_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MBS_AcquisitionAssistance_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBS_AcquisitionAssistance_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmitterID-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbsConfiguration-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pnCodeIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* freq-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBS_AcquisitionAssistance_r14_specs_1 = {
	sizeof(struct MBS_AcquisitionAssistance_r14),
	offsetof(struct MBS_AcquisitionAssistance_r14, _asn_ctx),
	asn_MAP_MBS_AcquisitionAssistance_r14_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MBS_AcquisitionAssistance_r14_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBS_AcquisitionAssistance_r14 = {
	"MBS-AcquisitionAssistance-r14",
	"MBS-AcquisitionAssistance-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MBS_AcquisitionAssistance_r14_tags_1,
	sizeof(asn_DEF_MBS_AcquisitionAssistance_r14_tags_1)
		/sizeof(asn_DEF_MBS_AcquisitionAssistance_r14_tags_1[0]), /* 1 */
	asn_DEF_MBS_AcquisitionAssistance_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBS_AcquisitionAssistance_r14_tags_1)
		/sizeof(asn_DEF_MBS_AcquisitionAssistance_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MBS_AcquisitionAssistance_r14_1,
	4,	/* Elements count */
	&asn_SPC_MBS_AcquisitionAssistance_r14_specs_1	/* Additional specs */
};

