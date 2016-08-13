#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// LevelPiece
struct LevelPiece_t2186374634;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_LevelPiece2186374634.h"

#pragma once
// LevelPiece[]
struct LevelPieceU5BU5D_t4055571247  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) LevelPiece_t2186374634 * m_Items[1];

public:
	inline LevelPiece_t2186374634 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LevelPiece_t2186374634 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LevelPiece_t2186374634 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
