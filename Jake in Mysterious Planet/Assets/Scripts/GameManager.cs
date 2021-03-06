﻿using UnityEngine;

public enum GameState {
	menu, inGame, gameOver
}


public class GameManager : MonoBehaviour {

	// when the game starts it has to be in the menu
	public GameState currentGameState;
	public static GameManager instance;
	public Canvas menuCanvas;
	public Canvas inGameCanvas;
	public Canvas gameOverCanvas;
	public int collectedCoins;

	void Awake() {
		currentGameState = GameState.menu;
		instance = this;
		// PlayerPrefs.DeleteAll();
	}
		

	void Start() {
		//StartGame();
		currentGameState = GameState.menu;
	}

	// Use this to start the game
	public void StartGame() {
		SetGameState(GameState.inGame);
		LevelGenerator.instance.GenerateInitialPieces();
		PlayerController.instance.StartGame();
	}

	// called when the player dies
	public void GameOver() {
		SetGameState(GameState.gameOver);
		GameOverView.instance.SetFinalScore();
	}

	// called when player wants to go back to main menu
	public void BackToMenu() {
		SetGameState(GameState.menu);
		LevelGenerator.instance.GenerateInitialPieces();
	}

	void SetGameState(GameState gameState) {
		if (gameState == GameState.menu) {
			menuCanvas.enabled = true;
			inGameCanvas.enabled = false;
			gameOverCanvas.enabled = false;
		} 
		else if (gameState == GameState.inGame) {
			menuCanvas.enabled = false;
			inGameCanvas.enabled = true;
			gameOverCanvas.enabled = false;
		} 
		else if (gameState == GameState.gameOver) {
			menuCanvas.enabled = false;
			inGameCanvas.enabled = false;
			gameOverCanvas.enabled = true;
		}

		currentGameState = gameState;
	}

	public void CollectedCoin() 
	{
		collectedCoins++;
	}
}
