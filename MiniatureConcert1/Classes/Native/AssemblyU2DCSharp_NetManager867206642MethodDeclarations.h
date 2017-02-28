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

// NetManager
struct NetManager_t867206642;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DisconnectCause1534558295.h"

// System.Void NetManager::.ctor()
extern "C"  void NetManager__ctor_m1389544779 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::Start()
extern "C"  void NetManager_Start_m1507858431 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnConnectedToMaster()
extern "C"  void NetManager_OnConnectedToMaster_m2002068646 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnJoinedLobby()
extern "C"  void NetManager_OnJoinedLobby_m1004650439 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnPhotonRandomJoinFailed()
extern "C"  void NetManager_OnPhotonRandomJoinFailed_m1584762884 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnFailedToConnectToPhoton(DisconnectCause)
extern "C"  void NetManager_OnFailedToConnectToPhoton_m1548422172 (NetManager_t867206642 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnJoinedRoom()
extern "C"  void NetManager_OnJoinedRoom_m433170250 (NetManager_t867206642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
