/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asnFiles/X2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPnotpresent.h"

#include "GTPtunnelEndpoint.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_1[] = {
	{ ATF_POINTER, 2, offsetof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent, secondary_meNB_UL_GTP_TEIDatPDCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondary-meNB-UL-GTP-TEIDatPDCP"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_170P77,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondary-meNB-UL-GTP-TEIDatPDCP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_specs_1 = {
	sizeof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent),
	offsetof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent, _asn_ctx),
	asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent = {
	"E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPnotpresent",
	"E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPnotpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1,
	sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_1,
	2,	/* Elements count */
	&asn_SPC_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPnotpresent_specs_1	/* Additional specs */
};

