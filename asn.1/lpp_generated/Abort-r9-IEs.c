/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "Abort-r9-IEs.h"

#include "CommonIEsAbort.h"
#include "EPDU-Sequence.h"
asn_TYPE_member_t asn_MBR_Abort_r9_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Abort_r9_IEs, commonIEsAbort),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonIEsAbort,
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
		"commonIEsAbort"
		},
	{ ATF_POINTER, 1, offsetof(struct Abort_r9_IEs, epdu_Abort),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDU_Sequence,
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
		"epdu-Abort"
		},
};
static const int asn_MAP_Abort_r9_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_Abort_r9_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Abort_r9_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commonIEsAbort */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* epdu-Abort */
};
asn_SEQUENCE_specifics_t asn_SPC_Abort_r9_IEs_specs_1 = {
	sizeof(struct Abort_r9_IEs),
	offsetof(struct Abort_r9_IEs, _asn_ctx),
	asn_MAP_Abort_r9_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Abort_r9_IEs_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Abort_r9_IEs = {
	"Abort-r9-IEs",
	"Abort-r9-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_Abort_r9_IEs_tags_1,
	sizeof(asn_DEF_Abort_r9_IEs_tags_1)
		/sizeof(asn_DEF_Abort_r9_IEs_tags_1[0]), /* 1 */
	asn_DEF_Abort_r9_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_Abort_r9_IEs_tags_1)
		/sizeof(asn_DEF_Abort_r9_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Abort_r9_IEs_1,
	2,	/* Elements count */
	&asn_SPC_Abort_r9_IEs_specs_1	/* Additional specs */
};

