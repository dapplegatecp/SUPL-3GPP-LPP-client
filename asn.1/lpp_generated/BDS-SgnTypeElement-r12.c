/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "BDS-SgnTypeElement-r12.h"

#include "GNSS-SignalID.h"
asn_TYPE_member_t asn_MBR_BDS_SgnTypeElement_r12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct BDS_SgnTypeElement_r12, gnss_SignalID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SignalID,
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
		"gnss-SignalID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BDS_SgnTypeElement_r12, dbds_CorrectionList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DBDS_CorrectionList_r12,
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
		"dbds-CorrectionList-r12"
		},
};
static const int asn_MAP_BDS_SgnTypeElement_r12_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_BDS_SgnTypeElement_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BDS_SgnTypeElement_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SignalID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dbds-CorrectionList-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_BDS_SgnTypeElement_r12_specs_1 = {
	sizeof(struct BDS_SgnTypeElement_r12),
	offsetof(struct BDS_SgnTypeElement_r12, _asn_ctx),
	asn_MAP_BDS_SgnTypeElement_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BDS_SgnTypeElement_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BDS_SgnTypeElement_r12 = {
	"BDS-SgnTypeElement-r12",
	"BDS-SgnTypeElement-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_BDS_SgnTypeElement_r12_tags_1,
	sizeof(asn_DEF_BDS_SgnTypeElement_r12_tags_1)
		/sizeof(asn_DEF_BDS_SgnTypeElement_r12_tags_1[0]), /* 1 */
	asn_DEF_BDS_SgnTypeElement_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_BDS_SgnTypeElement_r12_tags_1)
		/sizeof(asn_DEF_BDS_SgnTypeElement_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BDS_SgnTypeElement_r12_1,
	2,	/* Elements count */
	&asn_SPC_BDS_SgnTypeElement_r12_specs_1	/* Additional specs */
};

