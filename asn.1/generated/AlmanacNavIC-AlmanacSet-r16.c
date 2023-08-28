/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "AlmanacNavIC-AlmanacSet-r16.h"

static int
memb_navic_AlmToa_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
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
memb_navic_AlmE_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
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
memb_navic_AlmOMEGADOT_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_navic_AlmSqrtA_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 16777215)) {
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
memb_navic_AlmOMEGAo_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8388608 && value <= 8388607)) {
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
memb_navic_AlmOmega_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8388608 && value <= 8388607)) {
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
memb_navic_AlmMo_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8388608 && value <= 8388607)) {
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
memb_navic_Almaf0_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1024 && value <= 1023)) {
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
memb_navic_Almaf1_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1024 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_navic_AlmToa_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmE_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmOMEGADOT_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmSqrtA_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1,  0,  16777215 }	/* (0..16777215) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmOMEGAo_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1, -8388608,  8388607 }	/* (-8388608..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmOmega_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1, -8388608,  8388607 }	/* (-8388608..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_AlmMo_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1, -8388608,  8388607 }	/* (-8388608..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_Almaf0_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11, -1024,  1023 }	/* (-1024..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_navic_Almaf1_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11, -1024,  1023 }	/* (-1024..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AlmanacNavIC_AlmanacSet_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, svID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SV_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"svID-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmToa_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmToa_r16_constr_3,  memb_navic_AlmToa_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmToa-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmE_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmE_r16_constr_4,  memb_navic_AlmE_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmE-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmOMEGADOT_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmOMEGADOT_r16_constr_5,  memb_navic_AlmOMEGADOT_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmOMEGADOT-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmSqrtA_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmSqrtA_r16_constr_6,  memb_navic_AlmSqrtA_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmSqrtA-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmOMEGAo_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmOMEGAo_r16_constr_7,  memb_navic_AlmOMEGAo_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmOMEGAo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmOmega_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmOmega_r16_constr_8,  memb_navic_AlmOmega_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmOmega-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_AlmMo_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_AlmMo_r16_constr_9,  memb_navic_AlmMo_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-AlmMo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_Almaf0_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_Almaf0_r16_constr_10,  memb_navic_Almaf0_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-Almaf0-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlmanacNavIC_AlmanacSet_r16, navic_Almaf1_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_navic_Almaf1_r16_constr_11,  memb_navic_Almaf1_r16_constraint_1 },
		0, 0, /* No default value */
		"navic-Almaf1-r16"
		},
};
static const int asn_MAP_AlmanacNavIC_AlmanacSet_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AlmanacNavIC_AlmanacSet_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* navic-AlmToa-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* navic-AlmE-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* navic-AlmOMEGADOT-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* navic-AlmSqrtA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* navic-AlmOMEGAo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* navic-AlmOmega-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* navic-AlmMo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* navic-Almaf0-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* navic-Almaf1-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_AlmanacNavIC_AlmanacSet_r16_specs_1 = {
	sizeof(struct AlmanacNavIC_AlmanacSet_r16),
	offsetof(struct AlmanacNavIC_AlmanacSet_r16, _asn_ctx),
	asn_MAP_AlmanacNavIC_AlmanacSet_r16_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_AlmanacNavIC_AlmanacSet_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AlmanacNavIC_AlmanacSet_r16 = {
	"AlmanacNavIC-AlmanacSet-r16",
	"AlmanacNavIC-AlmanacSet-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1,
	sizeof(asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1)
		/sizeof(asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1[0]), /* 1 */
	asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1)
		/sizeof(asn_DEF_AlmanacNavIC_AlmanacSet_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AlmanacNavIC_AlmanacSet_r16_1,
	10,	/* Elements count */
	&asn_SPC_AlmanacNavIC_AlmanacSet_r16_specs_1	/* Additional specs */
};
