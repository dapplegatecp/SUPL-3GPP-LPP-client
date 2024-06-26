/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_On_Demand_DL_PRS_Configuration_r17_H_
#define	_On_Demand_DL_PRS_Configuration_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-PRS-Configuration-ID-r17.h"
#include "NR-DL-PRS-PositioningFrequencyLayer-r16.h"
#include "NR-DL-PRS-Info-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* On-Demand-DL-PRS-Configuration-r17 */
typedef struct On_Demand_DL_PRS_Configuration_r17 {
	DL_PRS_Configuration_ID_r17_t	 dl_prs_configuration_id_r17;
	NR_DL_PRS_PositioningFrequencyLayer_r16_t	 nr_DL_PRS_PositioningFrequencyLayer_r17;
	NR_DL_PRS_Info_r16_t	 nr_DL_PRS_Info_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} On_Demand_DL_PRS_Configuration_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_On_Demand_DL_PRS_Configuration_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_On_Demand_DL_PRS_Configuration_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_On_Demand_DL_PRS_Configuration_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _On_Demand_DL_PRS_Configuration_r17_H_ */
#include <asn_internal.h>
