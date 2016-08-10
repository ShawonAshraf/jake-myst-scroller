using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ViewInGame : MonoBehaviour {
	public Text coinLabel;
	public Text scoreLabel;

	void Update() 
	{
		if(GameManager.instance.currentGameState == GameState.inGame)
		{
			coinLabel.text = GameManager.instance.collectedCoins.ToString();
			scoreLabel.text = PlayerController.instance.GetDistance().ToString("f0");
		}
	}
}
