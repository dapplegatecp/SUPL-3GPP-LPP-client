/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "BT-UniformCircularArray-r18.h"

static int
memb_bt_NoElements_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 74L)) {
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
memb_bt_InterElementDist_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 30L && value <= 130L)) {
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
static asn_per_constraints_t asn_PER_memb_bt_NoElements_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  2,  74 }	/* (2..74) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_bt_InterElementDist_r18_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  30,  130 }	/* (30..130) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_BT_UniformCircularArray_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BT_UniformCircularArray_r18, bt_NoElements_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_bt_NoElements_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_bt_NoElements_r18_constraint_1
		},
		0, 0, /* No default value */
		"bt-NoElements-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BT_UniformCircularArray_r18, bt_InterElementDist_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_bt_InterElementDist_r18_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_bt_InterElementDist_r18_constraint_1
		},
		0, 0, /* No default value */
		"bt-InterElementDist-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_BT_UniformCircularArray_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BT_UniformCircularArray_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bt-NoElements-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bt-InterElementDist-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_BT_UniformCircularArray_r18_specs_1 = {
	sizeof(struct BT_UniformCircularArray_r18),
	offsetof(struct BT_UniformCircularArray_r18, _asn_ctx),
	asn_MAP_BT_UniformCircularArray_r18_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BT_UniformCircularArray_r18 = {
	"BT-UniformCircularArray-r18",
	"BT-UniformCircularArray-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_BT_UniformCircularArray_r18_tags_1,
	sizeof(asn_DEF_BT_UniformCircularArray_r18_tags_1)
		/sizeof(asn_DEF_BT_UniformCircularArray_r18_tags_1[0]), /* 1 */
	asn_DEF_BT_UniformCircularArray_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_BT_UniformCircularArray_r18_tags_1)
		/sizeof(asn_DEF_BT_UniformCircularArray_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BT_UniformCircularArray_r18_1,
	2,	/* Elements count */
	&asn_SPC_BT_UniformCircularArray_r18_specs_1	/* Additional specs */
};

