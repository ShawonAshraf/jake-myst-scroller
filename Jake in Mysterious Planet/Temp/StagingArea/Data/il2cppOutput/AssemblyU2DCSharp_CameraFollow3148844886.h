#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t3148844886  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 CameraFollow::offset
	Vector2_t3525329788  ___offset_2;
	// System.Single CameraFollow::dampTime
	float ___dampTime_3;
	// UnityEngine.Vector3 CameraFollow::velocity
	Vector3_t3525329789  ___velocity_4;
	// UnityEngine.Transform CameraFollow::target
	Transform_t284553113 * ___target_5;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___offset_2)); }
	inline Vector2_t3525329788  get_offset_2() const { return ___offset_2; }
	inline Vector2_t3525329788 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector2_t3525329788  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_dampTime_3() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___dampTime_3)); }
	inline float get_dampTime_3() const { return ___dampTime_3; }
	inline float* get_address_of_dampTime_3() { return &___dampTime_3; }
	inline void set_dampTime_3(float value)
	{
		___dampTime_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___velocity_4)); }
	inline Vector3_t3525329789  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t3525329789 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t3525329789  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___target_5)); }
	inline Transform_t284553113 * get_target_5() const { return ___target_5; }
	inline Transform_t284553113 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_t284553113 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
