/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "/home/martin/repos/LPP-Client/asn/ULP-Components.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "RTD.h"

static int
memb_rTDValue_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 16777216)) {
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
memb_rTDAccuracy_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_rTDValue_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 25, -1,  0,  16777216 }	/* (0..16777216) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rTDAccuracy_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RTD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RTD, rTDValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rTDValue_constr_2,  memb_rTDValue_constraint_1 },
		0, 0, /* No default value */
		"rTDValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTD, rTDUnits),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTDUnits,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rTDUnits"
		},
	{ ATF_POINTER, 1, offsetof(struct RTD, rTDAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rTDAccuracy_constr_4,  memb_rTDAccuracy_constraint_1 },
		0, 0, /* No default value */
		"rTDAccuracy"
		},
};
static const int asn_MAP_RTD_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RTD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RTD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rTDValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rTDUnits */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rTDAccuracy */
};
asn_SEQUENCE_specifics_t asn_SPC_RTD_specs_1 = {
	sizeof(struct RTD),
	offsetof(struct RTD, _asn_ctx),
	asn_MAP_RTD_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RTD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RTD = {
	"RTD",
	"RTD",
	&asn_OP_SEQUENCE,
	asn_DEF_RTD_tags_1,
	sizeof(asn_DEF_RTD_tags_1)
		/sizeof(asn_DEF_RTD_tags_1[0]), /* 1 */
	asn_DEF_RTD_tags_1,	/* Same as above */
	sizeof(asn_DEF_RTD_tags_1)
		/sizeof(asn_DEF_RTD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RTD_1,
	3,	/* Elements count */
	&asn_SPC_RTD_specs_1	/* Additional specs */
};
