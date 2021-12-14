/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-Bouncer-IEs"
 *      found in "/home/ubuntu/ASN-Defns/e2sm-Bouncer-v002.asn"
 * 	`asn1c -fno-include-deps -fcompound-names -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_B_Message_H_
#define	_B_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* B-Message */
typedef OCTET_STRING_t	 B_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_B_Message;
asn_struct_free_f B_Message_free;
asn_struct_print_f B_Message_print;
asn_constr_check_f B_Message_constraint;
ber_type_decoder_f B_Message_decode_ber;
der_type_encoder_f B_Message_encode_der;
xer_type_decoder_f B_Message_decode_xer;
xer_type_encoder_f B_Message_encode_xer;
per_type_decoder_f B_Message_decode_uper;
per_type_encoder_f B_Message_encode_uper;
per_type_decoder_f B_Message_decode_aper;
per_type_encoder_f B_Message_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _B_Message_H_ */
#include <asn_internal.h>
