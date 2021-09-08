/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_CellsTriggeredList_H_
#define	_ASN_RRC_CellsTriggeredList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ASN_RRC_PhysCellId.h"
#include "ASN_RRC_EUTRA-PhysCellId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_CellsTriggeredList__Member_PR {
	ASN_RRC_CellsTriggeredList__Member_PR_NOTHING,	/* No components present */
	ASN_RRC_CellsTriggeredList__Member_PR_physCellId,
	ASN_RRC_CellsTriggeredList__Member_PR_physCellIdEUTRA
} ASN_RRC_CellsTriggeredList__Member_PR;

/* Forward definitions */
typedef struct ASN_RRC_CellsTriggeredList__Member {
	ASN_RRC_CellsTriggeredList__Member_PR present;
	union ASN_RRC_CellsTriggeredList__ASN_RRC_Member_u {
		ASN_RRC_PhysCellId_t	 physCellId;
		ASN_RRC_EUTRA_PhysCellId_t	 physCellIdEUTRA;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsTriggeredList__Member;

/* ASN_RRC_CellsTriggeredList */
typedef struct ASN_RRC_CellsTriggeredList {
	A_SEQUENCE_OF(CellsTriggeredList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_CellsTriggeredList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CellsTriggeredList;
extern asn_SET_OF_specifics_t asn_SPC_ASN_RRC_CellsTriggeredList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_CellsTriggeredList_1[1];
extern asn_per_constraints_t asn_PER_type_ASN_RRC_CellsTriggeredList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_CellsTriggeredList_H_ */
#include <asn_internal.h>
