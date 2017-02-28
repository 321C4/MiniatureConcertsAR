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

// ExitGames.Client.Photon.LoadBalancing.Player
struct Player_t1221981565;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t139205435;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot139205435.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1221981565.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1281188997.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.Player::.ctor(System.String,System.Int32,System.Boolean)
extern "C"  void Player__ctor_m2320799969 (Player_t1221981565 * __this, String_t* ___nickName0, int32_t ___actorID1, bool ___isLocal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::.ctor(System.String,System.Int32,System.Boolean,ExitGames.Client.Photon.Hashtable)
extern "C"  void Player__ctor_m2751459869 (Player_t1221981565 * __this, String_t* ___nickName0, int32_t ___actorID1, bool ___isLocal2, Hashtable_t995404622 * ___playerProperties3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Room ExitGames.Client.Photon.LoadBalancing.Player::get_RoomReference()
extern "C"  Room_t139205435 * Player_get_RoomReference_m2482745319 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::set_RoomReference(ExitGames.Client.Photon.LoadBalancing.Room)
extern "C"  void Player_set_RoomReference_m2234022580 (Player_t1221981565 * __this, Room_t139205435 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.Player::get_ID()
extern "C"  int32_t Player_get_ID_m3084796555 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.Player::get_NickName()
extern "C"  String_t* Player_get_NickName_m1924324257 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::set_NickName(System.String)
extern "C"  void Player_set_NickName_m3423633926 (Player_t1221981565 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Player::get_IsMasterClient()
extern "C"  bool Player_get_IsMasterClient_m246710719 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Player::get_IsInactive()
extern "C"  bool Player_get_IsInactive_m3756940217 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::set_IsInactive(System.Boolean)
extern "C"  void Player_set_IsInactive_m3704358756 (Player_t1221981565 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.Player::get_CustomProperties()
extern "C"  Hashtable_t995404622 * Player_get_CustomProperties_m1074132565 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::set_CustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void Player_set_CustomProperties_m178490070 (Player_t1221981565 * __this, Hashtable_t995404622 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.Player::get_AllProperties()
extern "C"  Hashtable_t995404622 * Player_get_AllProperties_m4178109863 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Player::Get(System.Int32)
extern "C"  Player_t1221981565 * Player_Get_m3241702177 (Player_t1221981565 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Player::GetNext()
extern "C"  Player_t1221981565 * Player_GetNext_m680600911 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Player::GetNextFor(ExitGames.Client.Photon.LoadBalancing.Player)
extern "C"  Player_t1221981565 * Player_GetNextFor_m4255433230 (Player_t1221981565 * __this, Player_t1221981565 * ___currentPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.Player::GetNextFor(System.Int32)
extern "C"  Player_t1221981565 * Player_GetNextFor_m3528232841 (Player_t1221981565 * __this, int32_t ___currentPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::CacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void Player_CacheProperties_m2768955730 (Player_t1221981565 * __this, Hashtable_t995404622 * ___properties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.Player::ToString()
extern "C"  String_t* Player_ToString_m3182855336 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.Player::Equals(System.Object)
extern "C"  bool Player_Equals_m1220857498 (Player_t1221981565 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.LoadBalancing.Player::GetHashCode()
extern "C"  int32_t Player_GetHashCode_m2281427354 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::ChangeLocalID(System.Int32)
extern "C"  void Player_ChangeLocalID_m4048325346 (Player_t1221981565 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.LoadBalancing.WebFlags)
extern "C"  void Player_SetCustomProperties_m1523470229 (Player_t1221981565 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedProperties1, WebFlags_t1281188997 * ___webFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.Player::SetPlayerNameProperty()
extern "C"  void Player_SetPlayerNameProperty_m2175269686 (Player_t1221981565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
