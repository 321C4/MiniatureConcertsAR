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

// ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>
struct LevelMeter_1_t852280549;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::.ctor(System.Int32,System.Int32)
extern "C"  void LevelMeter_1__ctor_m4065893416_gshared (LevelMeter_1_t852280549 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method);
#define LevelMeter_1__ctor_m4065893416(__this, ___samplingRate0, ___numChannels1, method) ((  void (*) (LevelMeter_1_t852280549 *, int32_t, int32_t, const MethodInfo*))LevelMeter_1__ctor_m4065893416_gshared)(__this, ___samplingRate0, ___numChannels1, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::get_CurrentAvgAmp()
extern "C"  float LevelMeter_1_get_CurrentAvgAmp_m850259030_gshared (LevelMeter_1_t852280549 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentAvgAmp_m850259030(__this, method) ((  float (*) (LevelMeter_1_t852280549 *, const MethodInfo*))LevelMeter_1_get_CurrentAvgAmp_m850259030_gshared)(__this, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::get_CurrentPeakAmp()
extern "C"  float LevelMeter_1_get_CurrentPeakAmp_m819540461_gshared (LevelMeter_1_t852280549 * __this, const MethodInfo* method);
#define LevelMeter_1_get_CurrentPeakAmp_m819540461(__this, method) ((  float (*) (LevelMeter_1_t852280549 *, const MethodInfo*))LevelMeter_1_get_CurrentPeakAmp_m819540461_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::set_CurrentPeakAmp(System.Single)
extern "C"  void LevelMeter_1_set_CurrentPeakAmp_m4178754904_gshared (LevelMeter_1_t852280549 * __this, float ___value0, const MethodInfo* method);
#define LevelMeter_1_set_CurrentPeakAmp_m4178754904(__this, ___value0, method) ((  void (*) (LevelMeter_1_t852280549 *, float, const MethodInfo*))LevelMeter_1_set_CurrentPeakAmp_m4178754904_gshared)(__this, ___value0, method)
// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::get_AccumAvgPeakAmp()
extern "C"  float LevelMeter_1_get_AccumAvgPeakAmp_m3904518661_gshared (LevelMeter_1_t852280549 * __this, const MethodInfo* method);
#define LevelMeter_1_get_AccumAvgPeakAmp_m3904518661(__this, method) ((  float (*) (LevelMeter_1_t852280549 *, const MethodInfo*))LevelMeter_1_get_AccumAvgPeakAmp_m3904518661_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>::ResetAccumAvgPeakAmp()
extern "C"  void LevelMeter_1_ResetAccumAvgPeakAmp_m1697232579_gshared (LevelMeter_1_t852280549 * __this, const MethodInfo* method);
#define LevelMeter_1_ResetAccumAvgPeakAmp_m1697232579(__this, method) ((  void (*) (LevelMeter_1_t852280549 *, const MethodInfo*))LevelMeter_1_ResetAccumAvgPeakAmp_m1697232579_gshared)(__this, method)
