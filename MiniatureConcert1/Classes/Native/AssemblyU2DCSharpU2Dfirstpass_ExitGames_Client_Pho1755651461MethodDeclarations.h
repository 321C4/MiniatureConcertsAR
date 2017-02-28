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

// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t1755651461;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteVoiceInfoDelegate__ctor_m2678070436 (RemoteVoiceInfoDelegate_t1755651461 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,System.Object&)
extern "C"  void RemoteVoiceInfoDelegate_Invoke_m1797048155 (RemoteVoiceInfoDelegate_t1755651461 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_t82194312 * ___voiceInfo3, Il2CppObject ** ___localUserObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,System.Object&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RemoteVoiceInfoDelegate_BeginInvoke_m4142680534 (RemoteVoiceInfoDelegate_t1755651461 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_t82194312 * ___voiceInfo3, Il2CppObject ** ___localUserObject4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::EndInvoke(System.Object&,System.IAsyncResult)
extern "C"  void RemoteVoiceInfoDelegate_EndInvoke_m43174450 (RemoteVoiceInfoDelegate_t1755651461 * __this, Il2CppObject ** ___localUserObject0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
