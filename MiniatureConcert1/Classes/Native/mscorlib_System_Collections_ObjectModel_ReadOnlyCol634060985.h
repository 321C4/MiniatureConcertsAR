﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct IList_1_t989215894;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct  ReadOnlyCollection_1_t634060985  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	Il2CppObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t634060985, ___list_0)); }
	inline Il2CppObject* get_list_0() const { return ___list_0; }
	inline Il2CppObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(Il2CppObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
