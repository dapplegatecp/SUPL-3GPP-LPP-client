/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "GNSS-SubNetworkID-r15.h"

static int
memb_subNetworkID_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_subNetworkID_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GNSS_SubNetworkID_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_SubNetworkID_r15, subNetworkID_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_subNetworkID_r15_constr_2,  memb_subNetworkID_r15_constraint_1 },
		0, 0, /* No default value */
		"subNetworkID-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_GNSS_SubNetworkID_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_SubNetworkID_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subNetworkID-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_SubNetworkID_r15_specs_1 = {
	sizeof(struct GNSS_SubNetworkID_r15),
	offsetof(struct GNSS_SubNetworkID_r15, _asn_ctx),
	asn_MAP_GNSS_SubNetworkID_r15_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_SubNetworkID_r15 = {
	"GNSS-SubNetworkID-r15",
	"GNSS-SubNetworkID-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_SubNetworkID_r15_tags_1,
	sizeof(asn_DEF_GNSS_SubNetworkID_r15_tags_1)
		/sizeof(asn_DEF_GNSS_SubNetworkID_r15_tags_1[0]), /* 1 */
	asn_DEF_GNSS_SubNetworkID_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_SubNetworkID_r15_tags_1)
		/sizeof(asn_DEF_GNSS_SubNetworkID_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GNSS_SubNetworkID_r15_1,
	1,	/* Elements count */
	&asn_SPC_GNSS_SubNetworkID_r15_specs_1	/* Additional specs */
};

