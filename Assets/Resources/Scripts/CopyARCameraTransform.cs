using System.Collections;
using UnityEngine;

public class CopyARCameraTransform : Photon.MonoBehaviour {
	
	// Update is called once per frame
	void Update () {
		if (photonView.isMine) {
			transform.position = ARManager.Instance.ARhead.transform.position;
			transform.rotation = ARManager.Instance.ARhead.transform.rotation;
		}
	}
}
