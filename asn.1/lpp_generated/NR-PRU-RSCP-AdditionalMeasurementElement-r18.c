/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-PRU-RSCP-AdditionalMeasurementElement-r18.h"

#include "NR-RSCP-AdditionalMeasurements-r18.h"
static int
memb_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 4UL)) {
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
static asn_per_constraints_t asn_PER_type_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_nr_PRU_RSCP_AdditionalMeasurementsList_r18_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_RSCP_AdditionalMeasurements_r18,
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
static const ber_tlv_tag_t asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nr_PRU_RSCP_AdditionalMeasurementsList_r18_specs_4 = {
	sizeof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18__nr_PRU_RSCP_AdditionalMeasurementsList_r18),
	offsetof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18__nr_PRU_RSCP_AdditionalMeasurementsList_r18, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_4 = {
	"nr-PRU-RSCP-AdditionalMeasurementsList-r18",
	"nr-PRU-RSCP-AdditionalMeasurementsList-r18",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4,
	sizeof(asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4)
		/sizeof(asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4[0]) - 1, /* 1 */
	asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4,	/* Same as above */
	sizeof(asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4)
		/sizeof(asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_nr_PRU_RSCP_AdditionalMeasurementsList_r18_4,
	1,	/* Single element */
	&asn_SPC_nr_PRU_RSCP_AdditionalMeasurementsList_r18_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PRU_RSCP_AdditionalMeasurementElement_r18_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18, nr_DL_PRS_ResourceID_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
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
		"nr-DL-PRS-ResourceID-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18, nr_DL_PRS_ResourceSetID_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"nr-DL-PRS-ResourceSetID-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18, nr_PRU_RSCP_AdditionalMeasurementsList_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nr_PRU_RSCP_AdditionalMeasurementsList_r18_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_PRU_RSCP_AdditionalMeasurementsList_r18_constraint_1
		},
		0, 0, /* No default value */
		"nr-PRU-RSCP-AdditionalMeasurementsList-r18"
		},
};
static const int asn_MAP_NR_PRU_RSCP_AdditionalMeasurementElement_r18_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-PRS-ResourceID-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-DL-PRS-ResourceSetID-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-PRU-RSCP-AdditionalMeasurementsList-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PRU_RSCP_AdditionalMeasurementElement_r18_specs_1 = {
	sizeof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18),
	offsetof(struct NR_PRU_RSCP_AdditionalMeasurementElement_r18, _asn_ctx),
	asn_MAP_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_PRU_RSCP_AdditionalMeasurementElement_r18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18 = {
	"NR-PRU-RSCP-AdditionalMeasurementElement-r18",
	"NR-PRU-RSCP-AdditionalMeasurementElement-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1,
	sizeof(asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1)
		/sizeof(asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1[0]), /* 1 */
	asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1)
		/sizeof(asn_DEF_NR_PRU_RSCP_AdditionalMeasurementElement_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PRU_RSCP_AdditionalMeasurementElement_r18_1,
	3,	/* Elements count */
	&asn_SPC_NR_PRU_RSCP_AdditionalMeasurementElement_r18_specs_1	/* Additional specs */
};

