/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include "asn_internal.h"

#include "ConfirmedResponsePdu.h"

static asn_TYPE_member_t asn_MBR_ConfirmedResponsePdu_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedResponsePdu, invokeID),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"invokeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedResponsePdu, confirmedServiceResponse),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ConfirmedServiceResponse,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"confirmedServiceResponse"
		},
};
static ber_tlv_tag_t asn_DEF_ConfirmedResponsePdu_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ConfirmedResponsePdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* invokeID at 121 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* getNameList at 140 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* read at 141 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* write at 142 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* getVariableAccessAttributes at 143 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 1, 0, 0 }, /* defineNamedVariableList at 144 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 0 }, /* getNamedVariableListAttributes at 145 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 1, 0, 0 } /* deleteNamedVariableList at 147 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ConfirmedResponsePdu_specs_1 = {
	sizeof(struct ConfirmedResponsePdu),
	offsetof(struct ConfirmedResponsePdu, _asn_ctx),
	asn_MAP_ConfirmedResponsePdu_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ConfirmedResponsePdu = {
	"ConfirmedResponsePdu",
	"ConfirmedResponsePdu",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ConfirmedResponsePdu_tags_1,
	sizeof(asn_DEF_ConfirmedResponsePdu_tags_1)
		/sizeof(asn_DEF_ConfirmedResponsePdu_tags_1[0]), /* 1 */
	asn_DEF_ConfirmedResponsePdu_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConfirmedResponsePdu_tags_1)
		/sizeof(asn_DEF_ConfirmedResponsePdu_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ConfirmedResponsePdu_1,
	2,	/* Elements count */
	&asn_SPC_ConfirmedResponsePdu_specs_1	/* Additional specs */
};

