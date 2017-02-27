using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

public class ARcameraAvatar : Photon.MonoBehaviour {
	public GameObject ARCam;
	Vector3 ARcamTrans;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		photonView.RPC("FollowCam", PhotonTargets.AllBuffered, null);
	}

	[PunRPC]
	void FollowCam(){
		ARcamTrans = ARCam.transform.position;
		this.transform.position = ARcamTrans;
	}
}
