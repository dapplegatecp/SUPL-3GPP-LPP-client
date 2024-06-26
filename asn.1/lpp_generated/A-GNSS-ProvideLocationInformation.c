/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "A-GNSS-ProvideLocationInformation.h"

#include "GNSS-SignalMeasurementInformation.h"
#include "GNSS-LocationInformation.h"
#include "A-GNSS-Error.h"
asn_TYPE_member_t asn_MBR_A_GNSS_ProvideLocationInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct A_GNSS_ProvideLocationInformation, gnss_SignalMeasurementInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SignalMeasurementInformation,
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
		"gnss-SignalMeasurementInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct A_GNSS_ProvideLocationInformation, gnss_LocationInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_LocationInformation,
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
		"gnss-LocationInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct A_GNSS_ProvideLocationInformation, gnss_Error),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_A_GNSS_Error,
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
		"gnss-Error"
		},
};
static const int asn_MAP_A_GNSS_ProvideLocationInformation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_A_GNSS_ProvideLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_A_GNSS_ProvideLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SignalMeasurementInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-LocationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gnss-Error */
};
asn_SEQUENCE_specifics_t asn_SPC_A_GNSS_ProvideLocationInformation_specs_1 = {
	sizeof(struct A_GNSS_ProvideLocationInformation),
	offsetof(struct A_GNSS_ProvideLocationInformation, _asn_ctx),
	asn_MAP_A_GNSS_ProvideLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_A_GNSS_ProvideLocationInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_A_GNSS_ProvideLocationInformation = {
	"A-GNSS-ProvideLocationInformation",
	"A-GNSS-ProvideLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_A_GNSS_ProvideLocationInformation_tags_1,
	sizeof(asn_DEF_A_GNSS_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_A_GNSS_ProvideLocationInformation_tags_1[0]), /* 1 */
	asn_DEF_A_GNSS_ProvideLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_A_GNSS_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_A_GNSS_ProvideLocationInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_A_GNSS_ProvideLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_A_GNSS_ProvideLocationInformation_specs_1	/* Additional specs */
};

