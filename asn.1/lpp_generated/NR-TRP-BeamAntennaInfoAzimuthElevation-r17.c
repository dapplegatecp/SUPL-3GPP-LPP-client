/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-TRP-BeamAntennaInfoAzimuthElevation-r17.h"

#include "ElevationElement-R17.h"
static int
memb_azimuth_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 359L)) {
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
memb_azimuth_fine_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 9L)) {
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
memb_elevationList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 1801UL)) {
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
static asn_per_constraints_t asn_PER_type_elevationList_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  1801 }	/* (SIZE(1..1801)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_azimuth_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  359 }	/* (0..359) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_azimuth_fine_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_elevationList_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  1801 }	/* (SIZE(1..1801)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_elevationList_r17_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ElevationElement_R17,
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
static const ber_tlv_tag_t asn_DEF_elevationList_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_elevationList_r17_specs_4 = {
	sizeof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17__elevationList_r17),
	offsetof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17__elevationList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_elevationList_r17_4 = {
	"elevationList-r17",
	"elevationList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_elevationList_r17_tags_4,
	sizeof(asn_DEF_elevationList_r17_tags_4)
		/sizeof(asn_DEF_elevationList_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_elevationList_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_elevationList_r17_tags_4)
		/sizeof(asn_DEF_elevationList_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_elevationList_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_elevationList_r17_4,
	1,	/* Single element */
	&asn_SPC_elevationList_r17_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17, azimuth_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_azimuth_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_azimuth_r17_constraint_1
		},
		0, 0, /* No default value */
		"azimuth-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17, azimuth_fine_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_azimuth_fine_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_azimuth_fine_r17_constraint_1
		},
		0, 0, /* No default value */
		"azimuth-fine-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17, elevationList_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_elevationList_r17_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_elevationList_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_elevationList_r17_constraint_1
		},
		0, 0, /* No default value */
		"elevationList-r17"
		},
};
static const int asn_MAP_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* azimuth-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* azimuth-fine-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* elevationList-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_specs_1 = {
	sizeof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17),
	offsetof(struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17, _asn_ctx),
	asn_MAP_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17 = {
	"NR-TRP-BeamAntennaInfoAzimuthElevation-r17",
	"NR-TRP-BeamAntennaInfoAzimuthElevation-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1,
	sizeof(asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1)
		/sizeof(asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1)
		/sizeof(asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_specs_1	/* Additional specs */
};

