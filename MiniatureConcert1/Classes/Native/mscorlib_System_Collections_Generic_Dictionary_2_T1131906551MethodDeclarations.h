﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>
struct Transform_1_t1131906551;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23498949973.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2567883524_gshared (Transform_1_t1131906551 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2567883524(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1131906551 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2567883524_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3498949973  Transform_1_Invoke_m4279631652_gshared (Transform_1_t1131906551 * __this, uint8_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4279631652(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3498949973  (*) (Transform_1_t1131906551 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m4279631652_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2835746363_gshared (Transform_1_t1131906551 * __this, uint8_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2835746363(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1131906551 *, uint8_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2835746363_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3498949973  Transform_1_EndInvoke_m3167124014_gshared (Transform_1_t1131906551 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3167124014(__this, ___result0, method) ((  KeyValuePair_2_t3498949973  (*) (Transform_1_t1131906551 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3167124014_gshared)(__this, ___result0, method)
