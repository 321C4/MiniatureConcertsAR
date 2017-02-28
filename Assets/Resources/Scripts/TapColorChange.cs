using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

[RequireComponent(typeof(PhotonView))]
public class TapColorChange : Photon.MonoBehaviour {
	public Material Material1;
	public Material Material2;
	public Renderer rend;
	public static bool mat1;
	// Use this for initialization
	void Start () {
		rend = this.GetComponent<Renderer> ();
		rend.material = Material2;
	}

	void OnJoinedRoom(){
		photonView.RPC("MaterialOne", PhotonTargets.AllBuffered, null);
	}

	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 1) {
			Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(1).position);
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				if (rend.material = Material1) {
					photonView.RPC("MaterialTwo", PhotonTargets.AllBuffered, null);
					Debug.Log ("1 to 2 " + rend.material);
				} else{
					photonView.RPC("MaterialOne", PhotonTargets.AllBuffered, null);
					Debug.Log ("2 to 1 " + rend.material);
				}
			}
		}

		if (Input.GetMouseButtonDown(0)) {
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				if (mat1 = true) {
					this.photonView.RPC("MaterialTwo", PhotonTargets.AllBufferedViaServer);
				}
				if(mat1 = false){
					this.photonView.RPC("MaterialOne", PhotonTargets.AllBufferedViaServer);
				}
			}
		}
	}

	[PunRPC]
	public void MaterialOne()
	{
		rend.material = Material1;
		mat1 = true;
		Debug.Log (mat1);
	}

	[PunRPC]
	public void MaterialTwo()
	{
		rend.material = Material2;
		mat1 = false;
		Debug.Log (mat1);
	}
}
