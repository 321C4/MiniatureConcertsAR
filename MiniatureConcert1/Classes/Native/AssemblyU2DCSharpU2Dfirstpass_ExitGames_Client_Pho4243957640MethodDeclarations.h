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

// ExitGames.Client.Photon.Voice.VoiceDetectorFloat
struct VoiceDetectorFloat_t4243957640;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceDetectorFloat::.ctor(System.Int32,System.Int32)
extern "C"  void VoiceDetectorFloat__ctor_m1125125553 (VoiceDetectorFloat_t4243957640 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceDetectorFloat::process(System.Single[])
extern "C"  void VoiceDetectorFloat_process_m3438308545 (VoiceDetectorFloat_t4243957640 * __this, SingleU5BU5D_t577127397* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
