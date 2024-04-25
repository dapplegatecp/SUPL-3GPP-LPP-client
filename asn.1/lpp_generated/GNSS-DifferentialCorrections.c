/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-DifferentialCorrections.h"

static int
memb_dgnss_RefTime_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 3599L)) {
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
static asn_per_constraints_t asn_PER_memb_dgnss_RefTime_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3599 }	/* (0..3599) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_GNSS_DifferentialCorrections_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_DifferentialCorrections, dgnss_RefTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dgnss_RefTime_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_dgnss_RefTime_constraint_1
		},
		0, 0, /* No default value */
		"dgnss-RefTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_DifferentialCorrections, dgnss_SgnTypeList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DGNSS_SgnTypeList,
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
		"dgnss-SgnTypeList"
		},
};
static const ber_tlv_tag_t asn_DEF_GNSS_DifferentialCorrections_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_DifferentialCorrections_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dgnss-RefTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dgnss-SgnTypeList */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_DifferentialCorrections_specs_1 = {
	sizeof(struct GNSS_DifferentialCorrections),
	offsetof(struct GNSS_DifferentialCorrections, _asn_ctx),
	asn_MAP_GNSS_DifferentialCorrections_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_DifferentialCorrections = {
	"GNSS-DifferentialCorrections",
	"GNSS-DifferentialCorrections",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_DifferentialCorrections_tags_1,
	sizeof(asn_DEF_GNSS_DifferentialCorrections_tags_1)
		/sizeof(asn_DEF_GNSS_DifferentialCorrections_tags_1[0]), /* 1 */
	asn_DEF_GNSS_DifferentialCorrections_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_DifferentialCorrections_tags_1)
		/sizeof(asn_DEF_GNSS_DifferentialCorrections_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_DifferentialCorrections_1,
	2,	/* Elements count */
	&asn_SPC_GNSS_DifferentialCorrections_specs_1	/* Additional specs */
};

