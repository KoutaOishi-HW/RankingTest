﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t934814572;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgo314663662.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor2568236829.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA2472648232.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2275266661.h"

// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  void TlsCipherSuite__ctor_m2983563913 (TlsCipherSuite_t934814572 * __this, int16_t ___code0, String_t* ___name1, int32_t ___cipherAlgorithmType2, int32_t ___hashAlgorithmType3, int32_t ___exchangeAlgorithmType4, bool ___exportable5, bool ___blockMode6, uint8_t ___keyMaterialSize7, uint8_t ___expandedKeyMaterialSize8, int16_t ___effectiveKeyBytes9, uint8_t ___ivSize10, uint8_t ___blockSize11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* TlsCipherSuite_ComputeServerRecordMAC_m661450756 (TlsCipherSuite_t934814572 * __this, uint8_t ___contentType0, ByteU5BU5D_t3835026402* ___fragment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* TlsCipherSuite_ComputeClientRecordMAC_m3290639544 (TlsCipherSuite_t934814572 * __this, uint8_t ___contentType0, ByteU5BU5D_t3835026402* ___fragment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeMasterSecret(System.Byte[])
extern "C"  void TlsCipherSuite_ComputeMasterSecret_m3863800064 (TlsCipherSuite_t934814572 * __this, ByteU5BU5D_t3835026402* ___preMasterSecret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeKeys()
extern "C"  void TlsCipherSuite_ComputeKeys_m1444202749 (TlsCipherSuite_t934814572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
