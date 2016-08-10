using UnityEngine;
using System.Collections.Generic;

public class LevelGenerator : MonoBehaviour {

	public static LevelGenerator instance;

	// this list stores all the levelPrefabs. Pieces will be generated from this
	// list while the game runs. Procedural generation
	public List<LevelPiece> levelPrefabs = new List<LevelPiece>();

	// starting point for a piece
	public Transform levelStartPoint;

	// generated pieces
	public List<LevelPiece> pieces = new List<LevelPiece>();

	void Awake()
	{
		instance = this;
	}

	void Update() 
	{

	}

	void Start() 
	{
		if(pieces.Count != 0) 
		{
			pieces.Clear();
		}
		GenerateInitialPieces();
	}



	public void AddPiece() 
	{
		int randomIndex = Random.Range(0, levelPrefabs.Count);

		// a temporary levelPiece that will get generated from levelPrefabs
		LevelPiece tempPiece = (LevelPiece)Instantiate(levelPrefabs[randomIndex]);
		tempPiece.transform.SetParent(this.transform, false);

		Vector3 spawnPosition = Vector3.zero;

		if(pieces.Count == 0) 
		{
			spawnPosition = levelStartPoint.position;
		}
		else 
		{
			spawnPosition = pieces[pieces.Count - 1].exitPoint.position;
		}

		tempPiece.transform.position = spawnPosition;
		pieces.Add(tempPiece);
	}

	
	public void RemoveOldestPiece() 
	{
		LevelPiece oldestPiece = pieces[0];
		pieces.Remove(oldestPiece);

		Destroy(oldestPiece.gameObject);
	}

	public void GenerateInitialPieces() 
	{
		for(int i = 0; i < 2; i++) 
		{
			AddPiece();
		}
	}


}
