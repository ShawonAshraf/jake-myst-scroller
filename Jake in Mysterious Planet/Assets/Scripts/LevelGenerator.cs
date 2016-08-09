using UnityEngine;
using System.Collections.Generic;

public class LevelGenerator : MonoBehaviour {

	public static LevelGenerator instance;
	public List<LevelPiece> levelPrefabs = new List<LevelPiece>();
	public Transform levelStartPoint;
	public List<LevelPiece> pieces = new List<LevelPiece>();

	void Awake()
	{
		instance = this;
	}


}
