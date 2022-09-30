/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_Velocity_H_
#define	_Velocity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HorizontalVelocity.h"
#include "HorizontalWithVerticalVelocity.h"
#include "HorizontalVelocityWithUncertainty.h"
#include "HorizontalWithVerticalVelocityAndUncertainty.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Velocity_PR {
	Velocity_PR_NOTHING,	/* No components present */
	Velocity_PR_horizontalVelocity,
	Velocity_PR_horizontalWithVerticalVelocity,
	Velocity_PR_horizontalVelocityWithUncertainty,
	Velocity_PR_horizontalWithVerticalVelocityAndUncertainty
	/* Extensions may appear below */
	
} Velocity_PR;

/* Velocity */
typedef struct Velocity {
	Velocity_PR present;
	union Velocity_u {
		HorizontalVelocity_t	 horizontalVelocity;
		HorizontalWithVerticalVelocity_t	 horizontalWithVerticalVelocity;
		HorizontalVelocityWithUncertainty_t	 horizontalVelocityWithUncertainty;
		HorizontalWithVerticalVelocityAndUncertainty_t	 horizontalWithVerticalVelocityAndUncertainty;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Velocity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Velocity;
extern asn_CHOICE_specifics_t asn_SPC_Velocity_specs_1;
extern asn_TYPE_member_t asn_MBR_Velocity_1[4];
extern asn_per_constraints_t asn_PER_type_Velocity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Velocity_H_ */
#include <asn_internal.h>
