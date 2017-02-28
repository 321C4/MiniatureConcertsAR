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

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct LoadBalancingClient_t3349497658;
// System.String
struct String_t;
// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues
struct AuthenticationValues_t2603619994;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t3812182506;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t4223148500;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3450336510;
// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct TypedLobby_t198890120;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo>
struct List_1_t1533082706;
// ExitGames.Client.Photon.LoadBalancing.Player
struct Player_t1221981565;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo>
struct List_1_t469556838;
// System.String[]
struct StringU5BU5D_t1642385972;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct RoomOptions_t2801096405;
// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions
struct RaiseEventOptions_t2362123322;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t139205435;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2603619994.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2408587787.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4010383124.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3488621195.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot198890120.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1221981565.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot157756873.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2801096405.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1281188997.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2362123322.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingClient__ctor_m2158585758 (LoadBalancingClient_t3349497658 * __this, uint8_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::.ctor(System.String,System.String,System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingClient__ctor_m2895942486 (LoadBalancingClient_t3349497658 * __this, String_t* ___masterAddress0, String_t* ___appId1, String_t* ___gameVersion2, uint8_t ___protocol3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AppVersion()
extern "C"  String_t* LoadBalancingClient_get_AppVersion_m3231253037 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AppVersion(System.String)
extern "C"  void LoadBalancingClient_set_AppVersion_m3474739344 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AppId()
extern "C"  String_t* LoadBalancingClient_get_AppId_m1268520660 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AppId(System.String)
extern "C"  void LoadBalancingClient_set_AppId_m3064775993 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AuthValues()
extern "C"  AuthenticationValues_t2603619994 * LoadBalancingClient_get_AuthValues_m4040363275 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AuthValues(ExitGames.Client.Photon.LoadBalancing.AuthenticationValues)
extern "C"  void LoadBalancingClient_set_AuthValues_m1597332882 (LoadBalancingClient_t3349497658 * __this, AuthenticationValues_t2603619994 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_TokenForInit()
extern "C"  String_t* LoadBalancingClient_get_TokenForInit_m1571412050 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_IsUsingNameServer()
extern "C"  bool LoadBalancingClient_get_IsUsingNameServer_m2489797085 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_IsUsingNameServer(System.Boolean)
extern "C"  void LoadBalancingClient_set_IsUsingNameServer_m595350302 (LoadBalancingClient_t3349497658 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_NameServerAddress()
extern "C"  String_t* LoadBalancingClient_get_NameServerAddress_m1262925670 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_CurrentServerAddress()
extern "C"  String_t* LoadBalancingClient_get_CurrentServerAddress_m548200838 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_MasterServerAddress()
extern "C"  String_t* LoadBalancingClient_get_MasterServerAddress_m2309533837 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_MasterServerAddress(System.String)
extern "C"  void LoadBalancingClient_set_MasterServerAddress_m2144760422 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_GameServerAddress()
extern "C"  String_t* LoadBalancingClient_get_GameServerAddress_m1271876931 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_GameServerAddress(System.String)
extern "C"  void LoadBalancingClient_set_GameServerAddress_m2861986426 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.ServerConnection ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_Server()
extern "C"  int32_t LoadBalancingClient_get_Server_m574445501 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_Server(ExitGames.Client.Photon.LoadBalancing.ServerConnection)
extern "C"  void LoadBalancingClient_set_Server_m1073559826 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.ClientState ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_State()
extern "C"  int32_t LoadBalancingClient_get_State_m4060629462 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_State(ExitGames.Client.Photon.LoadBalancing.ClientState)
extern "C"  void LoadBalancingClient_set_State_m3214890525 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_IsConnected()
extern "C"  bool LoadBalancingClient_get_IsConnected_m3006119406 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_IsConnectedAndReady()
extern "C"  bool LoadBalancingClient_get_IsConnectedAndReady_m200264734 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::add_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void LoadBalancingClient_add_OnStateChangeAction_m2637457421 (LoadBalancingClient_t3349497658 * __this, Action_1_t3812182506 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::remove_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void LoadBalancingClient_remove_OnStateChangeAction_m3181178908 (LoadBalancingClient_t3349497658 * __this, Action_1_t3812182506 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::add_OnEventAction(System.Action`1<ExitGames.Client.Photon.EventData>)
extern "C"  void LoadBalancingClient_add_OnEventAction_m716841281 (LoadBalancingClient_t3349497658 * __this, Action_1_t4223148500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::remove_OnEventAction(System.Action`1<ExitGames.Client.Photon.EventData>)
extern "C"  void LoadBalancingClient_remove_OnEventAction_m3222161952 (LoadBalancingClient_t3349497658 * __this, Action_1_t4223148500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::add_OnOpResponseAction(System.Action`1<ExitGames.Client.Photon.OperationResponse>)
extern "C"  void LoadBalancingClient_add_OnOpResponseAction_m3667068867 (LoadBalancingClient_t3349497658 * __this, Action_1_t3450336510 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::remove_OnOpResponseAction(System.Action`1<ExitGames.Client.Photon.OperationResponse>)
extern "C"  void LoadBalancingClient_remove_OnOpResponseAction_m694038552 (LoadBalancingClient_t3349497658 * __this, Action_1_t3450336510 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.DisconnectCause ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_DisconnectedCause()
extern "C"  int32_t LoadBalancingClient_get_DisconnectedCause_m214519206 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_DisconnectedCause(ExitGames.Client.Photon.LoadBalancing.DisconnectCause)
extern "C"  void LoadBalancingClient_set_DisconnectedCause_m2052439249 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.TypedLobby ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_CurrentLobby()
extern "C"  TypedLobby_t198890120 * LoadBalancingClient_get_CurrentLobby_m908846304 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_CurrentLobby(ExitGames.Client.Photon.LoadBalancing.TypedLobby)
extern "C"  void LoadBalancingClient_set_CurrentLobby_m1695889877 (LoadBalancingClient_t3349497658 * __this, TypedLobby_t198890120 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AutoJoinLobby()
extern "C"  bool LoadBalancingClient_get_AutoJoinLobby_m3634073492 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AutoJoinLobby(System.Boolean)
extern "C"  void LoadBalancingClient_set_AutoJoinLobby_m2898168751 (LoadBalancingClient_t3349497658 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_LobbyStatistics()
extern "C"  List_1_t1533082706 * LoadBalancingClient_get_LobbyStatistics_m1621798260 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_LobbyStatistics(System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo>)
extern "C"  void LoadBalancingClient_set_LobbyStatistics_m3126086525 (LoadBalancingClient_t3349497658 * __this, List_1_t1533082706 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_NickName()
extern "C"  String_t* LoadBalancingClient_get_NickName_m2478114624 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_NickName(System.String)
extern "C"  void LoadBalancingClient_set_NickName_m2776351597 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_UserId()
extern "C"  String_t* LoadBalancingClient_get_UserId_m461338606 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_UserId(System.String)
extern "C"  void LoadBalancingClient_set_UserId_m199832177 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_LocalPlayer()
extern "C"  Player_t1221981565 * LoadBalancingClient_get_LocalPlayer_m1015082754 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_LocalPlayer(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  void LoadBalancingClient_set_LocalPlayer_m738390133 (LoadBalancingClient_t3349497658 * __this, Player_t1221981565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_PlayersOnMasterCount()
extern "C"  int32_t LoadBalancingClient_get_PlayersOnMasterCount_m2103694447 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_PlayersOnMasterCount(System.Int32)
extern "C"  void LoadBalancingClient_set_PlayersOnMasterCount_m4234868270 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_PlayersInRoomsCount()
extern "C"  int32_t LoadBalancingClient_get_PlayersInRoomsCount_m3097842745 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_PlayersInRoomsCount(System.Int32)
extern "C"  void LoadBalancingClient_set_PlayersInRoomsCount_m2565845028 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_RoomsCount()
extern "C"  int32_t LoadBalancingClient_get_RoomsCount_m4215989114 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_RoomsCount(System.Int32)
extern "C"  void LoadBalancingClient_set_RoomsCount_m2127236381 (LoadBalancingClient_t3349497658 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_FriendList()
extern "C"  List_1_t469556838 * LoadBalancingClient_get_FriendList_m1950672201 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_FriendList(System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo>)
extern "C"  void LoadBalancingClient_set_FriendList_m3233593830 (LoadBalancingClient_t3349497658 * __this, List_1_t469556838 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_FriendListAge()
extern "C"  int32_t LoadBalancingClient_get_FriendListAge_m3560830686 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_IsAuthorizeSecretAvailable()
extern "C"  bool LoadBalancingClient_get_IsAuthorizeSecretAvailable_m152432421 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AvailableRegions()
extern "C"  StringU5BU5D_t1642385972* LoadBalancingClient_get_AvailableRegions_m3545743236 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AvailableRegions(System.String[])
extern "C"  void LoadBalancingClient_set_AvailableRegions_m2835835921 (LoadBalancingClient_t3349497658 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_AvailableRegionsServers()
extern "C"  StringU5BU5D_t1642385972* LoadBalancingClient_get_AvailableRegionsServers_m2151845022 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AvailableRegionsServers(System.String[])
extern "C"  void LoadBalancingClient_set_AvailableRegionsServers_m439418239 (LoadBalancingClient_t3349497658 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_CloudRegion()
extern "C"  String_t* LoadBalancingClient_get_CloudRegion_m643755779 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_CloudRegion(System.String)
extern "C"  void LoadBalancingClient_set_CloudRegion_m2265307844 (LoadBalancingClient_t3349497658 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::GetNameServerAddress()
extern "C"  String_t* LoadBalancingClient_GetNameServerAddress_m315917341 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::Connect(System.String,System.String,System.String,System.String,ExitGames.Client.Photon.LoadBalancing.AuthenticationValues)
extern "C"  bool LoadBalancingClient_Connect_m3312771951 (LoadBalancingClient_t3349497658 * __this, String_t* ___masterServerAddress0, String_t* ___appId1, String_t* ___appVersion2, String_t* ___nickName3, AuthenticationValues_t2603619994 * ___authValues4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::Connect()
extern "C"  bool LoadBalancingClient_Connect_m98201408 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ConnectToNameServer()
extern "C"  bool LoadBalancingClient_ConnectToNameServer_m3333257697 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ConnectToRegionMaster(System.String)
extern "C"  bool LoadBalancingClient_ConnectToRegionMaster_m2085430585 (LoadBalancingClient_t3349497658 * __this, String_t* ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::Disconnect()
extern "C"  void LoadBalancingClient_Disconnect_m751110560 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CallAuthenticate()
extern "C"  bool LoadBalancingClient_CallAuthenticate_m3793012401 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::Service()
extern "C"  void LoadBalancingClient_Service_m2174255551 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::DisconnectToReconnect()
extern "C"  void LoadBalancingClient_DisconnectToReconnect_m3671836512 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ConnectToGameServer()
extern "C"  bool LoadBalancingClient_ConnectToGameServer_m1889416628 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpGetRegions()
extern "C"  bool LoadBalancingClient_OpGetRegions_m3667813390 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpFindFriends(System.String[])
extern "C"  bool LoadBalancingClient_OpFindFriends_m1997395665 (LoadBalancingClient_t3349497658 * __this, StringU5BU5D_t1642385972* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinLobby(ExitGames.Client.Photon.LoadBalancing.TypedLobby)
extern "C"  bool LoadBalancingClient_OpJoinLobby_m1101478380 (LoadBalancingClient_t3349497658 * __this, TypedLobby_t198890120 * ___lobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpLeaveLobby()
extern "C"  bool LoadBalancingClient_OpLeaveLobby_m1772078794 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,System.String[])
extern "C"  bool LoadBalancingClient_OpJoinRandomRoom_m3155957684 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, StringU5BU5D_t1642385972* ___expectedUsers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.LoadBalancing.MatchmakingMode)
extern "C"  bool LoadBalancingClient_OpJoinRandomRoom_m2735584360 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, uint8_t ___matchmakingMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.LoadBalancing.MatchmakingMode,ExitGames.Client.Photon.LoadBalancing.TypedLobby,System.String,System.String[])
extern "C"  bool LoadBalancingClient_OpJoinRandomRoom_m1981907337 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, uint8_t ___matchmakingMode2, TypedLobby_t198890120 * ___lobby3, String_t* ___sqlLobbyFilter4, StringU5BU5D_t1642385972* ___expectedUsers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinRoom(System.String,System.String[])
extern "C"  bool LoadBalancingClient_OpJoinRoom_m2328039482 (LoadBalancingClient_t3349497658 * __this, String_t* ___roomName0, StringU5BU5D_t1642385972* ___expectedUsers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpReJoinRoom(System.String)
extern "C"  bool LoadBalancingClient_OpReJoinRoom_m939344369 (LoadBalancingClient_t3349497658 * __this, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinOrCreateRoom(System.String,ExitGames.Client.Photon.LoadBalancing.RoomOptions,ExitGames.Client.Photon.LoadBalancing.TypedLobby,System.String[])
extern "C"  bool LoadBalancingClient_OpJoinOrCreateRoom_m369835626 (LoadBalancingClient_t3349497658 * __this, String_t* ___roomName0, RoomOptions_t2801096405 * ___roomOptions1, TypedLobby_t198890120 * ___lobby2, StringU5BU5D_t1642385972* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpCreateRoom(System.String,ExitGames.Client.Photon.LoadBalancing.RoomOptions,ExitGames.Client.Photon.LoadBalancing.TypedLobby,System.String[])
extern "C"  bool LoadBalancingClient_OpCreateRoom_m2023221677 (LoadBalancingClient_t3349497658 * __this, String_t* ___roomName0, RoomOptions_t2801096405 * ___roomOptions1, TypedLobby_t198890120 * ___lobby2, StringU5BU5D_t1642385972* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpLeaveRoom()
extern "C"  bool LoadBalancingClient_OpLeaveRoom_m356333405 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadBalancingClient_OpLeaveRoom_m3355982094 (LoadBalancingClient_t3349497658 * __this, bool ___becomeInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingClient_OpSetCustomPropertiesOfActor_m2290089900 (LoadBalancingClient_t3349497658 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___propertiesToSet1, Hashtable_t995404622 * ___expectedProperties2, WebFlags_t1281188997 * ___webFlags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingClient_OpSetCustomPropertiesOfActor_m2610620929 (LoadBalancingClient_t3349497658 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___propertiesToSet1, Hashtable_t995404622 * ___expectedProperties2, bool ___webForward3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingClient_OpSetPropertiesOfActor_m1809980477 (LoadBalancingClient_t3349497658 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___actorProperties1, Hashtable_t995404622 * ___expectedProperties2, WebFlags_t1281188997 * ___webFlags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingClient_OpSetCustomPropertiesOfRoom_m2486277355 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedProperties1, WebFlags_t1281188997 * ___webFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingClient_OpSetCustomPropertiesOfRoom_m1848099330 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedProperties1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingClient_OpSetPropertiesOfRoom_m1609561756 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___gameProperties0, Hashtable_t995404622 * ___expectedProperties1, WebFlags_t1281188997 * ___webFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpRaiseEvent(System.Byte,System.Object,System.Boolean,ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions)
extern "C"  bool LoadBalancingClient_OpRaiseEvent_m4024027992 (LoadBalancingClient_t3349497658 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t2362123322 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadBalancingClient_OpChangeGroups_m2985496959 (LoadBalancingClient_t3349497658 * __this, ByteU5BU5D_t3397334013* ___groupsToRemove0, ByteU5BU5D_t3397334013* ___groupsToAdd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpWebRpc(System.String,System.Object,System.Boolean)
extern "C"  bool LoadBalancingClient_OpWebRpc_m3149550095 (LoadBalancingClient_t3349497658 * __this, String_t* ___uriPath0, Il2CppObject * ___parameters1, bool ___sendAuthCookie2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  void LoadBalancingClient_ReadoutProperties_m2853852316 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___gameProperties0, Hashtable_t995404622 * ___actorProperties1, int32_t ___targetActorNr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ReadoutPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  Hashtable_t995404622 * LoadBalancingClient_ReadoutPropertiesForActorNr_m2505021877 (LoadBalancingClient_t3349497658 * __this, Hashtable_t995404622 * ___actorProperties0, int32_t ___actorNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ChangeLocalID(System.Int32)
extern "C"  void LoadBalancingClient_ChangeLocalID_m2548360309 (LoadBalancingClient_t3349497658 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CleanCachedValues()
extern "C"  void LoadBalancingClient_CleanCachedValues_m619104627 (LoadBalancingClient_t3349497658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C"  void LoadBalancingClient_GameEnteredOnGameServer_m3385947001 (LoadBalancingClient_t3349497658 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::UpdatedActorList(System.Int32[])
extern "C"  void LoadBalancingClient_UpdatedActorList_m2572917381 (LoadBalancingClient_t3349497658 * __this, Int32U5BU5D_t3030399641* ___actorsInGame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CreatePlayer(System.String,System.Int32,System.Boolean,ExitGames.Client.Photon.Hashtable)
extern "C"  Player_t1221981565 * LoadBalancingClient_CreatePlayer_m2516147144 (LoadBalancingClient_t3349497658 * __this, String_t* ___actorName0, int32_t ___actorNumber1, bool ___isLocal2, Hashtable_t995404622 * ___actorProperties3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Room ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CreateRoom(System.String,ExitGames.Client.Photon.LoadBalancing.RoomOptions)
extern "C"  Room_t139205435 * LoadBalancingClient_CreateRoom_m669880844 (LoadBalancingClient_t3349497658 * __this, String_t* ___roomName0, RoomOptions_t2801096405 * ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::SetupEncryption(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void LoadBalancingClient_SetupEncryption_m2415645644 (LoadBalancingClient_t3349497658 * __this, Dictionary_2_t2064209302 * ___encryptionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void LoadBalancingClient_DebugReturn_m3768260942 (LoadBalancingClient_t3349497658 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void LoadBalancingClient_OnOperationResponse_m473943635 (LoadBalancingClient_t3349497658 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void LoadBalancingClient_OnStatusChanged_m930679678 (LoadBalancingClient_t3349497658 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void LoadBalancingClient_OnEvent_m3401638947 (LoadBalancingClient_t3349497658 * __this, EventData_t126381822 * ___photonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnMessage(System.Object)
extern "C"  void LoadBalancingClient_OnMessage_m233616428 (LoadBalancingClient_t3349497658 * __this, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::.cctor()
extern "C"  void LoadBalancingClient__cctor_m1507682205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
