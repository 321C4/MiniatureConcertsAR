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

// ExitGames.Client.Photon.LoadBalancing.RoomInfo
struct RoomInfo_t2713209379;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo__ctor_m3467851845 (RoomInfo_t2713209379 * __this, String_t* ___roomName0, Hashtable_t995404622 * ___roomProperties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_serverSideMasterClient()
extern "C"  bool RoomInfo_get_serverSideMasterClient_m34398853 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m2921243574 (RoomInfo_t2713209379 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_CustomProperties()
extern "C"  Hashtable_t995404622 * RoomInfo_get_CustomProperties_m1280564455 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_Name()
extern "C"  String_t* RoomInfo_get_Name_m987575984 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_PlayerCount()
extern "C"  int32_t RoomInfo_get_PlayerCount_m2182485702 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomInfo::set_PlayerCount(System.Int32)
extern "C"  void RoomInfo_set_PlayerCount_m2972977139 (RoomInfo_t2713209379 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_IsLocalClientInside()
extern "C"  bool RoomInfo_get_IsLocalClientInside_m4258398654 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomInfo::set_IsLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_IsLocalClientInside_m4292718807 (RoomInfo_t2713209379 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_MaxPlayers()
extern "C"  uint8_t RoomInfo_get_MaxPlayers_m2579580742 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_IsOpen()
extern "C"  bool RoomInfo_get_IsOpen_m2976965824 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::get_IsVisible()
extern "C"  bool RoomInfo_get_IsVisible_m642517984 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::Equals(System.Object)
extern "C"  bool RoomInfo_Equals_m2715892628 (RoomInfo_t2713209379 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomInfo::GetHashCode()
extern "C"  int32_t RoomInfo_GetHashCode_m1266694072 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.RoomInfo::ToString()
extern "C"  String_t* RoomInfo_ToString_m664575650 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.RoomInfo::ToStringFull()
extern "C"  String_t* RoomInfo_ToStringFull_m201885611 (RoomInfo_t2713209379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomInfo::CacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_CacheProperties_m3037291780 (RoomInfo_t2713209379 * __this, Hashtable_t995404622 * ___propertiesToCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
