/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kay/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_PriorityLevel_H_
#define	_X2ap_PriorityLevel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_PriorityLevel {
	X2ap_PriorityLevel_spare	= 0,
	X2ap_PriorityLevel_highest	= 1,
	X2ap_PriorityLevel_lowest	= 14,
	X2ap_PriorityLevel_no_priority	= 15
} e_X2ap_PriorityLevel;

/* X2ap-PriorityLevel */
typedef long	 X2ap_PriorityLevel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_PriorityLevel;
asn_struct_free_f X2ap_PriorityLevel_free;
asn_struct_print_f X2ap_PriorityLevel_print;
asn_constr_check_f X2ap_PriorityLevel_constraint;
ber_type_decoder_f X2ap_PriorityLevel_decode_ber;
der_type_encoder_f X2ap_PriorityLevel_encode_der;
xer_type_decoder_f X2ap_PriorityLevel_decode_xer;
xer_type_encoder_f X2ap_PriorityLevel_encode_xer;
per_type_decoder_f X2ap_PriorityLevel_decode_uper;
per_type_encoder_f X2ap_PriorityLevel_encode_uper;
per_type_decoder_f X2ap_PriorityLevel_decode_aper;
per_type_encoder_f X2ap_PriorityLevel_encode_aper;
type_compare_f     X2ap_PriorityLevel_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_PriorityLevel_H_ */
#include <asn_internal.h>
