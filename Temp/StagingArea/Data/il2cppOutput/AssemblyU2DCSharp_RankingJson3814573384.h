#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// JsonStatus
struct JsonStatus_t554467496;
// RankingGameManager
struct RankingGameManager_t1575762321;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankingJson
struct  RankingJson_t3814573384  : public MonoBehaviour_t774292115
{
public:
	// JsonStatus RankingJson::_jsonStatus
	JsonStatus_t554467496 * ____jsonStatus_2;
	// RankingGameManager RankingJson::_rankingGameManager
	RankingGameManager_t1575762321 * ____rankingGameManager_3;

public:
	inline static int32_t get_offset_of__jsonStatus_2() { return static_cast<int32_t>(offsetof(RankingJson_t3814573384, ____jsonStatus_2)); }
	inline JsonStatus_t554467496 * get__jsonStatus_2() const { return ____jsonStatus_2; }
	inline JsonStatus_t554467496 ** get_address_of__jsonStatus_2() { return &____jsonStatus_2; }
	inline void set__jsonStatus_2(JsonStatus_t554467496 * value)
	{
		____jsonStatus_2 = value;
		Il2CppCodeGenWriteBarrier(&____jsonStatus_2, value);
	}

	inline static int32_t get_offset_of__rankingGameManager_3() { return static_cast<int32_t>(offsetof(RankingJson_t3814573384, ____rankingGameManager_3)); }
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
