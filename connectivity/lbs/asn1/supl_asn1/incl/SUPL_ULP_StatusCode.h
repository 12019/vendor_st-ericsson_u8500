/*
 * SUPL_ULP_StatusCode.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: david.gowers@stericsson.com for ST-Ericsson.
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
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "ULP_v2.0.0.asn"
 *     `asn1c -gen-PER -fcompound-names`
 */

#ifndef    _SUPL_ULP_StatusCode_H_
#define    _SUPL_ULP_StatusCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StatusCode {
    StatusCode_unspecified    = 0,
    StatusCode_systemFailure    = 1,
    StatusCode_unexpectedMessage    = 2,
    StatusCode_protocolError    = 3,
    StatusCode_dataMissing    = 4,
    StatusCode_unexpectedDataValue    = 5,
    StatusCode_posMethodFailure    = 6,
    StatusCode_posMethodMismatch    = 7,
    StatusCode_posProtocolMismatch    = 8,
    StatusCode_targetSETnotReachable    = 9,
    StatusCode_versionNotSupported    = 10,
    StatusCode_resourceShortage    = 11,
    StatusCode_invalidSessionId    = 12,
    StatusCode_nonProxyModeNotSupported    = 13,
    StatusCode_proxyModeNotSupported    = 14,
    StatusCode_positioningNotPermitted    = 15,
    StatusCode_authNetFailure    = 16,
    StatusCode_authSuplinitFailure    = 17,
    StatusCode_consentDeniedByUser    = 100,
    StatusCode_consentGrantedByUser    = 101,
    /*
     * Enumeration is extensible
     */
    StatusCode_ver2_incompatibleProtectionLevel    = 18,
    StatusCode_ver2_serviceNotSupported    = 19,
    StatusCode_ver2_insufficientInterval    = 20,
    StatusCode_ver2_noSUPLCoverage    = 21,
    StatusCode_ver2_sessionStopped    = 102
} e_StatusCode;

/* SUPL_ULP_StatusCode */
typedef ENUMERATED_t     StatusCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StatusCode;
asn_struct_free_f StatusCode_free;
asn_struct_print_f StatusCode_print;
asn_constr_check_f StatusCode_constraint;
ber_type_decoder_f StatusCode_decode_ber;
der_type_encoder_f StatusCode_encode_der;
xer_type_decoder_f StatusCode_decode_xer;
xer_type_encoder_f StatusCode_encode_xer;
per_type_decoder_f StatusCode_decode_uper;
per_type_encoder_f StatusCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif    /* _SUPL_ULP_StatusCode_H_ */
