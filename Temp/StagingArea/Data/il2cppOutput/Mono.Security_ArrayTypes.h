﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Mono.Math.BigInteger
struct BigInteger_t3893714978;

#include "mscorlib_System_Array4136897760.h"
#include "Mono_Security_Mono_Math_BigInteger3893714977.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2011017009.h"

#pragma once
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t2371362365  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BigInteger_t3893714978 * m_Items[1];

public:
	inline BigInteger_t3893714978 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BigInteger_t3893714978 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t3893714978 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1163649260  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
