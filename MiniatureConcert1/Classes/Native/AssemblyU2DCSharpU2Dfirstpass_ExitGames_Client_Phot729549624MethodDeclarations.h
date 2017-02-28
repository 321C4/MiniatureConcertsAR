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

// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate
struct AudioFrameShortDelegate_t729549624;
// System.Object
struct Il2CppObject;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioFrameShortDelegate__ctor_m2477610119 (AudioFrameShortDelegate_t729549624 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate::Invoke(System.Int32,System.Int32,System.Byte,System.Int16[],System.Object)
extern "C"  void AudioFrameShortDelegate_Invoke_m3487756245 (AudioFrameShortDelegate_t729549624 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, Int16U5BU5D_t3104283263* ___frame3, Il2CppObject * ___localUserObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,System.Int16[],System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AudioFrameShortDelegate_BeginInvoke_m481892450 (AudioFrameShortDelegate_t729549624 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, Int16U5BU5D_t3104283263* ___frame3, Il2CppObject * ___localUserObject4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AudioFrameShortDelegate_EndInvoke_m3668758225 (AudioFrameShortDelegate_t729549624 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
