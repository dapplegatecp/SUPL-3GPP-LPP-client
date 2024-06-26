/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "src/ULP-Version-2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#include "Ver2-SETCapabilities-extension.h"

#include "ServiceCapabilities.h"
#include "SupportedBearers.h"
asn_TYPE_member_t asn_MBR_Ver2_SETCapabilities_extension_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Ver2_SETCapabilities_extension, serviceCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceCapabilities,
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
		"serviceCapabilities"
		},
	{ ATF_POINTER, 1, offsetof(struct Ver2_SETCapabilities_extension, supportedBearers),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBearers,
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
		"supportedBearers"
		},
};
static const int asn_MAP_Ver2_SETCapabilities_extension_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_Ver2_SETCapabilities_extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ver2_SETCapabilities_extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* serviceCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedBearers */
};
asn_SEQUENCE_specifics_t asn_SPC_Ver2_SETCapabilities_extension_specs_1 = {
	sizeof(struct Ver2_SETCapabilities_extension),
	offsetof(struct Ver2_SETCapabilities_extension, _asn_ctx),
	asn_MAP_Ver2_SETCapabilities_extension_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Ver2_SETCapabilities_extension_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ver2_SETCapabilities_extension = {
	"Ver2-SETCapabilities-extension",
	"Ver2-SETCapabilities-extension",
	&asn_OP_SEQUENCE,
	asn_DEF_Ver2_SETCapabilities_extension_tags_1,
	sizeof(asn_DEF_Ver2_SETCapabilities_extension_tags_1)
		/sizeof(asn_DEF_Ver2_SETCapabilities_extension_tags_1[0]), /* 1 */
	asn_DEF_Ver2_SETCapabilities_extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ver2_SETCapabilities_extension_tags_1)
		/sizeof(asn_DEF_Ver2_SETCapabilities_extension_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ver2_SETCapabilities_extension_1,
	2,	/* Elements count */
	&asn_SPC_Ver2_SETCapabilities_extension_specs_1	/* Additional specs */
};

