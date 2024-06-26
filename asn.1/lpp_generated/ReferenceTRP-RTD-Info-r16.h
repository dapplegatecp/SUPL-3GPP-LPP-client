/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_ReferenceTRP_RTD_Info_r16_H_
#define	_ReferenceTRP_RTD_Info_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR-PhysCellID-r16.h"
#include "ARFCN-ValueNR-r15.h"
#include <BIT_STRING.h>
#include <UTCTime.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReferenceTRP_RTD_Info_r16__refTime_r16_PR {
	ReferenceTRP_RTD_Info_r16__refTime_r16_PR_NOTHING,	/* No components present */
	ReferenceTRP_RTD_Info_r16__refTime_r16_PR_systemFrameNumber_r16,
	ReferenceTRP_RTD_Info_r16__refTime_r16_PR_utc_r16
	/* Extensions may appear below */
	
} ReferenceTRP_RTD_Info_r16__refTime_r16_PR;

/* Forward declarations */
struct NCGI_r15;
struct NR_TimingQuality_r16;

/* ReferenceTRP-RTD-Info-r16 */
typedef struct ReferenceTRP_RTD_Info_r16 {
	long	 dl_PRS_ID_Ref_r16;
	NR_PhysCellID_r16_t	*nr_PhysCellID_Ref_r16;	/* OPTIONAL */
	struct NCGI_r15	*nr_CellGlobalID_Ref_r16;	/* OPTIONAL */
	ARFCN_ValueNR_r15_t	*nr_ARFCN_Ref_r16;	/* OPTIONAL */
	struct ReferenceTRP_RTD_Info_r16__refTime_r16 {
		ReferenceTRP_RTD_Info_r16__refTime_r16_PR present;
		union ReferenceTRP_RTD_Info_r16__refTime_r16_u {
			BIT_STRING_t	 systemFrameNumber_r16;
			UTCTime_t	 utc_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} refTime_r16;
	struct NR_TimingQuality_r16	*rtd_RefQuality_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferenceTRP_RTD_Info_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferenceTRP_RTD_Info_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ReferenceTRP_RTD_Info_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ReferenceTRP_RTD_Info_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ReferenceTRP_RTD_Info_r16_H_ */
#include <asn_internal.h>
