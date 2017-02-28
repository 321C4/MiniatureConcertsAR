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

// ExitGames.Client.Photon.Voice.LevelMeterFloat
struct LevelMeterFloat_t2990437671;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.LevelMeterFloat::.ctor(System.Int32,System.Int32)
extern "C"  void LevelMeterFloat__ctor_m2140202294 (LevelMeterFloat_t2990437671 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LevelMeterFloat::process(System.Single[])
extern "C"  void LevelMeterFloat_process_m220733012 (LevelMeterFloat_t2990437671 * __this, SingleU5BU5D_t577127397* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
