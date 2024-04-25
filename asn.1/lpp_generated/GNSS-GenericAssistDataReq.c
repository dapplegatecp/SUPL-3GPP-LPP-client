/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-GenericAssistDataReq.h"

#include "GNSS-GenericAssistDataReqElement.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_GNSS_GenericAssistDataReq_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_GNSS_GenericAssistDataReq_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GNSS_GenericAssistDataReqElement,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_GNSS_GenericAssistDataReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_GNSS_GenericAssistDataReq_specs_1 = {
	sizeof(struct GNSS_GenericAssistDataReq),
	offsetof(struct GNSS_GenericAssistDataReq, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_GenericAssistDataReq = {
	"GNSS-GenericAssistDataReq",
	"GNSS-GenericAssistDataReq",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_GNSS_GenericAssistDataReq_tags_1,
	sizeof(asn_DEF_GNSS_GenericAssistDataReq_tags_1)
		/sizeof(asn_DEF_GNSS_GenericAssistDataReq_tags_1[0]), /* 1 */
	asn_DEF_GNSS_GenericAssistDataReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_GenericAssistDataReq_tags_1)
		/sizeof(asn_DEF_GNSS_GenericAssistDataReq_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_GNSS_GenericAssistDataReq_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_GNSS_GenericAssistDataReq_1,
	1,	/* Single element */
	&asn_SPC_GNSS_GenericAssistDataReq_specs_1	/* Additional specs */
};

