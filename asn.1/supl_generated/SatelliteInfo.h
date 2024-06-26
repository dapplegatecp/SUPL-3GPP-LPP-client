/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 * 	found in "src/SUPL-POS-INIT.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_SatelliteInfo_H_
#define	_SatelliteInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatelliteInfoElement;

/* SatelliteInfo */
typedef struct SatelliteInfo {
	A_SEQUENCE_OF(struct SatelliteInfoElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatelliteInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatelliteInfo;
extern asn_SET_OF_specifics_t asn_SPC_SatelliteInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SatelliteInfo_1[1];
extern asn_per_constraints_t asn_PER_type_SatelliteInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SatelliteInfo_H_ */
#include <asn_internal.h>
