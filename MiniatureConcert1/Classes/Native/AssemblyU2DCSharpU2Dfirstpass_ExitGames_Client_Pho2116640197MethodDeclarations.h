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

// ExitGames.Client.Photon.Voice.LevelMeterShort
struct LevelMeterShort_t2116640197;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.LevelMeterShort::.ctor(System.Int32,System.Int32)
extern "C"  void LevelMeterShort__ctor_m1616305970 (LevelMeterShort_t2116640197 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LevelMeterShort::process(System.Int16[])
extern "C"  void LevelMeterShort_process_m3237379968 (LevelMeterShort_t2116640197 * __this, Int16U5BU5D_t3104283263* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
