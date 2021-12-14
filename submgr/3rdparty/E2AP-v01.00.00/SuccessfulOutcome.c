/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "spec/e2ap-v01.00.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "SuccessfulOutcome.h"

static const long asn_VAL_1_id_RICsubscription = 8;
static const long asn_VAL_1_reject = 0;
static const long asn_VAL_2_id_RICsubscriptionDelete = 9;
static const long asn_VAL_2_reject = 0;
static const long asn_VAL_3_id_RICserviceUpdate = 7;
static const long asn_VAL_3_reject = 0;
static const long asn_VAL_4_id_RICcontrol = 4;
static const long asn_VAL_4_reject = 0;
static const long asn_VAL_5_id_E2setup = 1;
static const long asn_VAL_5_reject = 0;
static const long asn_VAL_6_id_Reset = 3;
static const long asn_VAL_6_reject = 0;
static const long asn_VAL_7_id_RICindication = 5;
static const long asn_VAL_7_ignore = 1;
static const long asn_VAL_8_id_RICserviceQuery = 6;
static const long asn_VAL_8_ignore = 1;
static const long asn_VAL_9_id_ErrorIndication = 2;
static const long asn_VAL_9_ignore = 1;
static const asn_ioc_cell_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_1_id_RICsubscription },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_1_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_2_id_RICsubscriptionDelete },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_2_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_3_id_RICserviceUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_3_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICcontrolRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_4_id_RICcontrol },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_4_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2setupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2setupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2setupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_5_id_E2setup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_5_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResetRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResetResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_6_id_Reset },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_6_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICindication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_7_id_RICindication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_7_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceQuery },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_8_id_RICserviceQuery },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_8_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_9_id_ErrorIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_9_ignore }
};
static const asn_ioc_set_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 9, 5, asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_type_selector_result_t
select_SuccessfulOutcome_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_SuccessfulOutcome_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 1; /* &SuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICsubscriptionResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionDeleteResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICsubscriptionDeleteResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICserviceUpdateAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceUpdateAcknowledge,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICserviceUpdateAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICcontrolAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICcontrolAcknowledge,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RICcontrolAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E2setupResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2setupResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"E2setupResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.ResetResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResetResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResetResponse"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 5 }, /* RICsubscriptionResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 4 }, /* RICsubscriptionDeleteResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 3 }, /* RICserviceUpdateAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 2 }, /* RICcontrolAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 1 }, /* E2setupResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 0 } /* ResetResponse */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4 = {
	sizeof(struct SuccessfulOutcome__value),
	offsetof(struct SuccessfulOutcome__value, _asn_ctx),
	offsetof(struct SuccessfulOutcome__value, present),
	sizeof(((struct SuccessfulOutcome__value *)0)->present),
	asn_MAP_value_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_value_4,
	6,	/* Elements count */
	&asn_SPC_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_procedureCode_constr_2,  memb_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality,
		select_SuccessfulOutcome_criticality_type,
		{ 0, &asn_PER_memb_criticality_constr_3,  memb_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4,
		select_SuccessfulOutcome_value_type,
		{ 0, &asn_PER_memb_value_constr_4,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_SuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_SuccessfulOutcome_specs_1 = {
	sizeof(struct SuccessfulOutcome),
	offsetof(struct SuccessfulOutcome, _asn_ctx),
	asn_MAP_SuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SuccessfulOutcome = {
	"SuccessfulOutcome",
	"SuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_SuccessfulOutcome_tags_1,
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_SuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_SuccessfulOutcome_specs_1	/* Additional specs */
};

