/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "SSR-CodeBiasSatElement-r15.h"

asn_TYPE_member_t asn_MBR_SSR_CodeBiasSatElement_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSR_CodeBiasSatElement_r15, svID_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SV_ID,
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
		"svID-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSR_CodeBiasSatElement_r15, ssr_CodeBiasSignalList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSR_CodeBiasSignalList_r15,
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
		"ssr-CodeBiasSignalList-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_SSR_CodeBiasSatElement_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSR_CodeBiasSatElement_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssr-CodeBiasSignalList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SSR_CodeBiasSatElement_r15_specs_1 = {
	sizeof(struct SSR_CodeBiasSatElement_r15),
	offsetof(struct SSR_CodeBiasSatElement_r15, _asn_ctx),
	asn_MAP_SSR_CodeBiasSatElement_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSR_CodeBiasSatElement_r15 = {
	"SSR-CodeBiasSatElement-r15",
	"SSR-CodeBiasSatElement-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SSR_CodeBiasSatElement_r15_tags_1,
	sizeof(asn_DEF_SSR_CodeBiasSatElement_r15_tags_1)
		/sizeof(asn_DEF_SSR_CodeBiasSatElement_r15_tags_1[0]), /* 1 */
	asn_DEF_SSR_CodeBiasSatElement_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSR_CodeBiasSatElement_r15_tags_1)
		/sizeof(asn_DEF_SSR_CodeBiasSatElement_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SSR_CodeBiasSatElement_r15_1,
	2,	/* Elements count */
	&asn_SPC_SSR_CodeBiasSatElement_r15_specs_1	/* Additional specs */
};

