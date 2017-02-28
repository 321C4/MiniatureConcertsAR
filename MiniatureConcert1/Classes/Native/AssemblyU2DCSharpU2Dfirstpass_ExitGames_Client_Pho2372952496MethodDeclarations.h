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

// ExitGames.Client.Photon.Voice.VoiceDetectorShort
struct VoiceDetectorShort_t2372952496;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceDetectorShort::.ctor(System.Int32,System.Int32)
extern "C"  void VoiceDetectorShort__ctor_m2590393155 (VoiceDetectorShort_t2372952496 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceDetectorShort::process(System.Int16[])
extern "C"  void VoiceDetectorShort_process_m1516634493 (VoiceDetectorShort_t2372952496 * __this, Int16U5BU5D_t3104283263* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
