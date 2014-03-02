/*
 * LPP_GNSS-TimeModelElementReq.c
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP_PDU-Definitions"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#include <asn_internal.h>

#include "LPP_GNSS-TimeModelElementReq.h"

static int
memb_gnss_TO_IDsReq_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_gnss_TO_IDsReq_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_LPP_GNSS_TimeModelElementReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_TimeModelElementReq, gnss_TO_IDsReq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_gnss_TO_IDsReq_constraint_1,
		&asn_PER_memb_gnss_TO_IDsReq_constr_2,
		0,
		"gnss-TO-IDsReq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_TimeModelElementReq, deltaTreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaTreq"
		},
};
static ber_tlv_tag_t asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_TimeModelElementReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-TO-IDsReq at 3717 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deltaTreq at 3718 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_TimeModelElementReq_specs_1 = {
	sizeof(struct LPP_GNSS_TimeModelElementReq),
	offsetof(struct LPP_GNSS_TimeModelElementReq, _asn_ctx),
	asn_MAP_LPP_GNSS_TimeModelElementReq_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_TimeModelElementReq = {
	"LPP_GNSS-TimeModelElementReq",
	"LPP_GNSS-TimeModelElementReq",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1,
	sizeof(asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_TimeModelElementReq_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_GNSS_TimeModelElementReq_1,
	2,	/* Elements count */
	&asn_SPC_LPP_GNSS_TimeModelElementReq_specs_1	/* Additional specs */
};
