using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOverView : MonoBehaviour {

	public static GameOverView instance;
	public Text finalScoreLabel;
	public Text collectedCoinsLabel;

	void Awake()
	{
		instance = this;
	}

	public void SetFinalScore() 
	{
		finalScoreLabel.text = PlayerController.instance.GetDistance().ToString("f0");
		collectedCoinsLabel.text = GameManager.instance.collectedCoins.ToString();
	}
}
