#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collectable
struct  Collectable_t3521509732  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Collectable::isCollected
	bool ___isCollected_2;

public:
	inline static int32_t get_offset_of_isCollected_2() { return static_cast<int32_t>(offsetof(Collectable_t3521509732, ___isCollected_2)); }
	inline bool get_isCollected_2() const { return ___isCollected_2; }
	inline bool* get_address_of_isCollected_2() { return &___isCollected_2; }
	inline void set_isCollected_2(bool value)
	{
		___isCollected_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
