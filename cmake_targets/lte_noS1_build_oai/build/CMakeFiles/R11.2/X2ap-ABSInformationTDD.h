/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kay/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_ABSInformationTDD_H_
#define	_X2ap_ABSInformationTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_ABSInformationTDD__numberOfCellSpecificAntennaPortsTDD {
	X2ap_ABSInformationTDD__numberOfCellSpecificAntennaPortsTDD_one	= 0,
	X2ap_ABSInformationTDD__numberOfCellSpecificAntennaPortsTDD_two	= 1,
	X2ap_ABSInformationTDD__numberOfCellSpecificAntennaPortsTDD_four	= 2
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_ABSInformationTDD__numberOfCellSpecificAntennaPortsTDD;

/* Forward declarations */
struct X2ap_IE_Extensions;

/* X2ap-ABSInformationTDD */
typedef struct X2ap_ABSInformationTDD {
	BIT_STRING_t	 abs_pattern_info;
	long	 numberOfCellSpecificAntennaPortsTDD;
	BIT_STRING_t	 measurement_subset;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_ABSInformationTDD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfCellSpecificAntennaPortsTDD_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_ABSInformationTDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_ABSInformationTDD_H_ */
#include <asn_internal.h>
