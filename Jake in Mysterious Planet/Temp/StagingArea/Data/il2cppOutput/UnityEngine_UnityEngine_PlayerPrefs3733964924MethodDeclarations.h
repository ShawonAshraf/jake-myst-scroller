#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
extern "C"  bool PlayerPrefs_TrySetFloat_m96551332 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern "C"  void PlayerPrefs_SetFloat_m1687591347 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C"  float PlayerPrefs_GetFloat_m1210224051 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
