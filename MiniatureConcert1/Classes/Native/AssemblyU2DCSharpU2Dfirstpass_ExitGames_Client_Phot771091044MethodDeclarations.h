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

// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate
struct AudioFrameFloatDelegate_t771091044;
// System.Object
struct Il2CppObject;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioFrameFloatDelegate__ctor_m4070117173 (AudioFrameFloatDelegate_t771091044 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate::Invoke(System.Int32,System.Int32,System.Byte,System.Single[],System.Object)
extern "C"  void AudioFrameFloatDelegate_Invoke_m1265690865 (AudioFrameFloatDelegate_t771091044 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, SingleU5BU5D_t577127397* ___frame3, Il2CppObject * ___localUserObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,System.Single[],System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AudioFrameFloatDelegate_BeginInvoke_m2689138086 (AudioFrameFloatDelegate_t771091044 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, SingleU5BU5D_t577127397* ___frame3, Il2CppObject * ___localUserObject4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AudioFrameFloatDelegate_EndInvoke_m2791876955 (AudioFrameFloatDelegate_t771091044 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
