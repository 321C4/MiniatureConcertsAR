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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Int32>
struct Transform_1_t3999801322;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3135999616_gshared (Transform_1_t3999801322 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3135999616(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3999801322 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3135999616_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3423103176_gshared (Transform_1_t3999801322 * __this, uint8_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3423103176(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3999801322 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m3423103176_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m273574571_gshared (Transform_1_t3999801322 * __this, uint8_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m273574571(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3999801322 *, uint8_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m273574571_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m1044402946_gshared (Transform_1_t3999801322 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1044402946(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3999801322 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1044402946_gshared)(__this, ___result0, method)
