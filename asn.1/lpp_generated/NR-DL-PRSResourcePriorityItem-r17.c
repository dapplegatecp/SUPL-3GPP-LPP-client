/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-DL-PRSResourcePriorityItem-r17.h"

asn_TYPE_member_t asn_MBR_NR_DL_PRSResourcePriorityItem_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRSResourcePriorityItem_r17, nr_DL_PRS_PrioResourceSetID_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_ResourceSetID_r16,
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
		"nr-DL-PRS-PrioResourceSetID-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRSResourcePriorityItem_r17, nr_DL_PRS_PrioResourceID_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_ResourceID_r16,
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
		"nr-DL-PRS-PrioResourceID-r17"
		},
};
static const int asn_MAP_NR_DL_PRSResourcePriorityItem_r17_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_PRSResourcePriorityItem_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-PRS-PrioResourceSetID-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr-DL-PRS-PrioResourceID-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRSResourcePriorityItem_r17_specs_1 = {
	sizeof(struct NR_DL_PRSResourcePriorityItem_r17),
	offsetof(struct NR_DL_PRSResourcePriorityItem_r17, _asn_ctx),
	asn_MAP_NR_DL_PRSResourcePriorityItem_r17_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_DL_PRSResourcePriorityItem_r17_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRSResourcePriorityItem_r17 = {
	"NR-DL-PRSResourcePriorityItem-r17",
	"NR-DL-PRSResourcePriorityItem-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1,
	sizeof(asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1)
		/sizeof(asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1)
		/sizeof(asn_DEF_NR_DL_PRSResourcePriorityItem_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DL_PRSResourcePriorityItem_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_DL_PRSResourcePriorityItem_r17_specs_1	/* Additional specs */
};
