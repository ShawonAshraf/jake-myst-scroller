#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// UnityEngine.Canvas
struct Canvas_t3534013893;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GameState2994032543.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t3012272455
{
public:
	// GameState GameManager::currentGameState
	int32_t ___currentGameState_2;
	// UnityEngine.Canvas GameManager::menuCanvas
	Canvas_t3534013893 * ___menuCanvas_4;
	// UnityEngine.Canvas GameManager::inGameCanvas
	Canvas_t3534013893 * ___inGameCanvas_5;
	// UnityEngine.Canvas GameManager::gameOverCanvas
	Canvas_t3534013893 * ___gameOverCanvas_6;
	// System.Int32 GameManager::collectedCoins
	int32_t ___collectedCoins_7;

public:
	inline static int32_t get_offset_of_currentGameState_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentGameState_2)); }
	inline int32_t get_currentGameState_2() const { return ___currentGameState_2; }
	inline int32_t* get_address_of_currentGameState_2() { return &___currentGameState_2; }
	inline void set_currentGameState_2(int32_t value)
	{
		___currentGameState_2 = value;
	}

	inline static int32_t get_offset_of_menuCanvas_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___menuCanvas_4)); }
	inline Canvas_t3534013893 * get_menuCanvas_4() const { return ___menuCanvas_4; }
	inline Canvas_t3534013893 ** get_address_of_menuCanvas_4() { return &___menuCanvas_4; }
	inline void set_menuCanvas_4(Canvas_t3534013893 * value)
	{
		___menuCanvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuCanvas_4, value);
	}

	inline static int32_t get_offset_of_inGameCanvas_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___inGameCanvas_5)); }
	inline Canvas_t3534013893 * get_inGameCanvas_5() const { return ___inGameCanvas_5; }
	inline Canvas_t3534013893 ** get_address_of_inGameCanvas_5() { return &___inGameCanvas_5; }
	inline void set_inGameCanvas_5(Canvas_t3534013893 * value)
	{
		___inGameCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___inGameCanvas_5, value);
	}

	inline static int32_t get_offset_of_gameOverCanvas_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameOverCanvas_6)); }
	inline Canvas_t3534013893 * get_gameOverCanvas_6() const { return ___gameOverCanvas_6; }
	inline Canvas_t3534013893 ** get_address_of_gameOverCanvas_6() { return &___gameOverCanvas_6; }
	inline void set_gameOverCanvas_6(Canvas_t3534013893 * value)
	{
		___gameOverCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverCanvas_6, value);
	}

	inline static int32_t get_offset_of_collectedCoins_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___collectedCoins_7)); }
	inline int32_t get_collectedCoins_7() const { return ___collectedCoins_7; }
	inline int32_t* get_address_of_collectedCoins_7() { return &___collectedCoins_7; }
	inline void set_collectedCoins_7(int32_t value)
	{
		___collectedCoins_7 = value;
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2369589051 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___instance_3)); }
	inline GameManager_t2369589051 * get_instance_3() const { return ___instance_3; }
	inline GameManager_t2369589051 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GameManager_t2369589051 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
