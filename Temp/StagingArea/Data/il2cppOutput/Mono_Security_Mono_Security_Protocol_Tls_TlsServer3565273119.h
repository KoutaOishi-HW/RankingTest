﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String[]
struct StringU5BU5D_t3764931161;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1163649260;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3076502791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsServerSettings
struct  TlsServerSettings_t3565273119  : public Il2CppObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::certificates
	X509CertificateCollection_t1157533551 * ___certificates_0;
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::certificateRSA
	RSA_t2777156203 * ___certificateRSA_1;
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::rsaParameters
	RSAParameters_t3076502791  ___rsaParameters_2;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsServerSettings::signedParams
	ByteU5BU5D_t3835026402* ___signedParams_3;
	// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::distinguisedNames
	StringU5BU5D_t3764931161* ___distinguisedNames_4;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::serverKeyExchange
	bool ___serverKeyExchange_5;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::certificateRequest
	bool ___certificateRequest_6;
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::certificateTypes
	ClientCertificateTypeU5BU5D_t1163649260* ___certificateTypes_7;

public:
	inline static int32_t get_offset_of_certificates_0() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___certificates_0)); }
	inline X509CertificateCollection_t1157533551 * get_certificates_0() const { return ___certificates_0; }
	inline X509CertificateCollection_t1157533551 ** get_address_of_certificates_0() { return &___certificates_0; }
	inline void set_certificates_0(X509CertificateCollection_t1157533551 * value)
	{
		___certificates_0 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_0, value);
	}

	inline static int32_t get_offset_of_certificateRSA_1() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___certificateRSA_1)); }
	inline RSA_t2777156203 * get_certificateRSA_1() const { return ___certificateRSA_1; }
	inline RSA_t2777156203 ** get_address_of_certificateRSA_1() { return &___certificateRSA_1; }
	inline void set_certificateRSA_1(RSA_t2777156203 * value)
	{
		___certificateRSA_1 = value;
		Il2CppCodeGenWriteBarrier(&___certificateRSA_1, value);
	}

	inline static int32_t get_offset_of_rsaParameters_2() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___rsaParameters_2)); }
	inline RSAParameters_t3076502791  get_rsaParameters_2() const { return ___rsaParameters_2; }
	inline RSAParameters_t3076502791 * get_address_of_rsaParameters_2() { return &___rsaParameters_2; }
	inline void set_rsaParameters_2(RSAParameters_t3076502791  value)
	{
		___rsaParameters_2 = value;
	}

	inline static int32_t get_offset_of_signedParams_3() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___signedParams_3)); }
	inline ByteU5BU5D_t3835026402* get_signedParams_3() const { return ___signedParams_3; }
	inline ByteU5BU5D_t3835026402** get_address_of_signedParams_3() { return &___signedParams_3; }
	inline void set_signedParams_3(ByteU5BU5D_t3835026402* value)
	{
		___signedParams_3 = value;
		Il2CppCodeGenWriteBarrier(&___signedParams_3, value);
	}

	inline static int32_t get_offset_of_distinguisedNames_4() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___distinguisedNames_4)); }
	inline StringU5BU5D_t3764931161* get_distinguisedNames_4() const { return ___distinguisedNames_4; }
	inline StringU5BU5D_t3764931161** get_address_of_distinguisedNames_4() { return &___distinguisedNames_4; }
	inline void set_distinguisedNames_4(StringU5BU5D_t3764931161* value)
	{
		___distinguisedNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___distinguisedNames_4, value);
	}

	inline static int32_t get_offset_of_serverKeyExchange_5() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___serverKeyExchange_5)); }
	inline bool get_serverKeyExchange_5() const { return ___serverKeyExchange_5; }
	inline bool* get_address_of_serverKeyExchange_5() { return &___serverKeyExchange_5; }
	inline void set_serverKeyExchange_5(bool value)
	{
		___serverKeyExchange_5 = value;
	}

	inline static int32_t get_offset_of_certificateRequest_6() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___certificateRequest_6)); }
	inline bool get_certificateRequest_6() const { return ___certificateRequest_6; }
	inline bool* get_address_of_certificateRequest_6() { return &___certificateRequest_6; }
	inline void set_certificateRequest_6(bool value)
	{
		___certificateRequest_6 = value;
	}

	inline static int32_t get_offset_of_certificateTypes_7() { return static_cast<int32_t>(offsetof(TlsServerSettings_t3565273119, ___certificateTypes_7)); }
	inline ClientCertificateTypeU5BU5D_t1163649260* get_certificateTypes_7() const { return ___certificateTypes_7; }
	inline ClientCertificateTypeU5BU5D_t1163649260** get_address_of_certificateTypes_7() { return &___certificateTypes_7; }
	inline void set_certificateTypes_7(ClientCertificateTypeU5BU5D_t1163649260* value)
	{
		___certificateTypes_7 = value;
		Il2CppCodeGenWriteBarrier(&___certificateTypes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
