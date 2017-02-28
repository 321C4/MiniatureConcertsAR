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

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct Dictionary_2_t3343072297;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct IEqualityComparer_1_t3955875367;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>[]
struct KeyValuePair_2U5BU5D_t2279914870;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>>
struct IEnumerator_1_t2870908642;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct KeyCollection_t1531602772;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct ValueCollection_t2046132140;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21100417519.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_448275293.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En368129703.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m93665678_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m93665678(__this, method) ((  void (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2__ctor_m93665678_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m864629267_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m864629267(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m864629267_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1498390729_gshared (Dictionary_2_t3343072297 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1498390729(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3343072297 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1498390729_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3594822875_gshared (Dictionary_2_t3343072297 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3594822875(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3343072297 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3594822875_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1652406756_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1652406756(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1652406756_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2630586770_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2630586770(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2630586770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2282110159_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2282110159(__this, method) ((  bool (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2282110159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4094933110_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4094933110(__this, method) ((  bool (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4094933110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3542667262_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3542667262(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3542667262_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2809114019_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2809114019(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2809114019_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2889882868_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2889882868(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2889882868_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3008774700_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3008774700(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3008774700_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m90363743_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m90363743(__this, ___key0, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m90363743_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m708068086_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m708068086(__this, method) ((  bool (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m708068086_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m700210542_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m700210542(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m700210542_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m930705716_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m930705716(__this, method) ((  bool (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m930705716_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1580707227_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t1100417519  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1580707227(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t1100417519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1580707227_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1480544045_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t1100417519  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1480544045(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t1100417519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1480544045_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3012608127_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2U5BU5D_t2279914870* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3012608127(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3343072297 *, KeyValuePair_2U5BU5D_t2279914870*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3012608127_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2652854434_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t1100417519  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2652854434(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t1100417519 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2652854434_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2791357726_gshared (Dictionary_2_t3343072297 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2791357726(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2791357726_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1047264609_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1047264609(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1047264609_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1965415196_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1965415196(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1965415196_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3924625999_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3924625999(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3924625999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m730427374_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m730427374(__this, method) ((  int32_t (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_get_Count_m730427374_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m329966431_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m329966431(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , const MethodInfo*))Dictionary_2_get_Item_m329966431_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m501202444_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m501202444(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m501202444_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3777946258_gshared (Dictionary_2_t3343072297 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3777946258(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3343072297 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3777946258_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3321736689_gshared (Dictionary_2_t3343072297 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3321736689(__this, ___size0, method) ((  void (*) (Dictionary_2_t3343072297 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3321736689_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2415876567_gshared (Dictionary_2_t3343072297 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2415876567(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2415876567_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1100417519  Dictionary_2_make_pair_m2278442225_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2278442225(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1100417519  (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2278442225_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::pick_key(TKey,TValue)
extern "C"  KeyValuePair_2_t448275293  Dictionary_2_pick_key_m1950073433_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1950073433(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t448275293  (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m1950073433_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3134023665_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3134023665(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3134023665_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3631496472_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2U5BU5D_t2279914870* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3631496472(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3343072297 *, KeyValuePair_2U5BU5D_t2279914870*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3631496472_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1936044388_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1936044388(__this, method) ((  void (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_Resize_m1936044388_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1725474869_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1725474869(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m1725474869_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1467378657_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1467378657(__this, method) ((  void (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_Clear_m1467378657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2787942415_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2787942415(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , const MethodInfo*))Dictionary_2_ContainsKey_m2787942415_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1261843127_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1261843127(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m1261843127_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1392269738_gshared (Dictionary_2_t3343072297 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1392269738(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3343072297 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1392269738_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1885072308_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1885072308(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1885072308_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m810543245_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m810543245(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , const MethodInfo*))Dictionary_2_Remove_m810543245_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1452070808_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t448275293  ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1452070808(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t448275293 , Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m1452070808_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Keys()
extern "C"  KeyCollection_t1531602772 * Dictionary_2_get_Keys_m3353489931_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3353489931(__this, method) ((  KeyCollection_t1531602772 * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_get_Keys_m3353489931_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Values()
extern "C"  ValueCollection_t2046132140 * Dictionary_2_get_Values_m4251996123_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m4251996123(__this, method) ((  ValueCollection_t2046132140 * (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_get_Values_m4251996123_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ToTKey(System.Object)
extern "C"  KeyValuePair_2_t448275293  Dictionary_2_ToTKey_m2116602398_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2116602398(__this, ___key0, method) ((  KeyValuePair_2_t448275293  (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2116602398_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1488497134_gshared (Dictionary_2_t3343072297 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1488497134(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t3343072297 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1488497134_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2971544264_gshared (Dictionary_2_t3343072297 * __this, KeyValuePair_2_t1100417519  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2971544264(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3343072297 *, KeyValuePair_2_t1100417519 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2971544264_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::GetEnumerator()
extern "C"  Enumerator_t368129703  Dictionary_2_GetEnumerator_m1841808581_gshared (Dictionary_2_t3343072297 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1841808581(__this, method) ((  Enumerator_t368129703  (*) (Dictionary_2_t3343072297 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1841808581_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m3229538166_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t448275293  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3229538166(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t448275293 , Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3229538166_gshared)(__this /* static, unused */, ___key0, ___value1, method)
