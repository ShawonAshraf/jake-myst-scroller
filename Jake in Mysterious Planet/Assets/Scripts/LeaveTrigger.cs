using UnityEngine;
using System.Collections;

public class LeaveTrigger : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		LevelGenerator.instance.AddPiece();
		LevelGenerator.instance.RemoveOldestPiece();
	}
}
