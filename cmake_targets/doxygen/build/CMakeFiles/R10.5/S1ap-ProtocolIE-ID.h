/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "/home/kay/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_ProtocolIE_ID_H_
#define	_S1ap_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_ProtocolIE_ID {
	S1ap_ProtocolIE_ID_id_MME_UE_S1AP_ID	= 0,
	S1ap_ProtocolIE_ID_id_HandoverType	= 1,
	S1ap_ProtocolIE_ID_id_Cause	= 2,
	S1ap_ProtocolIE_ID_id_SourceID	= 3,
	S1ap_ProtocolIE_ID_id_TargetID	= 4,
	S1ap_ProtocolIE_ID_id_eNB_UE_S1AP_ID	= 8,
	S1ap_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList	= 12,
	S1ap_ProtocolIE_ID_id_E_RABtoReleaseListHOCmd	= 13,
	S1ap_ProtocolIE_ID_id_E_RABDataForwardingItem	= 14,
	S1ap_ProtocolIE_ID_id_E_RABReleaseItemBearerRelComp	= 15,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupListBearerSUReq	= 16,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupItemBearerSUReq	= 17,
	S1ap_ProtocolIE_ID_id_E_RABAdmittedList	= 18,
	S1ap_ProtocolIE_ID_id_E_RABFailedToSetupListHOReqAck	= 19,
	S1ap_ProtocolIE_ID_id_E_RABAdmittedItem	= 20,
	S1ap_ProtocolIE_ID_id_E_RABFailedToSetupItemHOReqAck	= 21,
	S1ap_ProtocolIE_ID_id_E_RABToBeSwitchedDLList	= 22,
	S1ap_ProtocolIE_ID_id_E_RABToBeSwitchedDLItem	= 23,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupListCtxtSUReq	= 24,
	S1ap_ProtocolIE_ID_id_TraceActivation	= 25,
	S1ap_ProtocolIE_ID_id_NAS_PDU	= 26,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupItemHOReq	= 27,
	S1ap_ProtocolIE_ID_id_E_RABSetupListBearerSURes	= 28,
	S1ap_ProtocolIE_ID_id_E_RABFailedToSetupListBearerSURes	= 29,
	S1ap_ProtocolIE_ID_id_E_RABToBeModifiedListBearerModReq	= 30,
	S1ap_ProtocolIE_ID_id_E_RABModifyListBearerModRes	= 31,
	S1ap_ProtocolIE_ID_id_E_RABFailedToModifyList	= 32,
	S1ap_ProtocolIE_ID_id_E_RABToBeReleasedList	= 33,
	S1ap_ProtocolIE_ID_id_E_RABFailedToReleaseList	= 34,
	S1ap_ProtocolIE_ID_id_E_RABItem	= 35,
	S1ap_ProtocolIE_ID_id_E_RABToBeModifiedItemBearerModReq	= 36,
	S1ap_ProtocolIE_ID_id_E_RABModifyItemBearerModRes	= 37,
	S1ap_ProtocolIE_ID_id_E_RABReleaseItem	= 38,
	S1ap_ProtocolIE_ID_id_E_RABSetupItemBearerSURes	= 39,
	S1ap_ProtocolIE_ID_id_SecurityContext	= 40,
	S1ap_ProtocolIE_ID_id_HandoverRestrictionList	= 41,
	S1ap_ProtocolIE_ID_id_UEPagingID	= 43,
	S1ap_ProtocolIE_ID_id_pagingDRX	= 44,
	S1ap_ProtocolIE_ID_id_TAIList	= 46,
	S1ap_ProtocolIE_ID_id_TAIItem	= 47,
	S1ap_ProtocolIE_ID_id_E_RABFailedToSetupListCtxtSURes	= 48,
	S1ap_ProtocolIE_ID_id_E_RABReleaseItemHOCmd	= 49,
	S1ap_ProtocolIE_ID_id_E_RABSetupItemCtxtSURes	= 50,
	S1ap_ProtocolIE_ID_id_E_RABSetupListCtxtSURes	= 51,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupItemCtxtSUReq	= 52,
	S1ap_ProtocolIE_ID_id_E_RABToBeSetupListHOReq	= 53,
	S1ap_ProtocolIE_ID_id_GERANtoLTEHOInformationRes	= 55,
	S1ap_ProtocolIE_ID_id_UTRANtoLTEHOInformationRes	= 57,
	S1ap_ProtocolIE_ID_id_CriticalityDiagnostics	= 58,
	S1ap_ProtocolIE_ID_id_Global_ENB_ID	= 59,
	S1ap_ProtocolIE_ID_id_eNBname	= 60,
	S1ap_ProtocolIE_ID_id_MMEname	= 61,
	S1ap_ProtocolIE_ID_id_ServedPLMNs	= 63,
	S1ap_ProtocolIE_ID_id_SupportedTAs	= 64,
	S1ap_ProtocolIE_ID_id_TimeToWait	= 65,
	S1ap_ProtocolIE_ID_id_uEaggregateMaximumBitrate	= 66,
	S1ap_ProtocolIE_ID_id_TAI	= 67,
	S1ap_ProtocolIE_ID_id_E_RABReleaseListBearerRelComp	= 69,
	S1ap_ProtocolIE_ID_id_cdma2000PDU	= 70,
	S1ap_ProtocolIE_ID_id_cdma2000RATType	= 71,
	S1ap_ProtocolIE_ID_id_cdma2000SectorID	= 72,
	S1ap_ProtocolIE_ID_id_SecurityKey	= 73,
	S1ap_ProtocolIE_ID_id_UERadioCapability	= 74,
	S1ap_ProtocolIE_ID_id_GUMMEI_ID	= 75,
	S1ap_ProtocolIE_ID_id_E_RABInformationListItem	= 78,
	S1ap_ProtocolIE_ID_id_Direct_Forwarding_Path_Availability	= 79,
	S1ap_ProtocolIE_ID_id_UEIdentityIndexValue	= 80,
	S1ap_ProtocolIE_ID_id_cdma2000HOStatus	= 83,
	S1ap_ProtocolIE_ID_id_cdma2000HORequiredIndication	= 84,
	S1ap_ProtocolIE_ID_id_E_UTRAN_Trace_ID	= 86,
	S1ap_ProtocolIE_ID_id_RelativeMMECapacity	= 87,
	S1ap_ProtocolIE_ID_id_SourceMME_UE_S1AP_ID	= 88,
	S1ap_ProtocolIE_ID_id_Bearers_SubjectToStatusTransfer_Item	= 89,
	S1ap_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer	= 90,
	S1ap_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem	= 91,
	S1ap_ProtocolIE_ID_id_ResetType	= 92,
	S1ap_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionListResAck	= 93,
	S1ap_ProtocolIE_ID_id_E_RABToBeSwitchedULItem	= 94,
	S1ap_ProtocolIE_ID_id_E_RABToBeSwitchedULList	= 95,
	S1ap_ProtocolIE_ID_id_S_TMSI	= 96,
	S1ap_ProtocolIE_ID_id_cdma2000OneXRAND	= 97,
	S1ap_ProtocolIE_ID_id_RequestType	= 98,
	S1ap_ProtocolIE_ID_id_UE_S1AP_IDs	= 99,
	S1ap_ProtocolIE_ID_id_EUTRAN_CGI	= 100,
	S1ap_ProtocolIE_ID_id_OverloadResponse	= 101,
	S1ap_ProtocolIE_ID_id_cdma2000OneXSRVCCInfo	= 102,
	S1ap_ProtocolIE_ID_id_E_RABFailedToBeReleasedList	= 103,
	S1ap_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer	= 104,
	S1ap_ProtocolIE_ID_id_ServedGUMMEIs	= 105,
	S1ap_ProtocolIE_ID_id_SubscriberProfileIDforRFP	= 106,
	S1ap_ProtocolIE_ID_id_UESecurityCapabilities	= 107,
	S1ap_ProtocolIE_ID_id_CSFallbackIndicator	= 108,
	S1ap_ProtocolIE_ID_id_CNDomain	= 109,
	S1ap_ProtocolIE_ID_id_E_RABReleasedList	= 110,
	S1ap_ProtocolIE_ID_id_MessageIdentifier	= 111,
	S1ap_ProtocolIE_ID_id_SerialNumber	= 112,
	S1ap_ProtocolIE_ID_id_WarningAreaList	= 113,
	S1ap_ProtocolIE_ID_id_RepetitionPeriod	= 114,
	S1ap_ProtocolIE_ID_id_NumberofBroadcastRequest	= 115,
	S1ap_ProtocolIE_ID_id_WarningType	= 116,
	S1ap_ProtocolIE_ID_id_WarningSecurityInfo	= 117,
	S1ap_ProtocolIE_ID_id_DataCodingScheme	= 118,
	S1ap_ProtocolIE_ID_id_WarningMessageContents	= 119,
	S1ap_ProtocolIE_ID_id_BroadcastCompletedAreaList	= 120,
	S1ap_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeEDT	= 121,
	S1ap_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeMDT	= 122,
	S1ap_ProtocolIE_ID_id_Target_ToSource_TransparentContainer	= 123,
	S1ap_ProtocolIE_ID_id_SRVCCOperationPossible	= 124,
	S1ap_ProtocolIE_ID_id_SRVCCHOIndication	= 125,
	S1ap_ProtocolIE_ID_id_NAS_DownlinkCount	= 126,
	S1ap_ProtocolIE_ID_id_CSG_Id	= 127,
	S1ap_ProtocolIE_ID_id_CSG_IdList	= 128,
	S1ap_ProtocolIE_ID_id_SONConfigurationTransferECT	= 129,
	S1ap_ProtocolIE_ID_id_SONConfigurationTransferMCT	= 130,
	S1ap_ProtocolIE_ID_id_TraceCollectionEntityIPAddress	= 131,
	S1ap_ProtocolIE_ID_id_MSClassmark2	= 132,
	S1ap_ProtocolIE_ID_id_MSClassmark3	= 133,
	S1ap_ProtocolIE_ID_id_RRC_Establishment_Cause	= 134,
	S1ap_ProtocolIE_ID_id_NASSecurityParametersfromE_UTRAN	= 135,
	S1ap_ProtocolIE_ID_id_NASSecurityParameterstoE_UTRAN	= 136,
	S1ap_ProtocolIE_ID_id_DefaultPagingDRX	= 137,
	S1ap_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer_Secondary	= 138,
	S1ap_ProtocolIE_ID_id_Target_ToSource_TransparentContainer_Secondary	= 139,
	S1ap_ProtocolIE_ID_id_EUTRANRoundTripDelayEstimationInfo	= 140,
	S1ap_ProtocolIE_ID_id_BroadcastCancelledAreaList	= 141,
	S1ap_ProtocolIE_ID_id_ConcurrentWarningMessageIndicator	= 142,
	S1ap_ProtocolIE_ID_id_Data_Forwarding_Not_Possible	= 143,
	S1ap_ProtocolIE_ID_id_ExtendedRepetitionPeriod	= 144,
	S1ap_ProtocolIE_ID_id_CellAccessMode	= 145,
	S1ap_ProtocolIE_ID_id_CSGMembershipStatus	= 146,
	S1ap_ProtocolIE_ID_id_LPPa_PDU	= 147,
	S1ap_ProtocolIE_ID_id_Routing_ID	= 148,
	S1ap_ProtocolIE_ID_id_Time_Synchronization_Info	= 149,
	S1ap_ProtocolIE_ID_id_PS_ServiceNotAvailable	= 150,
	S1ap_ProtocolIE_ID_id_PagingPriority	= 151,
	S1ap_ProtocolIE_ID_id_x2TNLConfigurationInfo	= 152,
	S1ap_ProtocolIE_ID_id_eNBX2ExtendedTransportLayerAddresses	= 153,
	S1ap_ProtocolIE_ID_id_GUMMEIList	= 154,
	S1ap_ProtocolIE_ID_id_GW_TransportLayerAddress	= 155,
	S1ap_ProtocolIE_ID_id_Correlation_ID	= 156,
	S1ap_ProtocolIE_ID_id_SourceMME_GUMMEI	= 157,
	S1ap_ProtocolIE_ID_id_MME_UE_S1AP_ID_2	= 158,
	S1ap_ProtocolIE_ID_id_RegisteredLAI	= 159,
	S1ap_ProtocolIE_ID_id_RelayNode_Indicator	= 160,
	S1ap_ProtocolIE_ID_id_TrafficLoadReductionIndication	= 161,
	S1ap_ProtocolIE_ID_id_MDTConfiguration	= 162,
	S1ap_ProtocolIE_ID_id_MMERelaySupportIndicator	= 163,
	S1ap_ProtocolIE_ID_id_GWContextReleaseIndication	= 164,
	S1ap_ProtocolIE_ID_id_ManagementBasedMDTAllowed	= 165,
	S1ap_ProtocolIE_ID_id_PrivacyIndicator	= 166
} e_S1ap_ProtocolIE_ID;

/* S1ap-ProtocolIE-ID */
typedef long	 S1ap_ProtocolIE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ProtocolIE_ID;
asn_struct_free_f S1ap_ProtocolIE_ID_free;
asn_struct_print_f S1ap_ProtocolIE_ID_print;
asn_constr_check_f S1ap_ProtocolIE_ID_constraint;
ber_type_decoder_f S1ap_ProtocolIE_ID_decode_ber;
der_type_encoder_f S1ap_ProtocolIE_ID_encode_der;
xer_type_decoder_f S1ap_ProtocolIE_ID_decode_xer;
xer_type_encoder_f S1ap_ProtocolIE_ID_encode_xer;
per_type_decoder_f S1ap_ProtocolIE_ID_decode_uper;
per_type_encoder_f S1ap_ProtocolIE_ID_encode_uper;
per_type_decoder_f S1ap_ProtocolIE_ID_decode_aper;
per_type_encoder_f S1ap_ProtocolIE_ID_encode_aper;
type_compare_f     S1ap_ProtocolIE_ID_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_ProtocolIE_ID_H_ */
#include <asn_internal.h>
