using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARManager : Photon.MonoBehaviour {
	public GameObject ARhead;

	//useful Singleton. Read up on how these work! :)
	public static ARManager Instance;

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
