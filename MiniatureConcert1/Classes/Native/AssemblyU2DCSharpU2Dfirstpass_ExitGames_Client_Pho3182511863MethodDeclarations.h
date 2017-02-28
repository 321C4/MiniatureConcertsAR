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

// ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>
struct LevelMeter_1_t3182511863;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::.ctor(System.Int32,System.Int32)
extern "C"  void LevelMeter_1__ctor_m1254341072_gshared (LevelMeter_1_t3182511863 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method);
#define LevelMeter_1__ctor_m1254341072(__this, ___samplingRate0, ___numChannels1, method) ((  void (*) (LevelMeter_1_t3182511863 *, int32_t, int32_t, const MethodInfo*))LevelMeter_1__ctor_m1254341072_gshared)(__this, ___samplingRate0, ___numChannels1, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::get_CurrentAvgAmp()
extern "C"  float LevelMeter_1_get_CurrentAvgAmp_m1470098650_gshared (LevelMeter_1_t3182511863 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentAvgAmp_m1470098650(__this, method) ((  float (*) (LevelMeter_1_t3182511863 *, const MethodInfo*))LevelMeter_1_get_CurrentAvgAmp_m1470098650_gshared)(__this, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::get_CurrentPeakAmp()
extern "C"  float LevelMeter_1_get_CurrentPeakAmp_m2181645951_gshared (LevelMeter_1_t3182511863 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentPeakAmp_m2181645951(__this, method) ((  float (*) (LevelMeter_1_t3182511863 *, const MethodInfo*))LevelMeter_1_get_CurrentPeakAmp_m2181645951_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::set_CurrentPeakAmp(System.Single)
extern "C"  void LevelMeter_1_set_CurrentPeakAmp_m3026186108_gshared (LevelMeter_1_t3182511863 * __this, float ___value0, const MethodInfo* method);
#define LevelMeter_1_set_CurrentPeakAmp_m3026186108(__this, ___value0, method) ((  void (*) (LevelMeter_1_t3182511863 *, float, const MethodInfo*))LevelMeter_1_set_CurrentPeakAmp_m3026186108_gshared)(__this, ___value0, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::get_AccumAvgPeakAmp()
extern "C"  float LevelMeter_1_get_AccumAvgPeakAmp_m2650028811_gshared (LevelMeter_1_t3182511863 * __this, const MethodInfo* method);
#define LevelMeter_1_get_AccumAvgPeakAmp_m2650028811(__this, method) ((  float (*) (LevelMeter_1_t3182511863 *, const MethodInfo*))LevelMeter_1_get_AccumAvgPeakAmp_m2650028811_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Single>::ResetAccumAvgPeakAmp()
extern "C"  void LevelMeter_1_ResetAccumAvgPeakAmp_m4283312289_gshared (LevelMeter_1_t3182511863 * __this, const MethodInfo* method);
#define LevelMeter_1_ResetAccumAvgPeakAmp_m4283312289(__this, method) ((  void (*) (LevelMeter_1_t3182511863 *, const MethodInfo*))LevelMeter_1_ResetAccumAvgPeakAmp_m4283312289_gshared)(__this, method)
