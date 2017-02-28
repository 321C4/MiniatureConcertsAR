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

// System.Collections.IDictionary
struct IDictionary_t596158605;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_Merge_m3351142488 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_MergeStringKeys_m619141477 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C"  Hashtable_t995404622 * Extensions_StripToStringKeys_m2303111270 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C"  void Extensions_StripKeysWithNullValues_m2712445488 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Extensions::Contains(System.Int32[],System.Int32)
extern "C"  bool Extensions_Contains_m3840404745 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___target0, int32_t ___nr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
