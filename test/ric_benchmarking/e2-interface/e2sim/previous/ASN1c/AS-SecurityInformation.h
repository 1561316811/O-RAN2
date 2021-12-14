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
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AS_SecurityInformation_H_
#define	_AS_SecurityInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Key-eNodeB-Star.h"
#include "NextHopChainingCount.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* AS-SecurityInformation */
typedef struct AS_SecurityInformation {
	Key_eNodeB_Star_t	 key_eNodeB_star;
	NextHopChainingCount_t	 nextHopChainingCount;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_SecurityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_SecurityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_SecurityInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_SecurityInformation_H_ */
#include "asn_internal.h"
