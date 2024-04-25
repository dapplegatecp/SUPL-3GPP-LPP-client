/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "DL-PRS-ResourceSets-TRP-Element-r16.h"

#include "RelativeLocation-r16.h"
#include "DL-PRS-Resource-ARP-Element-r16.h"
#include "RelativeCartesianLocation-r18.h"
#include "NR-IntegrityLocationBounds-r18.h"
static int
memb_dl_PRS_Resource_ARP_List_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_PRS_Resource_ARP_List_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_PRS_Resource_ARP_List_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_dl_PRS_Resource_ARP_List_r16_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DL_PRS_Resource_ARP_Element_r16,
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
static const ber_tlv_tag_t asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dl_PRS_Resource_ARP_List_r16_specs_3 = {
	sizeof(struct DL_PRS_ResourceSets_TRP_Element_r16__dl_PRS_Resource_ARP_List_r16),
	offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16__dl_PRS_Resource_ARP_List_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_Resource_ARP_List_r16_3 = {
	"dl-PRS-Resource-ARP-List-r16",
	"dl-PRS-Resource-ARP-List-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3,
	sizeof(asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3)
		/sizeof(asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3)
		/sizeof(asn_DEF_dl_PRS_Resource_ARP_List_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_PRS_Resource_ARP_List_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_dl_PRS_Resource_ARP_List_r16_3,
	1,	/* Single element */
	&asn_SPC_dl_PRS_Resource_ARP_List_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 2, offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16__ext1, dl_PRS_ResourceSetARP_Cartesian_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RelativeCartesianLocation_r18,
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
		"dl-PRS-ResourceSetARP-Cartesian-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16__ext1, nr_IntegrityDL_PRS_ResourceSetARP_LocationBounds_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IntegrityLocationBounds_r18,
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
		"nr-IntegrityDL-PRS-ResourceSetARP-LocationBounds-r18"
		},
};
static const int asn_MAP_ext1_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-PRS-ResourceSetARP-Cartesian-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr-IntegrityDL-PRS-ResourceSetARP-LocationBounds-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct DL_PRS_ResourceSets_TRP_Element_r16__ext1),
	offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_6,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_PRS_ResourceSets_TRP_Element_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16, dl_PRS_ResourceSetARP_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RelativeLocation_r16,
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
		"dl-PRS-ResourceSetARP-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16, dl_PRS_Resource_ARP_List_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_dl_PRS_Resource_ARP_List_r16_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_PRS_Resource_ARP_List_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_dl_PRS_Resource_ARP_List_r16_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-Resource-ARP-List-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_6,
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
		"ext1"
		},
};
static const int asn_MAP_DL_PRS_ResourceSets_TRP_Element_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_PRS_ResourceSets_TRP_Element_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-PRS-ResourceSetARP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-PRS-Resource-ARP-List-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_ResourceSets_TRP_Element_r16_specs_1 = {
	sizeof(struct DL_PRS_ResourceSets_TRP_Element_r16),
	offsetof(struct DL_PRS_ResourceSets_TRP_Element_r16, _asn_ctx),
	asn_MAP_DL_PRS_ResourceSets_TRP_Element_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DL_PRS_ResourceSets_TRP_Element_r16_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16 = {
	"DL-PRS-ResourceSets-TRP-Element-r16",
	"DL-PRS-ResourceSets-TRP-Element-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1,
	sizeof(asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1)
		/sizeof(asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[0]), /* 1 */
	asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1)
		/sizeof(asn_DEF_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DL_PRS_ResourceSets_TRP_Element_r16_1,
	3,	/* Elements count */
	&asn_SPC_DL_PRS_ResourceSets_TRP_Element_r16_specs_1	/* Additional specs */
};

