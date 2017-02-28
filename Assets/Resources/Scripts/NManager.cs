using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NManager : Photon.MonoBehaviour {
	public GameObject headPrefab;
	public GameObject leftHandPrefab;
	public GameObject rightHandPrefab;

	public byte Version = 1;

	public virtual void Start()
	{
		//connect to Version 1 room
		PhotonNetwork.ConnectUsingSettings(1 + "." + SceneManagerHelper.ActiveSceneBuildIndex);

	}
	
	// below, we implement some callbacks of PUN
	// you can find PUN's callbacks in the class PunBehaviour or in enum PhotonNetworkingMessage


	public virtual void OnConnectedToMaster()
	{
		Debug.Log("OnConnectedToMaster() was called by PUN. Now this client is connected and could join a room. Calling: PhotonNetwork.JoinRandomRoom();");
		PhotonNetwork.JoinRandomRoom();
	}

	public virtual void OnJoinedLobby()
	{
		Debug.Log("OnJoinedLobby(). This client is connected and does get a room-list, which gets stored as PhotonNetwork.GetRoomList(). This script now calls: PhotonNetwork.JoinRandomRoom();");
		PhotonNetwork.JoinRandomRoom();
	}

	public virtual void OnPhotonRandomJoinFailed()
	{
		Debug.Log("OnPhotonRandomJoinFailed() was called by PUN. No random room available, so we create one. Calling: PhotonNetwork.CreateRoom(null, new RoomOptions() {maxPlayers = 4}, null);");
		PhotonNetwork.CreateRoom(null, new RoomOptions() { MaxPlayers = 4 }, null);
	}

	// the following methods are implemented to give you some context. re-implement them as needed.

	public virtual void OnFailedToConnectToPhoton(DisconnectCause cause)
	{
		Debug.LogError("Cause: " + cause);
	}

	public void OnJoinedRoom()
	{
		Debug.Log("OnJoinedRoom() called by PUN. Now this client is in a room. From here on, your game would be running. For reference, all callbacks are listed in enum: PhotonNetworkingMessage");
		//instantiate prefabs for head and hands across the network!
		//PhotonNetwork.Instantiate (headPrefab.name, VRManager.Instance.head.transform.position, VRManager.Instance.head.transform.rotation, 0);
		//PhotonNetwork.Instantiate (leftHandPrefab.name, VRManager.Instance.leftHand.transform.position, VRManager.Instance.leftHand.transform.rotation, 0);
		//PhotonNetwork.Instantiate (rightHandPrefab.name, VRManager.Instance.rightHand.transform.position, VRManager.Instance.rightHand.transform.rotation, 0);
	}
}
