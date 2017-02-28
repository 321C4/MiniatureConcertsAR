#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer
struct LoadBalancingPeer_t3926656729;
// System.String
struct String_t;
// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues
struct AuthenticationValues_t2603619994;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t2531697585;
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
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.LoadBalancing.RoomInfo>
struct Dictionary_2_t333021345;
// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t139205435;
// ExitGames.Client.Photon.LoadBalancing.Player
struct Player_t1221981565;
// ExitGames.Client.Photon.LoadBalancing.EnterRoomParams
struct EnterRoomParams_t2282951777;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo>
struct List_1_t469556838;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1188543774.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2216351142.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2408587787.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4010383124.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3488621195.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo51252616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct  LoadBalancingClient_t3349497658  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::loadBalancingPeer
	LoadBalancingPeer_t3926656729 * ___loadBalancingPeer_0;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t2603619994 * ___U3CAuthValuesU3Ek__BackingField_3;
	// ExitGames.Client.Photon.LoadBalancing.AuthModeOption ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// ExitGames.Client.Photon.LoadBalancing.EncryptionMode ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ExpectedProtocol
	uint8_t ___ExpectedProtocol_6;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_7;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_8;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_9;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_11;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_12;
	// ExitGames.Client.Photon.LoadBalancing.ServerConnection ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_13;
	// ExitGames.Client.Photon.LoadBalancing.ClientState ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::state
	int32_t ___state_14;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnStateChangeAction
	Action_1_t3812182506 * ___OnStateChangeAction_15;
	// System.Action`1<ExitGames.Client.Photon.EventData> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnEventAction
	Action_1_t4223148500 * ___OnEventAction_16;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnOpResponseAction
	Action_1_t3450336510 * ___OnOpResponseAction_17;
	// ExitGames.Client.Photon.LoadBalancing.DisconnectCause ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_18;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::inLobby
	bool ___inLobby_19;
	// ExitGames.Client.Photon.LoadBalancing.TypedLobby ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t198890120 * ___U3CCurrentLobbyU3Ek__BackingField_20;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::autoJoinLobby
	bool ___autoJoinLobby_21;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_22;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::lobbyStatistics
	List_1_t1533082706 * ___lobbyStatistics_23;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.LoadBalancing.RoomInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::RoomInfoList
	Dictionary_2_t333021345 * ___RoomInfoList_24;
	// ExitGames.Client.Photon.LoadBalancing.Room ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CurrentRoom
	Room_t139205435 * ___CurrentRoom_25;
	// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::localPlayer
	Player_t1221981565 * ___localPlayer_26;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_27;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_28;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_29;
	// ExitGames.Client.Photon.LoadBalancing.JoinType ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_30;
	// ExitGames.Client.Photon.LoadBalancing.EnterRoomParams ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t2282951777 * ___enterRoomParamsCache_31;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::didAuthenticate
	bool ___didAuthenticate_32;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<FriendList>k__BackingField
	List_1_t469556838 * ___U3CFriendListU3Ek__BackingField_33;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::friendListRequested
	StringU5BU5D_t1642385972* ___friendListRequested_34;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::friendListTimestamp
	int32_t ___friendListTimestamp_35;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::isFetchingFriendList
	bool ___isFetchingFriendList_36;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AvailableRegions>k__BackingField
	StringU5BU5D_t1642385972* ___U3CAvailableRegionsU3Ek__BackingField_37;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AvailableRegionsServers>k__BackingField
	StringU5BU5D_t1642385972* ___U3CAvailableRegionsServersU3Ek__BackingField_38;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_39;
	// System.Byte[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::encryptionSecret
	ByteU5BU5D_t3397334013* ___encryptionSecret_40;

public:
	inline static int32_t get_offset_of_loadBalancingPeer_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___loadBalancingPeer_0)); }
	inline LoadBalancingPeer_t3926656729 * get_loadBalancingPeer_0() const { return ___loadBalancingPeer_0; }
	inline LoadBalancingPeer_t3926656729 ** get_address_of_loadBalancingPeer_0() { return &___loadBalancingPeer_0; }
	inline void set_loadBalancingPeer_0(LoadBalancingPeer_t3926656729 * value)
	{
		___loadBalancingPeer_0 = value;
		Il2CppCodeGenWriteBarrier(&___loadBalancingPeer_0, value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppVersionU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppIdU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t2603619994 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t2603619994 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t2603619994 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAuthValuesU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_ExpectedProtocol_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___ExpectedProtocol_6)); }
	inline uint8_t get_ExpectedProtocol_6() const { return ___ExpectedProtocol_6; }
	inline uint8_t* get_address_of_ExpectedProtocol_6() { return &___ExpectedProtocol_6; }
	inline void set_ExpectedProtocol_6(uint8_t value)
	{
		___ExpectedProtocol_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CIsUsingNameServerU3Ek__BackingField_7)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_7() const { return ___U3CIsUsingNameServerU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_7() { return &___U3CIsUsingNameServerU3Ek__BackingField_7; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_7(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___NameServerHost_8)); }
	inline String_t* get_NameServerHost_8() const { return ___NameServerHost_8; }
	inline String_t** get_address_of_NameServerHost_8() { return &___NameServerHost_8; }
	inline void set_NameServerHost_8(String_t* value)
	{
		___NameServerHost_8 = value;
		Il2CppCodeGenWriteBarrier(&___NameServerHost_8, value);
	}

	inline static int32_t get_offset_of_NameServerHttp_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___NameServerHttp_9)); }
	inline String_t* get_NameServerHttp_9() const { return ___NameServerHttp_9; }
	inline String_t** get_address_of_NameServerHttp_9() { return &___NameServerHttp_9; }
	inline void set_NameServerHttp_9(String_t* value)
	{
		___NameServerHttp_9 = value;
		Il2CppCodeGenWriteBarrier(&___NameServerHttp_9, value);
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CMasterServerAddressU3Ek__BackingField_11)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_11() const { return ___U3CMasterServerAddressU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_11() { return &___U3CMasterServerAddressU3Ek__BackingField_11; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_11(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMasterServerAddressU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CGameServerAddressU3Ek__BackingField_12)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_12() const { return ___U3CGameServerAddressU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_12() { return &___U3CGameServerAddressU3Ek__BackingField_12; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_12(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameServerAddressU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CServerU3Ek__BackingField_13)); }
	inline int32_t get_U3CServerU3Ek__BackingField_13() const { return ___U3CServerU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_13() { return &___U3CServerU3Ek__BackingField_13; }
	inline void set_U3CServerU3Ek__BackingField_13(int32_t value)
	{
		___U3CServerU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_state_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___state_14)); }
	inline int32_t get_state_14() const { return ___state_14; }
	inline int32_t* get_address_of_state_14() { return &___state_14; }
	inline void set_state_14(int32_t value)
	{
		___state_14 = value;
	}

	inline static int32_t get_offset_of_OnStateChangeAction_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___OnStateChangeAction_15)); }
	inline Action_1_t3812182506 * get_OnStateChangeAction_15() const { return ___OnStateChangeAction_15; }
	inline Action_1_t3812182506 ** get_address_of_OnStateChangeAction_15() { return &___OnStateChangeAction_15; }
	inline void set_OnStateChangeAction_15(Action_1_t3812182506 * value)
	{
		___OnStateChangeAction_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnStateChangeAction_15, value);
	}

	inline static int32_t get_offset_of_OnEventAction_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___OnEventAction_16)); }
	inline Action_1_t4223148500 * get_OnEventAction_16() const { return ___OnEventAction_16; }
	inline Action_1_t4223148500 ** get_address_of_OnEventAction_16() { return &___OnEventAction_16; }
	inline void set_OnEventAction_16(Action_1_t4223148500 * value)
	{
		___OnEventAction_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnEventAction_16, value);
	}

	inline static int32_t get_offset_of_OnOpResponseAction_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___OnOpResponseAction_17)); }
	inline Action_1_t3450336510 * get_OnOpResponseAction_17() const { return ___OnOpResponseAction_17; }
	inline Action_1_t3450336510 ** get_address_of_OnOpResponseAction_17() { return &___OnOpResponseAction_17; }
	inline void set_OnOpResponseAction_17(Action_1_t3450336510 * value)
	{
		___OnOpResponseAction_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnOpResponseAction_17, value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CDisconnectedCauseU3Ek__BackingField_18)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_18() const { return ___U3CDisconnectedCauseU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_18() { return &___U3CDisconnectedCauseU3Ek__BackingField_18; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_18(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_inLobby_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___inLobby_19)); }
	inline bool get_inLobby_19() const { return ___inLobby_19; }
	inline bool* get_address_of_inLobby_19() { return &___inLobby_19; }
	inline void set_inLobby_19(bool value)
	{
		___inLobby_19 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CCurrentLobbyU3Ek__BackingField_20)); }
	inline TypedLobby_t198890120 * get_U3CCurrentLobbyU3Ek__BackingField_20() const { return ___U3CCurrentLobbyU3Ek__BackingField_20; }
	inline TypedLobby_t198890120 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_20() { return &___U3CCurrentLobbyU3Ek__BackingField_20; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_20(TypedLobby_t198890120 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentLobbyU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_autoJoinLobby_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___autoJoinLobby_21)); }
	inline bool get_autoJoinLobby_21() const { return ___autoJoinLobby_21; }
	inline bool* get_address_of_autoJoinLobby_21() { return &___autoJoinLobby_21; }
	inline void set_autoJoinLobby_21(bool value)
	{
		___autoJoinLobby_21 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___EnableLobbyStatistics_22)); }
	inline bool get_EnableLobbyStatistics_22() const { return ___EnableLobbyStatistics_22; }
	inline bool* get_address_of_EnableLobbyStatistics_22() { return &___EnableLobbyStatistics_22; }
	inline void set_EnableLobbyStatistics_22(bool value)
	{
		___EnableLobbyStatistics_22 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___lobbyStatistics_23)); }
	inline List_1_t1533082706 * get_lobbyStatistics_23() const { return ___lobbyStatistics_23; }
	inline List_1_t1533082706 ** get_address_of_lobbyStatistics_23() { return &___lobbyStatistics_23; }
	inline void set_lobbyStatistics_23(List_1_t1533082706 * value)
	{
		___lobbyStatistics_23 = value;
		Il2CppCodeGenWriteBarrier(&___lobbyStatistics_23, value);
	}

	inline static int32_t get_offset_of_RoomInfoList_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___RoomInfoList_24)); }
	inline Dictionary_2_t333021345 * get_RoomInfoList_24() const { return ___RoomInfoList_24; }
	inline Dictionary_2_t333021345 ** get_address_of_RoomInfoList_24() { return &___RoomInfoList_24; }
	inline void set_RoomInfoList_24(Dictionary_2_t333021345 * value)
	{
		___RoomInfoList_24 = value;
		Il2CppCodeGenWriteBarrier(&___RoomInfoList_24, value);
	}

	inline static int32_t get_offset_of_CurrentRoom_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___CurrentRoom_25)); }
	inline Room_t139205435 * get_CurrentRoom_25() const { return ___CurrentRoom_25; }
	inline Room_t139205435 ** get_address_of_CurrentRoom_25() { return &___CurrentRoom_25; }
	inline void set_CurrentRoom_25(Room_t139205435 * value)
	{
		___CurrentRoom_25 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentRoom_25, value);
	}

	inline static int32_t get_offset_of_localPlayer_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___localPlayer_26)); }
	inline Player_t1221981565 * get_localPlayer_26() const { return ___localPlayer_26; }
	inline Player_t1221981565 ** get_address_of_localPlayer_26() { return &___localPlayer_26; }
	inline void set_localPlayer_26(Player_t1221981565 * value)
	{
		___localPlayer_26 = value;
		Il2CppCodeGenWriteBarrier(&___localPlayer_26, value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CPlayersOnMasterCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_27() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_27() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_27; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CPlayersInRoomsCountU3Ek__BackingField_28)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_28() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_28() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_28; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_28(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CRoomsCountU3Ek__BackingField_29)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_29() const { return ___U3CRoomsCountU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_29() { return &___U3CRoomsCountU3Ek__BackingField_29; }
	inline void set_U3CRoomsCountU3Ek__BackingField_29(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___lastJoinType_30)); }
	inline int32_t get_lastJoinType_30() const { return ___lastJoinType_30; }
	inline int32_t* get_address_of_lastJoinType_30() { return &___lastJoinType_30; }
	inline void set_lastJoinType_30(int32_t value)
	{
		___lastJoinType_30 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___enterRoomParamsCache_31)); }
	inline EnterRoomParams_t2282951777 * get_enterRoomParamsCache_31() const { return ___enterRoomParamsCache_31; }
	inline EnterRoomParams_t2282951777 ** get_address_of_enterRoomParamsCache_31() { return &___enterRoomParamsCache_31; }
	inline void set_enterRoomParamsCache_31(EnterRoomParams_t2282951777 * value)
	{
		___enterRoomParamsCache_31 = value;
		Il2CppCodeGenWriteBarrier(&___enterRoomParamsCache_31, value);
	}

	inline static int32_t get_offset_of_didAuthenticate_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___didAuthenticate_32)); }
	inline bool get_didAuthenticate_32() const { return ___didAuthenticate_32; }
	inline bool* get_address_of_didAuthenticate_32() { return &___didAuthenticate_32; }
	inline void set_didAuthenticate_32(bool value)
	{
		___didAuthenticate_32 = value;
	}

	inline static int32_t get_offset_of_U3CFriendListU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CFriendListU3Ek__BackingField_33)); }
	inline List_1_t469556838 * get_U3CFriendListU3Ek__BackingField_33() const { return ___U3CFriendListU3Ek__BackingField_33; }
	inline List_1_t469556838 ** get_address_of_U3CFriendListU3Ek__BackingField_33() { return &___U3CFriendListU3Ek__BackingField_33; }
	inline void set_U3CFriendListU3Ek__BackingField_33(List_1_t469556838 * value)
	{
		___U3CFriendListU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFriendListU3Ek__BackingField_33, value);
	}

	inline static int32_t get_offset_of_friendListRequested_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___friendListRequested_34)); }
	inline StringU5BU5D_t1642385972* get_friendListRequested_34() const { return ___friendListRequested_34; }
	inline StringU5BU5D_t1642385972** get_address_of_friendListRequested_34() { return &___friendListRequested_34; }
	inline void set_friendListRequested_34(StringU5BU5D_t1642385972* value)
	{
		___friendListRequested_34 = value;
		Il2CppCodeGenWriteBarrier(&___friendListRequested_34, value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___friendListTimestamp_35)); }
	inline int32_t get_friendListTimestamp_35() const { return ___friendListTimestamp_35; }
	inline int32_t* get_address_of_friendListTimestamp_35() { return &___friendListTimestamp_35; }
	inline void set_friendListTimestamp_35(int32_t value)
	{
		___friendListTimestamp_35 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___isFetchingFriendList_36)); }
	inline bool get_isFetchingFriendList_36() const { return ___isFetchingFriendList_36; }
	inline bool* get_address_of_isFetchingFriendList_36() { return &___isFetchingFriendList_36; }
	inline void set_isFetchingFriendList_36(bool value)
	{
		___isFetchingFriendList_36 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CAvailableRegionsU3Ek__BackingField_37)); }
	inline StringU5BU5D_t1642385972* get_U3CAvailableRegionsU3Ek__BackingField_37() const { return ___U3CAvailableRegionsU3Ek__BackingField_37; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CAvailableRegionsU3Ek__BackingField_37() { return &___U3CAvailableRegionsU3Ek__BackingField_37; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_37(StringU5BU5D_t1642385972* value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvailableRegionsU3Ek__BackingField_37, value);
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsServersU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CAvailableRegionsServersU3Ek__BackingField_38)); }
	inline StringU5BU5D_t1642385972* get_U3CAvailableRegionsServersU3Ek__BackingField_38() const { return ___U3CAvailableRegionsServersU3Ek__BackingField_38; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CAvailableRegionsServersU3Ek__BackingField_38() { return &___U3CAvailableRegionsServersU3Ek__BackingField_38; }
	inline void set_U3CAvailableRegionsServersU3Ek__BackingField_38(StringU5BU5D_t1642385972* value)
	{
		___U3CAvailableRegionsServersU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvailableRegionsServersU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___U3CCloudRegionU3Ek__BackingField_39)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_39() const { return ___U3CCloudRegionU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_39() { return &___U3CCloudRegionU3Ek__BackingField_39; }
	inline void set_U3CCloudRegionU3Ek__BackingField_39(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCloudRegionU3Ek__BackingField_39, value);
	}

	inline static int32_t get_offset_of_encryptionSecret_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658, ___encryptionSecret_40)); }
	inline ByteU5BU5D_t3397334013* get_encryptionSecret_40() const { return ___encryptionSecret_40; }
	inline ByteU5BU5D_t3397334013** get_address_of_encryptionSecret_40() { return &___encryptionSecret_40; }
	inline void set_encryptionSecret_40(ByteU5BU5D_t3397334013* value)
	{
		___encryptionSecret_40 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionSecret_40, value);
	}
};

struct LoadBalancingClient_t3349497658_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t2531697585 * ___ProtocolToNameServerPort_10;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3349497658_StaticFields, ___ProtocolToNameServerPort_10)); }
	inline Dictionary_2_t2531697585 * get_ProtocolToNameServerPort_10() const { return ___ProtocolToNameServerPort_10; }
	inline Dictionary_2_t2531697585 ** get_address_of_ProtocolToNameServerPort_10() { return &___ProtocolToNameServerPort_10; }
	inline void set_ProtocolToNameServerPort_10(Dictionary_2_t2531697585 * value)
	{
		___ProtocolToNameServerPort_10 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
