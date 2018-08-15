/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kay/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_E_RABs_Admitted_Item_H_
#define	_X2ap_E_RABs_Admitted_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-E-RAB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_GTPtunnelEndpoint;
struct X2ap_IE_Extensions;

/* X2ap-E-RABs-Admitted-Item */
typedef struct X2ap_E_RABs_Admitted_Item {
	X2ap_E_RAB_ID_t	 e_RAB_ID;
	struct X2ap_GTPtunnelEndpoint	*uL_GTP_TunnelEndpoint	/* OPTIONAL */;
	struct X2ap_GTPtunnelEndpoint	*dL_GTP_TunnelEndpoint	/* OPTIONAL */;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_E_RABs_Admitted_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_E_RABs_Admitted_Item;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-GTPtunnelEndpoint.h"
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_E_RABs_Admitted_Item_H_ */
#include <asn_internal.h>
