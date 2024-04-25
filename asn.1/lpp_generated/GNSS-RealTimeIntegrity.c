/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-RealTimeIntegrity.h"

asn_TYPE_member_t asn_MBR_GNSS_RealTimeIntegrity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_RealTimeIntegrity, gnss_BadSignalList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_BadSignalList,
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
		"gnss-BadSignalList"
		},
};
static const ber_tlv_tag_t asn_DEF_GNSS_RealTimeIntegrity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_RealTimeIntegrity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gnss-BadSignalList */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_RealTimeIntegrity_specs_1 = {
	sizeof(struct GNSS_RealTimeIntegrity),
	offsetof(struct GNSS_RealTimeIntegrity, _asn_ctx),
	asn_MAP_GNSS_RealTimeIntegrity_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_RealTimeIntegrity = {
	"GNSS-RealTimeIntegrity",
	"GNSS-RealTimeIntegrity",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_RealTimeIntegrity_tags_1,
	sizeof(asn_DEF_GNSS_RealTimeIntegrity_tags_1)
		/sizeof(asn_DEF_GNSS_RealTimeIntegrity_tags_1[0]), /* 1 */
	asn_DEF_GNSS_RealTimeIntegrity_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_RealTimeIntegrity_tags_1)
		/sizeof(asn_DEF_GNSS_RealTimeIntegrity_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_RealTimeIntegrity_1,
	1,	/* Elements count */
	&asn_SPC_GNSS_RealTimeIntegrity_specs_1	/* Additional specs */
};

