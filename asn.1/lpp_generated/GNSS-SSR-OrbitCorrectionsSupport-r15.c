/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-SSR-OrbitCorrectionsSupport-r15.h"

static int
memb_orbit_IntegritySup_r17_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_memb_orbit_IntegritySup_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_ext1_3[] = {
	{ ATF_POINTER, 1, offsetof(struct GNSS_SSR_OrbitCorrectionsSupport_r15__ext1, orbit_IntegritySup_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_orbit_IntegritySup_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_orbit_IntegritySup_r17_constraint_3
		},
		0, 0, /* No default value */
		"orbit-IntegritySup-r17"
		},
};
static const int asn_MAP_ext1_oms_3[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* orbit-IntegritySup-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_3 = {
	sizeof(struct GNSS_SSR_OrbitCorrectionsSupport_r15__ext1),
	offsetof(struct GNSS_SSR_OrbitCorrectionsSupport_r15__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_3,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_3 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_3,
	sizeof(asn_DEF_ext1_tags_3)
		/sizeof(asn_DEF_ext1_tags_3[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_3,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_3)
		/sizeof(asn_DEF_ext1_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_3,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_SSR_OrbitCorrectionsSupport_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct GNSS_SSR_OrbitCorrectionsSupport_r15, ext1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ext1_3,
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
};
static const int asn_MAP_GNSS_SSR_OrbitCorrectionsSupport_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_SSR_OrbitCorrectionsSupport_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_OrbitCorrectionsSupport_r15_specs_1 = {
	sizeof(struct GNSS_SSR_OrbitCorrectionsSupport_r15),
	offsetof(struct GNSS_SSR_OrbitCorrectionsSupport_r15, _asn_ctx),
	asn_MAP_GNSS_SSR_OrbitCorrectionsSupport_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_GNSS_SSR_OrbitCorrectionsSupport_r15_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	0,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15 = {
	"GNSS-SSR-OrbitCorrectionsSupport-r15",
	"GNSS-SSR-OrbitCorrectionsSupport-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1,
	sizeof(asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1)
		/sizeof(asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1[0]), /* 1 */
	asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1)
		/sizeof(asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_SSR_OrbitCorrectionsSupport_r15_1,
	1,	/* Elements count */
	&asn_SPC_GNSS_SSR_OrbitCorrectionsSupport_r15_specs_1	/* Additional specs */
};

