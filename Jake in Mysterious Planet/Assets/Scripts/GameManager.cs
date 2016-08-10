using UnityEngine;

public enum GameState {
	menu, inGame, gameOver
}


public class GameManager : MonoBehaviour {

	// when the game starts it has to be in the menu
	public GameState currentGameState;
	public static GameManager instance;

	void Awake() {
		currentGameState = GameState.menu;
		instance = this;
	}
		

	void Start() {
		//StartGame();
		currentGameState = GameState.menu;
	}

	void Update() {
		if (Input.GetButtonDown("s")) {
			StartGame();
		}
	}

	// Use this to start the game
	public void StartGame() {
		PlayerController.instance.StartGame();
		SetGameState(GameState.inGame);
	}

	// called when the player dies
	public void GameOver() {
		SetGameState(GameState.gameOver);
	}

	// called when player wants to go back to main menu
	public void BackToMenu() {
		SetGameState(GameState.menu);
	}

	void SetGameState(GameState gameState) {
		if (gameState == GameState.menu) {
			
		} 
		else if (gameState == GameState.inGame) {
			
		} 
		else if (gameState == GameState.gameOver) {
			
		}

		currentGameState = gameState;
	}
}
