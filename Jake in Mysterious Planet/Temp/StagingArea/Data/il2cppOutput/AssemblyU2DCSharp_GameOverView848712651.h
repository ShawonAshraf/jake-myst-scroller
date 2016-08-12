#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameOverView
struct GameOverView_t848712651;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverView
struct  GameOverView_t848712651  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameOverView::finalScoreLabel
	Text_t3286458198 * ___finalScoreLabel_3;
	// UnityEngine.UI.Text GameOverView::collectedCoinsLabel
	Text_t3286458198 * ___collectedCoinsLabel_4;

public:
	inline static int32_t get_offset_of_finalScoreLabel_3() { return static_cast<int32_t>(offsetof(GameOverView_t848712651, ___finalScoreLabel_3)); }
	inline Text_t3286458198 * get_finalScoreLabel_3() const { return ___finalScoreLabel_3; }
	inline Text_t3286458198 ** get_address_of_finalScoreLabel_3() { return &___finalScoreLabel_3; }
	inline void set_finalScoreLabel_3(Text_t3286458198 * value)
	{
		___finalScoreLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___finalScoreLabel_3, value);
	}

	inline static int32_t get_offset_of_collectedCoinsLabel_4() { return static_cast<int32_t>(offsetof(GameOverView_t848712651, ___collectedCoinsLabel_4)); }
	inline Text_t3286458198 * get_collectedCoinsLabel_4() const { return ___collectedCoinsLabel_4; }
	inline Text_t3286458198 ** get_address_of_collectedCoinsLabel_4() { return &___collectedCoinsLabel_4; }
	inline void set_collectedCoinsLabel_4(Text_t3286458198 * value)
	{
		___collectedCoinsLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___collectedCoinsLabel_4, value);
	}
};

struct GameOverView_t848712651_StaticFields
{
public:
	// GameOverView GameOverView::instance
	GameOverView_t848712651 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameOverView_t848712651_StaticFields, ___instance_2)); }
	inline GameOverView_t848712651 * get_instance_2() const { return ___instance_2; }
	inline GameOverView_t848712651 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameOverView_t848712651 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
