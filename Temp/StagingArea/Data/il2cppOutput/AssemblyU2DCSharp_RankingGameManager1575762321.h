#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.UI.Text
struct Text_t3921196294;
// UnityEngine.UI.InputField
struct InputField_t3747200355;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankingGameManager
struct  RankingGameManager_t1575762321  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject RankingGameManager::titlePanel
	GameObject_t1366199518 * ___titlePanel_2;
	// UnityEngine.GameObject RankingGameManager::inputPanel
	GameObject_t1366199518 * ___inputPanel_3;
	// UnityEngine.GameObject RankingGameManager::rankingPanel
	GameObject_t1366199518 * ___rankingPanel_4;
	// UnityEngine.GameObject RankingGameManager::endPanel
	GameObject_t1366199518 * ___endPanel_5;
	// System.Double RankingGameManager::time
	double ___time_6;
	// System.Int32 RankingGameManager::tapCount
	int32_t ___tapCount_7;
	// UnityEngine.UI.Text RankingGameManager::timeLabel
	Text_t3921196294 * ___timeLabel_8;
	// UnityEngine.UI.Text RankingGameManager::tapLabel
	Text_t3921196294 * ___tapLabel_9;
	// UnityEngine.UI.Text RankingGameManager::rankingLabel
	Text_t3921196294 * ___rankingLabel_10;
	// UnityEngine.UI.InputField RankingGameManager::inputField
	InputField_t3747200355 * ___inputField_11;
	// System.String RankingGameManager::userName
	String_t* ___userName_12;
	// System.Boolean RankingGameManager::isGameStart
	bool ___isGameStart_13;

public:
	inline static int32_t get_offset_of_titlePanel_2() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___titlePanel_2)); }
	inline GameObject_t1366199518 * get_titlePanel_2() const { return ___titlePanel_2; }
	inline GameObject_t1366199518 ** get_address_of_titlePanel_2() { return &___titlePanel_2; }
	inline void set_titlePanel_2(GameObject_t1366199518 * value)
	{
		___titlePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___titlePanel_2, value);
	}

	inline static int32_t get_offset_of_inputPanel_3() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___inputPanel_3)); }
	inline GameObject_t1366199518 * get_inputPanel_3() const { return ___inputPanel_3; }
	inline GameObject_t1366199518 ** get_address_of_inputPanel_3() { return &___inputPanel_3; }
	inline void set_inputPanel_3(GameObject_t1366199518 * value)
	{
		___inputPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputPanel_3, value);
	}

	inline static int32_t get_offset_of_rankingPanel_4() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___rankingPanel_4)); }
	inline GameObject_t1366199518 * get_rankingPanel_4() const { return ___rankingPanel_4; }
	inline GameObject_t1366199518 ** get_address_of_rankingPanel_4() { return &___rankingPanel_4; }
	inline void set_rankingPanel_4(GameObject_t1366199518 * value)
	{
		___rankingPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___rankingPanel_4, value);
	}

	inline static int32_t get_offset_of_endPanel_5() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___endPanel_5)); }
	inline GameObject_t1366199518 * get_endPanel_5() const { return ___endPanel_5; }
	inline GameObject_t1366199518 ** get_address_of_endPanel_5() { return &___endPanel_5; }
	inline void set_endPanel_5(GameObject_t1366199518 * value)
	{
		___endPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___endPanel_5, value);
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___time_6)); }
	inline double get_time_6() const { return ___time_6; }
	inline double* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(double value)
	{
		___time_6 = value;
	}

	inline static int32_t get_offset_of_tapCount_7() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___tapCount_7)); }
	inline int32_t get_tapCount_7() const { return ___tapCount_7; }
	inline int32_t* get_address_of_tapCount_7() { return &___tapCount_7; }
	inline void set_tapCount_7(int32_t value)
	{
		___tapCount_7 = value;
	}

	inline static int32_t get_offset_of_timeLabel_8() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___timeLabel_8)); }
	inline Text_t3921196294 * get_timeLabel_8() const { return ___timeLabel_8; }
	inline Text_t3921196294 ** get_address_of_timeLabel_8() { return &___timeLabel_8; }
	inline void set_timeLabel_8(Text_t3921196294 * value)
	{
		___timeLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___timeLabel_8, value);
	}

	inline static int32_t get_offset_of_tapLabel_9() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___tapLabel_9)); }
	inline Text_t3921196294 * get_tapLabel_9() const { return ___tapLabel_9; }
	inline Text_t3921196294 ** get_address_of_tapLabel_9() { return &___tapLabel_9; }
	inline void set_tapLabel_9(Text_t3921196294 * value)
	{
		___tapLabel_9 = value;
		Il2CppCodeGenWriteBarrier(&___tapLabel_9, value);
	}

	inline static int32_t get_offset_of_rankingLabel_10() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___rankingLabel_10)); }
	inline Text_t3921196294 * get_rankingLabel_10() const { return ___rankingLabel_10; }
	inline Text_t3921196294 ** get_address_of_rankingLabel_10() { return &___rankingLabel_10; }
	inline void set_rankingLabel_10(Text_t3921196294 * value)
	{
		___rankingLabel_10 = value;
		Il2CppCodeGenWriteBarrier(&___rankingLabel_10, value);
	}

	inline static int32_t get_offset_of_inputField_11() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___inputField_11)); }
	inline InputField_t3747200355 * get_inputField_11() const { return ___inputField_11; }
	inline InputField_t3747200355 ** get_address_of_inputField_11() { return &___inputField_11; }
	inline void set_inputField_11(InputField_t3747200355 * value)
	{
		___inputField_11 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_11, value);
	}

	inline static int32_t get_offset_of_userName_12() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___userName_12)); }
	inline String_t* get_userName_12() const { return ___userName_12; }
	inline String_t** get_address_of_userName_12() { return &___userName_12; }
	inline void set_userName_12(String_t* value)
	{
		___userName_12 = value;
		Il2CppCodeGenWriteBarrier(&___userName_12, value);
	}

	inline static int32_t get_offset_of_isGameStart_13() { return static_cast<int32_t>(offsetof(RankingGameManager_t1575762321, ___isGameStart_13)); }
	inline bool get_isGameStart_13() const { return ___isGameStart_13; }
	inline bool* get_address_of_isGameStart_13() { return &___isGameStart_13; }
	inline void set_isGameStart_13(bool value)
	{
		___isGameStart_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
