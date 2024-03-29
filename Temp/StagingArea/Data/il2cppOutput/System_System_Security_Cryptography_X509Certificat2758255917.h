﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4235512629;
// System.Security.Cryptography.Oid
struct Oid_t1426139793;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t2758255917  : public Il2CppObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t2387210216 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t4235512629 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t4235512629 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t1426139793 * ____oid_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(PublicKey_t2758255917, ____key_0)); }
	inline AsymmetricAlgorithm_t2387210216 * get__key_0() const { return ____key_0; }
	inline AsymmetricAlgorithm_t2387210216 ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(AsymmetricAlgorithm_t2387210216 * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier(&____key_0, value);
	}

	inline static int32_t get_offset_of__keyValue_1() { return static_cast<int32_t>(offsetof(PublicKey_t2758255917, ____keyValue_1)); }
	inline AsnEncodedData_t4235512629 * get__keyValue_1() const { return ____keyValue_1; }
	inline AsnEncodedData_t4235512629 ** get_address_of__keyValue_1() { return &____keyValue_1; }
	inline void set__keyValue_1(AsnEncodedData_t4235512629 * value)
	{
		____keyValue_1 = value;
		Il2CppCodeGenWriteBarrier(&____keyValue_1, value);
	}

	inline static int32_t get_offset_of__params_2() { return static_cast<int32_t>(offsetof(PublicKey_t2758255917, ____params_2)); }
	inline AsnEncodedData_t4235512629 * get__params_2() const { return ____params_2; }
	inline AsnEncodedData_t4235512629 ** get_address_of__params_2() { return &____params_2; }
	inline void set__params_2(AsnEncodedData_t4235512629 * value)
	{
		____params_2 = value;
		Il2CppCodeGenWriteBarrier(&____params_2, value);
	}

	inline static int32_t get_offset_of__oid_3() { return static_cast<int32_t>(offsetof(PublicKey_t2758255917, ____oid_3)); }
	inline Oid_t1426139793 * get__oid_3() const { return ____oid_3; }
	inline Oid_t1426139793 ** get_address_of__oid_3() { return &____oid_3; }
	inline void set__oid_3(Oid_t1426139793 * value)
	{
		____oid_3 = value;
		Il2CppCodeGenWriteBarrier(&____oid_3, value);
	}
};

struct PublicKey_t2758255917_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map9_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_4() { return static_cast<int32_t>(offsetof(PublicKey_t2758255917_StaticFields, ___U3CU3Ef__switchU24map9_4)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map9_4() const { return ___U3CU3Ef__switchU24map9_4; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map9_4() { return &___U3CU3Ef__switchU24map9_4; }
	inline void set_U3CU3Ef__switchU24map9_4(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map9_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
