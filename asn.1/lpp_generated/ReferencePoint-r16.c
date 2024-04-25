/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "ReferencePoint-r16.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_referencePointGeographicLocation_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_referencePointGeographicLocation_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePoint_r16__referencePointGeographicLocation_r16, choice.location3D_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointWithAltitudeAndUncertaintyEllipsoid,
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
		"location3D-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePoint_r16__referencePointGeographicLocation_r16, choice.ha_location3D_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15,
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
		"ha-location3D-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePoint_r16__referencePointGeographicLocation_r16, choice.localOrigin_v1800),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocalOrigin_r18,
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
		"localOrigin-v1800"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_referencePointGeographicLocation_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* location3D-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ha-location3D-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* localOrigin-v1800 */
};
static asn_CHOICE_specifics_t asn_SPC_referencePointGeographicLocation_r16_specs_2 = {
	sizeof(struct ReferencePoint_r16__referencePointGeographicLocation_r16),
	offsetof(struct ReferencePoint_r16__referencePointGeographicLocation_r16, _asn_ctx),
	offsetof(struct ReferencePoint_r16__referencePointGeographicLocation_r16, present),
	sizeof(((struct ReferencePoint_r16__referencePointGeographicLocation_r16 *)0)->present),
	asn_MAP_referencePointGeographicLocation_r16_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_referencePointGeographicLocation_r16_2 = {
	"referencePointGeographicLocation-r16",
	"referencePointGeographicLocation-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_referencePointGeographicLocation_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_referencePointGeographicLocation_r16_2,
	3,	/* Elements count */
	&asn_SPC_referencePointGeographicLocation_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReferencePoint_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePoint_r16, referencePointGeographicLocation_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_referencePointGeographicLocation_r16_2,
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
		"referencePointGeographicLocation-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_ReferencePoint_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReferencePoint_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* referencePointGeographicLocation-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_ReferencePoint_r16_specs_1 = {
	sizeof(struct ReferencePoint_r16),
	offsetof(struct ReferencePoint_r16, _asn_ctx),
	asn_MAP_ReferencePoint_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReferencePoint_r16 = {
	"ReferencePoint-r16",
	"ReferencePoint-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_ReferencePoint_r16_tags_1,
	sizeof(asn_DEF_ReferencePoint_r16_tags_1)
		/sizeof(asn_DEF_ReferencePoint_r16_tags_1[0]), /* 1 */
	asn_DEF_ReferencePoint_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferencePoint_r16_tags_1)
		/sizeof(asn_DEF_ReferencePoint_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ReferencePoint_r16_1,
	1,	/* Elements count */
	&asn_SPC_ReferencePoint_r16_specs_1	/* Additional specs */
};
