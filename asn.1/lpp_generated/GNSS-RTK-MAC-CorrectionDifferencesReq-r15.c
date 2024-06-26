/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-RTK-MAC-CorrectionDifferencesReq-r15.h"

#include "GNSS-ReferenceStationID-r15.h"
#include "AUX-ReferenceStationList-r15.h"
#include "GNSS-Link-CombinationsList-r15.h"
asn_TYPE_member_t asn_MBR_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15, master_ReferenceStationID_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ReferenceStationID_r15,
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
		"master-ReferenceStationID-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15, aux_ReferenceStationList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AUX_ReferenceStationList_r15,
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
		"aux-ReferenceStationList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15, linkCombinations_PrefList_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_Link_CombinationsList_r15,
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
		"linkCombinations-PrefList-r15"
		},
};
static const int asn_MAP_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* master-ReferenceStationID-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aux-ReferenceStationList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* linkCombinations-PrefList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_specs_1 = {
	sizeof(struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15),
	offsetof(struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15, _asn_ctx),
	asn_MAP_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15 = {
	"GNSS-RTK-MAC-CorrectionDifferencesReq-r15",
	"GNSS-RTK-MAC-CorrectionDifferencesReq-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1,
	sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1)
		/sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1[0]), /* 1 */
	asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1)
		/sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_1,
	3,	/* Elements count */
	&asn_SPC_GNSS_RTK_MAC_CorrectionDifferencesReq_r15_specs_1	/* Additional specs */
};

