/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "src/Ver2-ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#include "CellGlobalIdNR.h"

asn_TYPE_member_t asn_MBR_CellGlobalIdNR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdNR, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
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
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdNR, cellIdentityNR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentityNR,
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
		"cellIdentityNR"
		},
};
static const ber_tlv_tag_t asn_DEF_CellGlobalIdNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellGlobalIdNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellIdentityNR */
};
asn_SEQUENCE_specifics_t asn_SPC_CellGlobalIdNR_specs_1 = {
	sizeof(struct CellGlobalIdNR),
	offsetof(struct CellGlobalIdNR, _asn_ctx),
	asn_MAP_CellGlobalIdNR_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellGlobalIdNR = {
	"CellGlobalIdNR",
	"CellGlobalIdNR",
	&asn_OP_SEQUENCE,
	asn_DEF_CellGlobalIdNR_tags_1,
	sizeof(asn_DEF_CellGlobalIdNR_tags_1)
		/sizeof(asn_DEF_CellGlobalIdNR_tags_1[0]), /* 1 */
	asn_DEF_CellGlobalIdNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellGlobalIdNR_tags_1)
		/sizeof(asn_DEF_CellGlobalIdNR_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CellGlobalIdNR_1,
	2,	/* Elements count */
	&asn_SPC_CellGlobalIdNR_specs_1	/* Additional specs */
};

