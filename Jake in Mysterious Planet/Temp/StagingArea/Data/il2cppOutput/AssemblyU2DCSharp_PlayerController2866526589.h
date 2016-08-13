#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerController::jumpForce
	float ___jumpForce_3;
	// System.Single PlayerController::runningSpeed
	float ___runningSpeed_4;
	// UnityEngine.LayerMask PlayerController::groundLayer
	LayerMask_t1862190090  ___groundLayer_5;
	// UnityEngine.Animator PlayerController::animator
	Animator_t792326996 * ___animator_6;
	// UnityEngine.Rigidbody2D PlayerController::rBody
	Rigidbody2D_t3632243084 * ___rBody_7;
	// UnityEngine.Vector3 PlayerController::startingPosition
	Vector3_t3525329789  ___startingPosition_8;

public:
	inline static int32_t get_offset_of_jumpForce_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jumpForce_3)); }
	inline float get_jumpForce_3() const { return ___jumpForce_3; }
	inline float* get_address_of_jumpForce_3() { return &___jumpForce_3; }
	inline void set_jumpForce_3(float value)
	{
		___jumpForce_3 = value;
	}

	inline static int32_t get_offset_of_runningSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___runningSpeed_4)); }
	inline float get_runningSpeed_4() const { return ___runningSpeed_4; }
	inline float* get_address_of_runningSpeed_4() { return &___runningSpeed_4; }
	inline void set_runningSpeed_4(float value)
	{
		___runningSpeed_4 = value;
	}

	inline static int32_t get_offset_of_groundLayer_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___groundLayer_5)); }
	inline LayerMask_t1862190090  get_groundLayer_5() const { return ___groundLayer_5; }
	inline LayerMask_t1862190090 * get_address_of_groundLayer_5() { return &___groundLayer_5; }
	inline void set_groundLayer_5(LayerMask_t1862190090  value)
	{
		___groundLayer_5 = value;
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___animator_6)); }
	inline Animator_t792326996 * get_animator_6() const { return ___animator_6; }
	inline Animator_t792326996 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t792326996 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier(&___animator_6, value);
	}

	inline static int32_t get_offset_of_rBody_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rBody_7)); }
	inline Rigidbody2D_t3632243084 * get_rBody_7() const { return ___rBody_7; }
	inline Rigidbody2D_t3632243084 ** get_address_of_rBody_7() { return &___rBody_7; }
	inline void set_rBody_7(Rigidbody2D_t3632243084 * value)
	{
		___rBody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rBody_7, value);
	}

	inline static int32_t get_offset_of_startingPosition_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___startingPosition_8)); }
	inline Vector3_t3525329789  get_startingPosition_8() const { return ___startingPosition_8; }
	inline Vector3_t3525329789 * get_address_of_startingPosition_8() { return &___startingPosition_8; }
	inline void set_startingPosition_8(Vector3_t3525329789  value)
	{
		___startingPosition_8 = value;
	}
};

struct PlayerController_t2866526589_StaticFields
{
public:
	// PlayerController PlayerController::instance
	PlayerController_t2866526589 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___instance_2)); }
	inline PlayerController_t2866526589 * get_instance_2() const { return ___instance_2; }
	inline PlayerController_t2866526589 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PlayerController_t2866526589 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
