/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "PressureValidityArea-v1520.h"

static int
memb_validityAreaWidth_v1520_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
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
memb_validityAreaHeight_v1520_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_validityAreaWidth_v1520_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_validityAreaHeight_v1520_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PressureValidityArea_v1520_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PressureValidityArea_v1520, centerPoint_v1520),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ellipsoid_Point,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"centerPoint-v1520"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PressureValidityArea_v1520, validityAreaWidth_v1520),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_validityAreaWidth_v1520_constr_3,  memb_validityAreaWidth_v1520_constraint_1 },
		0, 0, /* No default value */
		"validityAreaWidth-v1520"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PressureValidityArea_v1520, validityAreaHeight_v1520),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_validityAreaHeight_v1520_constr_4,  memb_validityAreaHeight_v1520_constraint_1 },
		0, 0, /* No default value */
		"validityAreaHeight-v1520"
		},
};
static const ber_tlv_tag_t asn_DEF_PressureValidityArea_v1520_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PressureValidityArea_v1520_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* centerPoint-v1520 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* validityAreaWidth-v1520 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* validityAreaHeight-v1520 */
};
asn_SEQUENCE_specifics_t asn_SPC_PressureValidityArea_v1520_specs_1 = {
	sizeof(struct PressureValidityArea_v1520),
	offsetof(struct PressureValidityArea_v1520, _asn_ctx),
	asn_MAP_PressureValidityArea_v1520_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PressureValidityArea_v1520 = {
	"PressureValidityArea-v1520",
	"PressureValidityArea-v1520",
	&asn_OP_SEQUENCE,
	asn_DEF_PressureValidityArea_v1520_tags_1,
	sizeof(asn_DEF_PressureValidityArea_v1520_tags_1)
		/sizeof(asn_DEF_PressureValidityArea_v1520_tags_1[0]), /* 1 */
	asn_DEF_PressureValidityArea_v1520_tags_1,	/* Same as above */
	sizeof(asn_DEF_PressureValidityArea_v1520_tags_1)
		/sizeof(asn_DEF_PressureValidityArea_v1520_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PressureValidityArea_v1520_1,
	3,	/* Elements count */
	&asn_SPC_PressureValidityArea_v1520_specs_1	/* Additional specs */
};
