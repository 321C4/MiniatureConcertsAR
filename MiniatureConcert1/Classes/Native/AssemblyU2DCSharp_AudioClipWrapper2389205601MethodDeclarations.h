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

// AudioClipWrapper
struct AudioClipWrapper_t2389205601;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void AudioClipWrapper::.ctor(UnityEngine.AudioClip)
extern "C"  void AudioClipWrapper__ctor_m1574568331 (AudioClipWrapper_t2389205601 * __this, AudioClip_t1932558630 * ___audioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AudioClipWrapper::get_SamplingRate()
extern "C"  int32_t AudioClipWrapper_get_SamplingRate_m616997508 (AudioClipWrapper_t2389205601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioClipWrapper::get_Loop()
extern "C"  bool AudioClipWrapper_get_Loop_m1379802345 (AudioClipWrapper_t2389205601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioClipWrapper::set_Loop(System.Boolean)
extern "C"  void AudioClipWrapper_set_Loop_m1612375606 (AudioClipWrapper_t2389205601 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioClipWrapper::GetData(System.Single[])
extern "C"  bool AudioClipWrapper_GetData_m3613205673 (AudioClipWrapper_t2389205601 * __this, SingleU5BU5D_t577127397* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioClipWrapper::Dispose()
extern "C"  void AudioClipWrapper_Dispose_m3458306811 (AudioClipWrapper_t2389205601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
