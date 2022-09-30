/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_BDS_ClockModel2_r16_H_
#define	_BDS_ClockModel2_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BDS-ClockModel2-r16 */
typedef struct BDS_ClockModel2_r16 {
	long	 bdsToc_r16;
	long	 bdsA0_r16;
	long	 bdsA1_r16;
	long	 bdsA2_r16;
	long	 bdsTgdB1Cp_r16;
	long	 bdsIscB1Cd_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BDS_ClockModel2_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BDS_ClockModel2_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_BDS_ClockModel2_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_BDS_ClockModel2_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _BDS_ClockModel2_r16_H_ */
#include <asn_internal.h>
