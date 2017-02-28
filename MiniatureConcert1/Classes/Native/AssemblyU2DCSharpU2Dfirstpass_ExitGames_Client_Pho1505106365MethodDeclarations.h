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

// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate
struct RemoteVoiceRemoveDelegate_t1505106365;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteVoiceRemoveDelegate__ctor_m684367620 (RemoteVoiceRemoveDelegate_t1505106365 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate::Invoke(System.Int32,System.Int32,System.Byte,System.Object)
extern "C"  void RemoteVoiceRemoveDelegate_Invoke_m7521501 (RemoteVoiceRemoveDelegate_t1505106365 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, Il2CppObject * ___localUserObject3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RemoteVoiceRemoveDelegate_BeginInvoke_m3713395082 (RemoteVoiceRemoveDelegate_t1505106365 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, Il2CppObject * ___localUserObject3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RemoteVoiceRemoveDelegate_EndInvoke_m2971200418 (RemoteVoiceRemoveDelegate_t1505106365 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
