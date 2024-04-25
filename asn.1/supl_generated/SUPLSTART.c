/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "src/SUPL-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#include "SUPLSTART.h"

#include "QoP.h"
#include "Ver2-SUPL-START-extension.h"
asn_TYPE_member_t asn_MBR_SUPLSTART_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLSTART, sETCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SETCapabilities,
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
		"sETCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLSTART, locationId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationId,
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
		"locationId"
		},
	{ ATF_POINTER, 2, offsetof(struct SUPLSTART, qoP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoP,
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
		"qoP"
		},
	{ ATF_POINTER, 1, offsetof(struct SUPLSTART, ver2_SUPL_START_extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ver2_SUPL_START_extension,
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
		"ver2-SUPL-START-extension"
		},
};
static const int asn_MAP_SUPLSTART_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_SUPLSTART_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SUPLSTART_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sETCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* qoP */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ver2-SUPL-START-extension */
};
asn_SEQUENCE_specifics_t asn_SPC_SUPLSTART_specs_1 = {
	sizeof(struct SUPLSTART),
	offsetof(struct SUPLSTART, _asn_ctx),
	asn_MAP_SUPLSTART_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SUPLSTART_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SUPLSTART = {
	"SUPLSTART",
	"SUPLSTART",
	&asn_OP_SEQUENCE,
	asn_DEF_SUPLSTART_tags_1,
	sizeof(asn_DEF_SUPLSTART_tags_1)
		/sizeof(asn_DEF_SUPLSTART_tags_1[0]), /* 1 */
	asn_DEF_SUPLSTART_tags_1,	/* Same as above */
	sizeof(asn_DEF_SUPLSTART_tags_1)
		/sizeof(asn_DEF_SUPLSTART_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SUPLSTART_1,
	4,	/* Elements count */
	&asn_SPC_SUPLSTART_specs_1	/* Additional specs */
};

