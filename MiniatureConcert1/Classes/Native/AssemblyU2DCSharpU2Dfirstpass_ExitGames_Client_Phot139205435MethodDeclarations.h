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

// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t139205435;
// System.String
struct String_t;
// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct RoomOptions_t2801096405;
// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct LoadBalancingClient_t3349497658;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.LoadBalancing.Player>
struct Dictionary_2_t229807200;
// System.String[]
struct StringU5BU5D_t1642385972;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;
// ExitGames.Client.Photon.LoadBalancing.Player
struct Player_t1221981565;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2801096405.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3349497658.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1281188997.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1221981565.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.Room::.ctor()
extern "C"  void Room__ctor_m3223999033 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::.ctor(System.String)
extern "C"  void Room__ctor_m2123025827 (Room_t139205435 * __this, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::.ctor(System.String,ExitGames.Client.Photon.LoadBalancing.RoomOptions)
extern "C"  void Room__ctor_m3005264507 (Room_t139205435 * __this, String_t* ___roomName0, RoomOptions_t2801096405 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient ExitGames.Client.Photon.LoadBalancing.Room::get_LoadBalancingClient()
extern "C"  LoadBalancingClient_t3349497658 * Room_get_LoadBalancingClient_m3107325688 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_LoadBalancingClient(ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient)
extern "C"  void Room_set_LoadBalancingClient_m2128368791 (Room_t139205435 * __this, LoadBalancingClient_t3349497658 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.Room::get_Name()
extern "C"  String_t* Room_get_Name_m3123794892 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_Name(System.String)
extern "C"  void Room_set_Name_m3240587665 (Room_t139205435 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Room::get_IsOpen()
extern "C"  bool Room_get_IsOpen_m3918624684 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_IsOpen(System.Boolean)
extern "C"  void Room_set_IsOpen_m635380153 (Room_t139205435 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Room::get_IsVisible()
extern "C"  bool Room_get_IsVisible_m1638801936 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_IsVisible(System.Boolean)
extern "C"  void Room_set_IsVisible_m817487139 (Room_t139205435 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.LoadBalancing.Room::get_MaxPlayers()
extern "C"  uint8_t Room_get_MaxPlayers_m3876398810 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_MaxPlayers(System.Byte)
extern "C"  void Room_set_MaxPlayers_m2230085829 (Room_t139205435 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.LoadBalancing.Room::get_PlayerCount()
extern "C"  uint8_t Room_get_PlayerCount_m1968261980 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.LoadBalancing.Player> ExitGames.Client.Photon.LoadBalancing.Room::get_Players()
extern "C"  Dictionary_2_t229807200 * Room_get_Players_m3196038605 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_Players(System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.LoadBalancing.Player>)
extern "C"  void Room_set_Players_m586124038 (Room_t139205435 * __this, Dictionary_2_t229807200 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.LoadBalancing.Room::get_ExpectedUsers()
extern "C"  StringU5BU5D_t1642385972* Room_get_ExpectedUsers_m377562575 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.Room::get_MasterClientId()
extern "C"  int32_t Room_get_MasterClientId_m1919640204 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.LoadBalancing.Room::get_PropsListedInLobby()
extern "C"  StringU5BU5D_t1642385972* Room_get_PropsListedInLobby_m2239220743 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::set_PropsListedInLobby(System.String[])
extern "C"  void Room_set_PropsListedInLobby_m4211585080 (Room_t139205435 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  void Room_SetCustomProperties_m319560805 (Room_t139205435 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedProperties1, WebFlags_t1281188997 * ___webFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::SetPropertiesListedInLobby(System.String[])
extern "C"  void Room_SetPropertiesListedInLobby_m3161162796 (Room_t139205435 * __this, StringU5BU5D_t1642385972* ___propsToListInLobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::RemovePlayer(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  void Room_RemovePlayer_m3680677058 (Room_t139205435 * __this, Player_t1221981565 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::RemovePlayer(System.Int32)
extern "C"  void Room_RemovePlayer_m3979997033 (Room_t139205435 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::MarkAsInactive(System.Int32)
extern "C"  void Room_MarkAsInactive_m25592610 (Room_t139205435 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::UpdateMasterClientId()
extern "C"  void Room_UpdateMasterClientId_m2741705062 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Room::SetMasterClient(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  bool Room_SetMasterClient_m1496901540 (Room_t139205435 * __this, Player_t1221981565 * ___masterClientPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Room::AddPlayer(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  bool Room_AddPlayer_m4287935659 (Room_t139205435 * __this, Player_t1221981565 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Room::StorePlayer(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  Player_t1221981565 * Room_StorePlayer_m3822182346 (Room_t139205435 * __this, Player_t1221981565 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Room::GetPlayer(System.Int32)
extern "C"  Player_t1221981565 * Room_GetPlayer_m1123693962 (Room_t139205435 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Room::ClearExpectedUsers()
extern "C"  void Room_ClearExpectedUsers_m2524575448 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.Room::ToString()
extern "C"  String_t* Room_ToString_m263902782 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.Room::ToStringFull()
extern "C"  String_t* Room_ToStringFull_m1237456389 (Room_t139205435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
