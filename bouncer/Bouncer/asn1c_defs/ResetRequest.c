/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "/home/sjana/ASN-Defns/e2ap-oran-wg3-v01.00.asn"
 * 	`asn1c -fno-include-deps -fcompound-names -findirect-choice -gen-PER -no-gen-OER`
 */

#include "ResetRequest.h"

asn_TYPE_member_t asn_MBR_ResetRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResetRequest, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_1412P14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_ResetRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ResetRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_ResetRequest_specs_1 = {
	sizeof(struct ResetRequest),
	offsetof(struct ResetRequest, _asn_ctx),
	asn_MAP_ResetRequest_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ResetRequest = {
	"ResetRequest",
	"ResetRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_ResetRequest_tags_1,
	sizeof(asn_DEF_ResetRequest_tags_1)
		/sizeof(asn_DEF_ResetRequest_tags_1[0]), /* 1 */
	asn_DEF_ResetRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResetRequest_tags_1)
		/sizeof(asn_DEF_ResetRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ResetRequest_1,
	1,	/* Elements count */
	&asn_SPC_ResetRequest_specs_1	/* Additional specs */
};

