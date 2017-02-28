using System.Collections;
using UnityEngine;

public class EnableVoice : Photon.MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (photonView.isMine) {
			GetComponent<PhotonVoiceRecorder> ().enabled = true;
		}
	}
}
