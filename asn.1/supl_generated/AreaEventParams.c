/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "src/SUPL-TRIGGERED-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#include "AreaEventParams.h"

#include "RepeatedReportingParams.h"
#include "GeographicTargetAreaList.h"
#include "AreaIdList.h"
static int
memb_startTime_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2678400L)) {
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
memb_stopTime_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 11318399L)) {
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
memb_areaIdLists_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
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
static asn_per_constraints_t asn_PER_type_areaIdLists_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_startTime_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 22, -1,  0,  2678400 }	/* (0..2678400) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_stopTime_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1,  0,  11318399 }	/* (0..11318399) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_areaIdLists_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_areaIdLists_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AreaIdList,
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
static const ber_tlv_tag_t asn_DEF_areaIdLists_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_areaIdLists_specs_8 = {
	sizeof(struct AreaEventParams__areaIdLists),
	offsetof(struct AreaEventParams__areaIdLists, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_areaIdLists_8 = {
	"areaIdLists",
	"areaIdLists",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_areaIdLists_tags_8,
	sizeof(asn_DEF_areaIdLists_tags_8)
		/sizeof(asn_DEF_areaIdLists_tags_8[0]) - 1, /* 1 */
	asn_DEF_areaIdLists_tags_8,	/* Same as above */
	sizeof(asn_DEF_areaIdLists_tags_8)
		/sizeof(asn_DEF_areaIdLists_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_areaIdLists_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_areaIdLists_8,
	1,	/* Single element */
	&asn_SPC_areaIdLists_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AreaEventParams_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AreaEventParams, areaEventType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaEventType,
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
		"areaEventType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AreaEventParams, locationEstimate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"locationEstimate"
		},
	{ ATF_POINTER, 5, offsetof(struct AreaEventParams, repeatedReportingParams),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RepeatedReportingParams,
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
		"repeatedReportingParams"
		},
	{ ATF_POINTER, 4, offsetof(struct AreaEventParams, startTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_startTime_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_startTime_constraint_1
		},
		0, 0, /* No default value */
		"startTime"
		},
	{ ATF_POINTER, 3, offsetof(struct AreaEventParams, stopTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_stopTime_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_stopTime_constraint_1
		},
		0, 0, /* No default value */
		"stopTime"
		},
	{ ATF_POINTER, 2, offsetof(struct AreaEventParams, geographicTargetAreaList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeographicTargetAreaList,
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
		"geographicTargetAreaList"
		},
	{ ATF_POINTER, 1, offsetof(struct AreaEventParams, areaIdLists),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_areaIdLists_8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_areaIdLists_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_areaIdLists_constraint_1
		},
		0, 0, /* No default value */
		"areaIdLists"
		},
};
static const int asn_MAP_AreaEventParams_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_AreaEventParams_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AreaEventParams_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* areaEventType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationEstimate */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* repeatedReportingParams */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* startTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* stopTime */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* geographicTargetAreaList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* areaIdLists */
};
asn_SEQUENCE_specifics_t asn_SPC_AreaEventParams_specs_1 = {
	sizeof(struct AreaEventParams),
	offsetof(struct AreaEventParams, _asn_ctx),
	asn_MAP_AreaEventParams_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_AreaEventParams_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AreaEventParams = {
	"AreaEventParams",
	"AreaEventParams",
	&asn_OP_SEQUENCE,
	asn_DEF_AreaEventParams_tags_1,
	sizeof(asn_DEF_AreaEventParams_tags_1)
		/sizeof(asn_DEF_AreaEventParams_tags_1[0]), /* 1 */
	asn_DEF_AreaEventParams_tags_1,	/* Same as above */
	sizeof(asn_DEF_AreaEventParams_tags_1)
		/sizeof(asn_DEF_AreaEventParams_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AreaEventParams_1,
	7,	/* Elements count */
	&asn_SPC_AreaEventParams_specs_1	/* Additional specs */
};

