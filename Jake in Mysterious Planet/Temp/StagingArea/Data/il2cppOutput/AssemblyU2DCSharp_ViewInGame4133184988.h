#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewInGame
struct  ViewInGame_t4133184988  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ViewInGame::coinLabel
	Text_t3286458198 * ___coinLabel_2;
	// UnityEngine.UI.Text ViewInGame::scoreLabel
	Text_t3286458198 * ___scoreLabel_3;
	// UnityEngine.UI.Text ViewInGame::highScoreLabel
	Text_t3286458198 * ___highScoreLabel_4;

public:
	inline static int32_t get_offset_of_coinLabel_2() { return static_cast<int32_t>(offsetof(ViewInGame_t4133184988, ___coinLabel_2)); }
	inline Text_t3286458198 * get_coinLabel_2() const { return ___coinLabel_2; }
	inline Text_t3286458198 ** get_address_of_coinLabel_2() { return &___coinLabel_2; }
	inline void set_coinLabel_2(Text_t3286458198 * value)
	{
		___coinLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___coinLabel_2, value);
	}

	inline static int32_t get_offset_of_scoreLabel_3() { return static_cast<int32_t>(offsetof(ViewInGame_t4133184988, ___scoreLabel_3)); }
	inline Text_t3286458198 * get_scoreLabel_3() const { return ___scoreLabel_3; }
	inline Text_t3286458198 ** get_address_of_scoreLabel_3() { return &___scoreLabel_3; }
	inline void set_scoreLabel_3(Text_t3286458198 * value)
	{
		___scoreLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_3, value);
	}

	inline static int32_t get_offset_of_highScoreLabel_4() { return static_cast<int32_t>(offsetof(ViewInGame_t4133184988, ___highScoreLabel_4)); }
	inline Text_t3286458198 * get_highScoreLabel_4() const { return ___highScoreLabel_4; }
	inline Text_t3286458198 ** get_address_of_highScoreLabel_4() { return &___highScoreLabel_4; }
	inline void set_highScoreLabel_4(Text_t3286458198 * value)
	{
		___highScoreLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreLabel_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
