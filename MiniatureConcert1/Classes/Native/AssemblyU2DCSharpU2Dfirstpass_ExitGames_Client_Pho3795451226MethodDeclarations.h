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

// ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>
struct LevelMeter_1_t3795451226;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void LevelMeter_1__ctor_m3477145601_gshared (LevelMeter_1_t3795451226 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method);
#define LevelMeter_1__ctor_m3477145601(__this, ___samplingRate0, ___numChannels1, method) ((  void (*) (LevelMeter_1_t3795451226 *, int32_t, int32_t, const MethodInfo*))LevelMeter_1__ctor_m3477145601_gshared)(__this, ___samplingRate0, ___numChannels1, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::get_CurrentAvgAmp()
extern "C"  float LevelMeter_1_get_CurrentAvgAmp_m4035922243_gshared (LevelMeter_1_t3795451226 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentAvgAmp_m4035922243(__this, method) ((  float (*) (LevelMeter_1_t3795451226 *, const MethodInfo*))LevelMeter_1_get_CurrentAvgAmp_m4035922243_gshared)(__this, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::get_CurrentPeakAmp()
extern "C"  float LevelMeter_1_get_CurrentPeakAmp_m1865872780_gshared (LevelMeter_1_t3795451226 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentPeakAmp_m1865872780(__this, method) ((  float (*) (LevelMeter_1_t3795451226 *, const MethodInfo*))LevelMeter_1_get_CurrentPeakAmp_m1865872780_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::set_CurrentPeakAmp(System.Single)
extern "C"  void LevelMeter_1_set_CurrentPeakAmp_m3615867787_gshared (LevelMeter_1_t3795451226 * __this, float ___value0, const MethodInfo* method);
#define LevelMeter_1_set_CurrentPeakAmp_m3615867787(__this, ___value0, method) ((  void (*) (LevelMeter_1_t3795451226 *, float, const MethodInfo*))LevelMeter_1_set_CurrentPeakAmp_m3615867787_gshared)(__this, ___value0, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::get_AccumAvgPeakAmp()
extern "C"  float LevelMeter_1_get_AccumAvgPeakAmp_m3924211142_gshared (LevelMeter_1_t3795451226 * __this, const MethodInfo* method);
#define LevelMeter_1_get_AccumAvgPeakAmp_m3924211142(__this, method) ((  float (*) (LevelMeter_1_t3795451226 *, const MethodInfo*))LevelMeter_1_get_AccumAvgPeakAmp_m3924211142_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>::ResetAccumAvgPeakAmp()
extern "C"  void LevelMeter_1_ResetAccumAvgPeakAmp_m2260981018_gshared (LevelMeter_1_t3795451226 * __this, const MethodInfo* method);
#define LevelMeter_1_ResetAccumAvgPeakAmp_m2260981018(__this, method) ((  void (*) (LevelMeter_1_t3795451226 *, const MethodInfo*))LevelMeter_1_ResetAccumAvgPeakAmp_m2260981018_gshared)(__this, method)
