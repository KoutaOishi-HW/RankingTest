#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// RankingGameManager
struct RankingGameManager_t1575762321;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NameSave
struct  NameSave_t2419873190  : public MonoBehaviour_t774292115
{
public:
	// System.String NameSave::NAME_KEY
	String_t* ___NAME_KEY_2;
	// RankingGameManager NameSave::_rankingGameManager
	RankingGameManager_t1575762321 * ____rankingGameManager_3;

public:
	inline static int32_t get_offset_of_NAME_KEY_2() { return static_cast<int32_t>(offsetof(NameSave_t2419873190, ___NAME_KEY_2)); }
	inline String_t* get_NAME_KEY_2() const { return ___NAME_KEY_2; }
	inline String_t** get_address_of_NAME_KEY_2() { return &___NAME_KEY_2; }
	inline void set_NAME_KEY_2(String_t* value)
	{
		___NAME_KEY_2 = value;
		Il2CppCodeGenWriteBarrier(&___NAME_KEY_2, value);
	}

	inline static int32_t get_offset_of__rankingGameManager_3() { return static_cast<int32_t>(offsetof(NameSave_t2419873190, ____rankingGameManager_3)); }
	inline RankingGameManager_t1575762321 * get__rankingGameManager_3() const { return ____rankingGameManager_3; }
	inline RankingGameManager_t1575762321 ** get_address_of__rankingGameManager_3() { return &____rankingGameManager_3; }
	inline void set__rankingGameManager_3(RankingGameManager_t1575762321 * value)
	{
		____rankingGameManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____rankingGameManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
