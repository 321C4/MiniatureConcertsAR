﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.WebRpcResponse
struct  WebRpcResponse_t673622544  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.LoadBalancing.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.WebRpcResponse::<ReturnCode>k__BackingField
	int32_t ___U3CReturnCodeU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.LoadBalancing.WebRpcResponse::<DebugMessage>k__BackingField
	String_t* ___U3CDebugMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> ExitGames.Client.Photon.LoadBalancing.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t309261261 * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_t673622544, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CReturnCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_t673622544, ___U3CReturnCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CReturnCodeU3Ek__BackingField_1() const { return ___U3CReturnCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReturnCodeU3Ek__BackingField_1() { return &___U3CReturnCodeU3Ek__BackingField_1; }
	inline void set_U3CReturnCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CReturnCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDebugMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_t673622544, ___U3CDebugMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CDebugMessageU3Ek__BackingField_2() const { return ___U3CDebugMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDebugMessageU3Ek__BackingField_2() { return &___U3CDebugMessageU3Ek__BackingField_2; }
	inline void set_U3CDebugMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CDebugMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDebugMessageU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_t673622544, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t309261261 * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t309261261 ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t309261261 * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParametersU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
