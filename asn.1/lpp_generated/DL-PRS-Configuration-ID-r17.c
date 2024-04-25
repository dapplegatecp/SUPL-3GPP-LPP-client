/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "DL-PRS-Configuration-ID-r17.h"

static int
memb_nr_dl_prs_configuration_id_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_dl_prs_configuration_id_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_DL_PRS_Configuration_ID_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PRS_Configuration_ID_r17, nr_dl_prs_configuration_id_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_dl_prs_configuration_id_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_dl_prs_configuration_id_r17_constraint_1
		},
		0, 0, /* No default value */
		"nr-dl-prs-configuration-id-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_PRS_Configuration_ID_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_PRS_Configuration_ID_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nr-dl-prs-configuration-id-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_Configuration_ID_r17_specs_1 = {
	sizeof(struct DL_PRS_Configuration_ID_r17),
	offsetof(struct DL_PRS_Configuration_ID_r17, _asn_ctx),
	asn_MAP_DL_PRS_Configuration_ID_r17_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_Configuration_ID_r17 = {
	"DL-PRS-Configuration-ID-r17",
	"DL-PRS-Configuration-ID-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_PRS_Configuration_ID_r17_tags_1,
	sizeof(asn_DEF_DL_PRS_Configuration_ID_r17_tags_1)
		/sizeof(asn_DEF_DL_PRS_Configuration_ID_r17_tags_1[0]), /* 1 */
	asn_DEF_DL_PRS_Configuration_ID_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PRS_Configuration_ID_r17_tags_1)
		/sizeof(asn_DEF_DL_PRS_Configuration_ID_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DL_PRS_Configuration_ID_r17_1,
	1,	/* Elements count */
	&asn_SPC_DL_PRS_Configuration_ID_r17_specs_1	/* Additional specs */
};

