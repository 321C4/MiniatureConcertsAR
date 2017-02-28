using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRManager : Photon.MonoBehaviour {
	public GameObject head;
	public GameObject leftHand;
	public GameObject rightHand;

	//useful Singleton. Read up on how these work! :)
	public static VRManager Instance;

	void Awake(){
		if (Instance == null) {
			Instance = this;
		}
	}

	void OnDestroy(){
		if (Instance == this) {
			Instance = null;
		}
	}
}
