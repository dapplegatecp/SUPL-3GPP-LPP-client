/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "DL-PRS-QCL-InformationReqPerTRP-r17.h"

#include "NCGI-r15.h"
#include "DL-PRS-QCL-InfoReq-r17.h"
static int
memb_dl_PRS_ID_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dl_prs_QCL_InformationReqSet_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 2UL)) {
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
static asn_per_constraints_t asn_PER_type_dl_prs_QCL_InformationReqSet_r17_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_PRS_ID_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_prs_QCL_InformationReqSet_r17_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_dl_prs_QCL_InformationReqSet_r17_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DL_PRS_QCL_InfoReq_r17,
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
static const ber_tlv_tag_t asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dl_prs_QCL_InformationReqSet_r17_specs_6 = {
	sizeof(struct DL_PRS_QCL_InformationReqPerTRP_r17__dl_prs_QCL_InformationReqSet_r17),
	offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17__dl_prs_QCL_InformationReqSet_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_QCL_InformationReqSet_r17_6 = {
	"dl-prs-QCL-InformationReqSet-r17",
	"dl-prs-QCL-InformationReqSet-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6,
	sizeof(asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6)
		/sizeof(asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6)
		/sizeof(asn_DEF_dl_prs_QCL_InformationReqSet_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_QCL_InformationReqSet_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_dl_prs_QCL_InformationReqSet_r17_6,
	1,	/* Single element */
	&asn_SPC_dl_prs_QCL_InformationReqSet_r17_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_PRS_QCL_InformationReqPerTRP_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, dl_PRS_ID_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_PRS_ID_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_dl_PRS_ID_r17_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-ID-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, nr_PhysCellID_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PhysCellID_r16,
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
		"nr-PhysCellID-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, nr_CellGlobalID_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NCGI_r15,
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
		"nr-CellGlobalID-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, nr_ARFCN_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
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
		"nr-ARFCN-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, dl_prs_QCL_InformationReqSet_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_dl_prs_QCL_InformationReqSet_r17_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_prs_QCL_InformationReqSet_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_dl_prs_QCL_InformationReqSet_r17_constraint_1
		},
		0, 0, /* No default value */
		"dl-prs-QCL-InformationReqSet-r17"
		},
};
static const int asn_MAP_DL_PRS_QCL_InformationReqPerTRP_r17_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_PRS_QCL_InformationReqPerTRP_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-PRS-ID-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-PhysCellID-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nr-CellGlobalID-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nr-ARFCN-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dl-prs-QCL-InformationReqSet-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_QCL_InformationReqPerTRP_r17_specs_1 = {
	sizeof(struct DL_PRS_QCL_InformationReqPerTRP_r17),
	offsetof(struct DL_PRS_QCL_InformationReqPerTRP_r17, _asn_ctx),
	asn_MAP_DL_PRS_QCL_InformationReqPerTRP_r17_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DL_PRS_QCL_InformationReqPerTRP_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17 = {
	"DL-PRS-QCL-InformationReqPerTRP-r17",
	"DL-PRS-QCL-InformationReqPerTRP-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1,
	sizeof(asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1)
		/sizeof(asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1[0]), /* 1 */
	asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1)
		/sizeof(asn_DEF_DL_PRS_QCL_InformationReqPerTRP_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DL_PRS_QCL_InformationReqPerTRP_r17_1,
	5,	/* Elements count */
	&asn_SPC_DL_PRS_QCL_InformationReqPerTRP_r17_specs_1	/* Additional specs */
};
