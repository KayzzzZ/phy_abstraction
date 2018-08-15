/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kay/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_UE_ContextInformation_H_
#define	_X2ap_UE_ContextInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-UE-S1AP-ID.h"
#include "X2ap-UESecurityCapabilities.h"
#include "X2ap-AS-SecurityInformation.h"
#include "X2ap-UEAggregateMaximumBitRate.h"
#include "X2ap-SubscriberProfileIDforRFP.h"
#include "X2ap-E-RABs-ToBeSetup-List.h"
#include "X2ap-RRC-Context.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_HandoverRestrictionList;
struct X2ap_LocationReportingInformation;
struct X2ap_IE_Extensions;

/* X2ap-UE-ContextInformation */
typedef struct X2ap_UE_ContextInformation {
	X2ap_UE_S1AP_ID_t	 mME_UE_S1AP_ID;
	X2ap_UESecurityCapabilities_t	 uESecurityCapabilities;
	X2ap_AS_SecurityInformation_t	 aS_SecurityInformation;
	X2ap_UEAggregateMaximumBitRate_t	 uEaggregateMaximumBitRate;
	X2ap_SubscriberProfileIDforRFP_t	*subscriberProfileIDforRFP	/* OPTIONAL */;
	X2ap_E_RABs_ToBeSetup_List_t	 e_RABs_ToBeSetup_List;
	X2ap_RRC_Context_t	 rRC_Context;
	struct X2ap_HandoverRestrictionList	*handoverRestrictionList	/* OPTIONAL */;
	struct X2ap_LocationReportingInformation	*locationReportingInformation	/* OPTIONAL */;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_UE_ContextInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_UE_ContextInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-HandoverRestrictionList.h"
#include "X2ap-LocationReportingInformation.h"
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_UE_ContextInformation_H_ */
#include <asn_internal.h>
