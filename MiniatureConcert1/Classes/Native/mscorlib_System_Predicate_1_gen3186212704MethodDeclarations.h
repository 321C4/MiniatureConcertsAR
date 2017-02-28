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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct Predicate_1_t3186212704;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_448275293.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2195181284_gshared (Predicate_1_t3186212704 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2195181284(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t3186212704 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2195181284_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m282425524_gshared (Predicate_1_t3186212704 * __this, KeyValuePair_2_t448275293  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m282425524(__this, ___obj0, method) ((  bool (*) (Predicate_1_t3186212704 *, KeyValuePair_2_t448275293 , const MethodInfo*))Predicate_1_Invoke_m282425524_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2187233195_gshared (Predicate_1_t3186212704 * __this, KeyValuePair_2_t448275293  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2187233195(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t3186212704 *, KeyValuePair_2_t448275293 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2187233195_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m906164050_gshared (Predicate_1_t3186212704 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m906164050(__this, ___result0, method) ((  bool (*) (Predicate_1_t3186212704 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m906164050_gshared)(__this, ___result0, method)
