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

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer
struct LoadBalancingPeer_t3926656729;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// System.String
struct String_t;
// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct TypedLobby_t198890120;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct RoomOptions_t2801096405;
// ExitGames.Client.Photon.LoadBalancing.EnterRoomParams
struct EnterRoomParams_t2282951777;
// ExitGames.Client.Photon.LoadBalancing.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t163568281;
// System.String[]
struct StringU5BU5D_t1642385972;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;
// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues
struct AuthenticationValues_t2603619994;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions
struct RaiseEventOptions_t2362123322;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot198890120.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2801096405.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2282951777.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot163568281.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1281188997.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2603619994.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2216351142.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2362123322.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m2855790045 (LoadBalancingPeer_t3926656729 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m1077320908 (LoadBalancingPeer_t3926656729 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::ConfigUnitySockets()
extern "C"  void LoadBalancingPeer_ConfigUnitySockets_m1326963482 (LoadBalancingPeer_t3926656729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpGetRegions(System.String)
extern "C"  bool LoadBalancingPeer_OpGetRegions_m1586918685 (LoadBalancingPeer_t3926656729 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpJoinLobby(ExitGames.Client.Photon.LoadBalancing.TypedLobby)
extern "C"  bool LoadBalancingPeer_OpJoinLobby_m2752241147 (LoadBalancingPeer_t3926656729 * __this, TypedLobby_t198890120 * ___lobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpLeaveLobby()
extern "C"  bool LoadBalancingPeer_OpLeaveLobby_m285388795 (LoadBalancingPeer_t3926656729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.LoadBalancing.RoomOptions)
extern "C"  void LoadBalancingPeer_RoomOptionsToOpParameters_m1901030128 (LoadBalancingPeer_t3926656729 * __this, Dictionary_2_t2064209302 * ___op0, RoomOptions_t2801096405 * ___roomOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpCreateRoom(ExitGames.Client.Photon.LoadBalancing.EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpCreateRoom_m3582390489 (LoadBalancingPeer_t3926656729 * __this, EnterRoomParams_t2282951777 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadBalancing.EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRoom_m3603072959 (LoadBalancingPeer_t3926656729 * __this, EnterRoomParams_t2282951777 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadBalancing.OpJoinRandomRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRandomRoom_m336645036 (LoadBalancingPeer_t3926656729 * __this, OpJoinRandomRoomParams_t163568281 * ___opJoinRandomRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpLeaveRoom_m3885041969 (LoadBalancingPeer_t3926656729 * __this, bool ___becomeInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpFindFriends(System.String[])
extern "C"  bool LoadBalancingPeer_OpFindFriends_m1264112976 (LoadBalancingPeer_t3926656729 * __this, StringU5BU5D_t1642385972* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfActor_m304158590 (LoadBalancingPeer_t3926656729 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___actorProperties1, Hashtable_t995404622 * ___expectedProperties2, WebFlags_t1281188997 * ___webflags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfRoom_m112920303 (LoadBalancingPeer_t3926656729 * __this, Hashtable_t995404622 * ___gameProperties0, Hashtable_t995404622 * ___expectedProperties1, WebFlags_t1281188997 * ___webflags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpAuthenticate(System.String,System.String,ExitGames.Client.Photon.LoadBalancing.AuthenticationValues,System.String,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpAuthenticate_m2553038049 (LoadBalancingPeer_t3926656729 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t2603619994 * ___authValues2, String_t* ___regionCode3, bool ___getLobbyStatistics4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpAuthenticateOnce(System.String,System.String,ExitGames.Client.Photon.LoadBalancing.AuthenticationValues,System.String,ExitGames.Client.Photon.LoadBalancing.EncryptionMode,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  bool LoadBalancingPeer_OpAuthenticateOnce_m3769595592 (LoadBalancingPeer_t3926656729 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t2603619994 * ___authValues2, String_t* ___regionCode3, int32_t ___encryptionMode4, uint8_t ___expectedProtocol5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadBalancingPeer_OpChangeGroups_m1914208622 (LoadBalancingPeer_t3926656729 * __this, ByteU5BU5D_t3397334013* ___groupsToRemove0, ByteU5BU5D_t3397334013* ___groupsToAdd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions)
extern "C"  bool LoadBalancingPeer_OpRaiseEvent_m4266764265 (LoadBalancingPeer_t3926656729 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t2362123322 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::OpSettings(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSettings_m2294401616 (LoadBalancingPeer_t3926656729 * __this, bool ___receiveLobbyStats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
