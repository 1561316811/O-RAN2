/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm-kpm-v01.02.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EPC_DU_PM_Container_H_
#define	_EPC_DU_PM_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PerQCIReportListItem;

/* EPC-DU-PM-Container */
typedef struct EPC_DU_PM_Container {
	struct EPC_DU_PM_Container__perQCIReportList {
		A_SEQUENCE_OF(struct PerQCIReportListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} perQCIReportList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPC_DU_PM_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPC_DU_PM_Container;
extern asn_SEQUENCE_specifics_t asn_SPC_EPC_DU_PM_Container_specs_1;
extern asn_TYPE_member_t asn_MBR_EPC_DU_PM_Container_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PerQCIReportListItem.h"

#endif	/* _EPC_DU_PM_Container_H_ */
#include <asn_internal.h>
