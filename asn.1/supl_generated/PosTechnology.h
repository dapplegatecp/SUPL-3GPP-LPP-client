/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "src/SUPL-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_PosTechnology_H_
#define	_PosTechnology_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ver2_PosTechnology_extension;

/* PosTechnology */
typedef struct PosTechnology {
	BOOLEAN_t	 agpsSETassisted;
	BOOLEAN_t	 agpsSETBased;
	BOOLEAN_t	 autonomousGPS;
	BOOLEAN_t	 aFLT;
	BOOLEAN_t	 eCID;
	BOOLEAN_t	 eOTD;
	BOOLEAN_t	 oTDOA;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_PosTechnology_extension	*ver2_PosTechnology_extension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosTechnology_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosTechnology;
extern asn_SEQUENCE_specifics_t asn_SPC_PosTechnology_specs_1;
extern asn_TYPE_member_t asn_MBR_PosTechnology_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PosTechnology_H_ */
#include <asn_internal.h>
