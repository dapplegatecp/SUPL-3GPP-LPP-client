/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "PosProtocolVersion3GPP.h"

static int
memb_majorVersionField_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_technicalVersionField_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_editorialVersionField_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_majorVersionField_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_technicalVersionField_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_editorialVersionField_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PosProtocolVersion3GPP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocolVersion3GPP, majorVersionField),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_majorVersionField_constr_2,  memb_majorVersionField_constraint_1 },
		0, 0, /* No default value */
		"majorVersionField"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocolVersion3GPP, technicalVersionField),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_technicalVersionField_constr_3,  memb_technicalVersionField_constraint_1 },
		0, 0, /* No default value */
		"technicalVersionField"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocolVersion3GPP, editorialVersionField),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_editorialVersionField_constr_4,  memb_editorialVersionField_constraint_1 },
		0, 0, /* No default value */
		"editorialVersionField"
		},
};
static const ber_tlv_tag_t asn_DEF_PosProtocolVersion3GPP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosProtocolVersion3GPP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* majorVersionField */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* technicalVersionField */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* editorialVersionField */
};
asn_SEQUENCE_specifics_t asn_SPC_PosProtocolVersion3GPP_specs_1 = {
	sizeof(struct PosProtocolVersion3GPP),
	offsetof(struct PosProtocolVersion3GPP, _asn_ctx),
	asn_MAP_PosProtocolVersion3GPP_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PosProtocolVersion3GPP = {
	"PosProtocolVersion3GPP",
	"PosProtocolVersion3GPP",
	&asn_OP_SEQUENCE,
	asn_DEF_PosProtocolVersion3GPP_tags_1,
	sizeof(asn_DEF_PosProtocolVersion3GPP_tags_1)
		/sizeof(asn_DEF_PosProtocolVersion3GPP_tags_1[0]), /* 1 */
	asn_DEF_PosProtocolVersion3GPP_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosProtocolVersion3GPP_tags_1)
		/sizeof(asn_DEF_PosProtocolVersion3GPP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PosProtocolVersion3GPP_1,
	3,	/* Elements count */
	&asn_SPC_PosProtocolVersion3GPP_specs_1	/* Additional specs */
};

