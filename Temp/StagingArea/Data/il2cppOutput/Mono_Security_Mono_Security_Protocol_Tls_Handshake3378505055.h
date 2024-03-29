﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream1430954503.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_577592360.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2275266661.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t3378505055  : public TlsStream_t1430954503
{
public:
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t2535388339 * ___context_5;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_6;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_7;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t3835026402* ___cache_8;

public:
	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3378505055, ___context_5)); }
	inline Context_t2535388339 * get_context_5() const { return ___context_5; }
	inline Context_t2535388339 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t2535388339 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier(&___context_5, value);
	}

	inline static int32_t get_offset_of_handshakeType_6() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3378505055, ___handshakeType_6)); }
	inline uint8_t get_handshakeType_6() const { return ___handshakeType_6; }
	inline uint8_t* get_address_of_handshakeType_6() { return &___handshakeType_6; }
	inline void set_handshakeType_6(uint8_t value)
	{
		___handshakeType_6 = value;
	}

	inline static int32_t get_offset_of_contentType_7() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3378505055, ___contentType_7)); }
	inline uint8_t get_contentType_7() const { return ___contentType_7; }
	inline uint8_t* get_address_of_contentType_7() { return &___contentType_7; }
	inline void set_contentType_7(uint8_t value)
	{
		___contentType_7 = value;
	}

	inline static int32_t get_offset_of_cache_8() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3378505055, ___cache_8)); }
	inline ByteU5BU5D_t3835026402* get_cache_8() const { return ___cache_8; }
	inline ByteU5BU5D_t3835026402** get_address_of_cache_8() { return &___cache_8; }
	inline void set_cache_8(ByteU5BU5D_t3835026402* value)
	{
		___cache_8 = value;
		Il2CppCodeGenWriteBarrier(&___cache_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
