/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "/home/rshacham/e2ap-v01.00.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D .`
 */

#include "RICrequestID.h"

static int
memb_ricRequestorID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ricInstanceID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_ricRequestorID_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ricInstanceID_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RICrequestID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICrequestID, ricRequestorID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ricRequestorID_constr_2,  memb_ricRequestorID_constraint_1 },
		0, 0, /* No default value */
		"ricRequestorID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICrequestID, ricInstanceID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ricInstanceID_constr_3,  memb_ricInstanceID_constraint_1 },
		0, 0, /* No default value */
		"ricInstanceID"
		},
};
static const ber_tlv_tag_t asn_DEF_RICrequestID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICrequestID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricRequestorID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ricInstanceID */
};
asn_SEQUENCE_specifics_t asn_SPC_RICrequestID_specs_1 = {
	sizeof(struct RICrequestID),
	offsetof(struct RICrequestID, _asn_ctx),
	asn_MAP_RICrequestID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICrequestID = {
	"RICrequestID",
	"RICrequestID",
	&asn_OP_SEQUENCE,
	asn_DEF_RICrequestID_tags_1,
	sizeof(asn_DEF_RICrequestID_tags_1)
		/sizeof(asn_DEF_RICrequestID_tags_1[0]), /* 1 */
	asn_DEF_RICrequestID_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICrequestID_tags_1)
		/sizeof(asn_DEF_RICrequestID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RICrequestID_1,
	2,	/* Elements count */
	&asn_SPC_RICrequestID_specs_1	/* Additional specs */
};

