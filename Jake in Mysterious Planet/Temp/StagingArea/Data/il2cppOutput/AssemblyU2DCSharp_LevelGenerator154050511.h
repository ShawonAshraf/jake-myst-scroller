#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelGenerator
struct LevelGenerator_t154050511;
// System.Collections.Generic.List`1<LevelPiece>
struct List_1_t2983333603;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGenerator
struct  LevelGenerator_t154050511  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<LevelPiece> LevelGenerator::levelPrefabs
	List_1_t2983333603 * ___levelPrefabs_3;
	// UnityEngine.Transform LevelGenerator::levelStartPoint
	Transform_t284553113 * ___levelStartPoint_4;
	// UnityEngine.Vector3 LevelGenerator::startPosition
	Vector3_t3525329789  ___startPosition_5;
	// System.Collections.Generic.List`1<LevelPiece> LevelGenerator::pieces
	List_1_t2983333603 * ___pieces_6;

public:
	inline static int32_t get_offset_of_levelPrefabs_3() { return static_cast<int32_t>(offsetof(LevelGenerator_t154050511, ___levelPrefabs_3)); }
	inline List_1_t2983333603 * get_levelPrefabs_3() const { return ___levelPrefabs_3; }
	inline List_1_t2983333603 ** get_address_of_levelPrefabs_3() { return &___levelPrefabs_3; }
	inline void set_levelPrefabs_3(List_1_t2983333603 * value)
	{
		___levelPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelPrefabs_3, value);
	}

	inline static int32_t get_offset_of_levelStartPoint_4() { return static_cast<int32_t>(offsetof(LevelGenerator_t154050511, ___levelStartPoint_4)); }
	inline Transform_t284553113 * get_levelStartPoint_4() const { return ___levelStartPoint_4; }
	inline Transform_t284553113 ** get_address_of_levelStartPoint_4() { return &___levelStartPoint_4; }
	inline void set_levelStartPoint_4(Transform_t284553113 * value)
	{
		___levelStartPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelStartPoint_4, value);
	}

	inline static int32_t get_offset_of_startPosition_5() { return static_cast<int32_t>(offsetof(LevelGenerator_t154050511, ___startPosition_5)); }
	inline Vector3_t3525329789  get_startPosition_5() const { return ___startPosition_5; }
	inline Vector3_t3525329789 * get_address_of_startPosition_5() { return &___startPosition_5; }
	inline void set_startPosition_5(Vector3_t3525329789  value)
	{
		___startPosition_5 = value;
	}

	inline static int32_t get_offset_of_pieces_6() { return static_cast<int32_t>(offsetof(LevelGenerator_t154050511, ___pieces_6)); }
	inline List_1_t2983333603 * get_pieces_6() const { return ___pieces_6; }
	inline List_1_t2983333603 ** get_address_of_pieces_6() { return &___pieces_6; }
	inline void set_pieces_6(List_1_t2983333603 * value)
	{
		___pieces_6 = value;
		Il2CppCodeGenWriteBarrier(&___pieces_6, value);
	}
};

struct LevelGenerator_t154050511_StaticFields
{
public:
	// LevelGenerator LevelGenerator::instance
	LevelGenerator_t154050511 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(LevelGenerator_t154050511_StaticFields, ___instance_2)); }
	inline LevelGenerator_t154050511 * get_instance_2() const { return ___instance_2; }
	inline LevelGenerator_t154050511 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(LevelGenerator_t154050511 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
