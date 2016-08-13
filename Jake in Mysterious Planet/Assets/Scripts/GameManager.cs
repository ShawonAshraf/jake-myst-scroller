using UnityEngine;

public enum GameState
{
	menu, inGame, gameOver
}


public class GameManager : MonoBehaviour
{

	// when the game starts it has to be in the menu
	public GameState currentGameState;
	public static GameManager instance;
	public Canvas menuCanvas;
	public Canvas inGameCanvas;
	public Canvas gameOverCanvas;
	public int collectedCoins;

	void Awake()
    {
		currentGameState = GameState.menu;
		instance = this;
        collectedCoins = 0;
		//PlayerPrefs.DeleteAll();
	}
		

	void Start()
    {
		//StartGame();
		currentGameState = GameState.menu;
	}

	// Use this to start the game
	public void StartGame()
    {
		SetGameState(GameState.inGame);

        collectedCoins = 0;

        //LevelGenerator.instance.ResetLevel();
        //LevelGenerator.instance.GenerateInitialPieces();
        LevelGenerator.instance.ResetLevel();
        LevelGenerator.instance.GenerateInitialPieces();
		PlayerController.instance.StartGame();
	}

	// called when the player dies
	public void GameOver()
    {
		SetGameState(GameState.gameOver);
        //LevelGenerator.instance.ResetLevel();
        GameOverView.instance.SetFinalScore();
	}

	// called when player wants to go back to main menu
    // however this throws some who knows who error
    // so disabled
	//public void BackToMenu()
    //{
	//	SetGameState(GameState.menu);
	//	//LevelGenerator.instance.GenerateInitialPieces();
	//}

    public void QuitGame()
    {
        // quits the application
        Application.Quit();
    }

	void SetGameState(GameState gameState)
    {
		if (gameState == GameState.menu)
        {
			menuCanvas.enabled = true;
			inGameCanvas.enabled = false;
			gameOverCanvas.enabled = false;

            collectedCoins = 0;
		} 
		else if (gameState == GameState.inGame)
        {
			menuCanvas.enabled = false;
			inGameCanvas.enabled = true;
			gameOverCanvas.enabled = false;
		} 
		else if (gameState == GameState.gameOver)
        {
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
