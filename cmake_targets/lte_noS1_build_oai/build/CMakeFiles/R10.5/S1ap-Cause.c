/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/kay/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-Cause.h"

static asn_per_constraints_t asn_PER_type_S1ap_Cause_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1ap_Cause_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cause, choice.radioNetwork),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CauseRadioNetwork,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioNetwork"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cause, choice.transport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CauseTransport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cause, choice.nas),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CauseNas,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nas"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cause, choice.protocol),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CauseProtocol,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"protocol"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cause, choice.misc),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CauseMisc,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"misc"
		},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_Cause_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioNetwork at 134 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transport at 135 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nas at 136 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* protocol at 137 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* misc at 138 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_Cause_specs_1 = {
	sizeof(struct S1ap_Cause),
	offsetof(struct S1ap_Cause, _asn_ctx),
	offsetof(struct S1ap_Cause, present),
	sizeof(((struct S1ap_Cause *)0)->present),
	asn_MAP_S1ap_Cause_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	5	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_Cause = {
	"S1ap-Cause",
	"S1ap-Cause",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_S1ap_Cause_constr_1,
	asn_MBR_S1ap_Cause_1,
	5,	/* Elements count */
	&asn_SPC_S1ap_Cause_specs_1	/* Additional specs */
};

