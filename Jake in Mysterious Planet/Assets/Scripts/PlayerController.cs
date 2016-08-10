using UnityEngine;

public class PlayerController : MonoBehaviour {

	public static PlayerController instance;

  	public float jumpForce = 6f;
  	public float runningSpeed = 1.5f;
	public LayerMask groundLayer;
	public Animator animator;

	private Rigidbody2D rBody;
	private Vector3 startingPosition;

	// Use this for initialization
    void Awake()
    {
		instance = this;
        rBody = GetComponent<Rigidbody2D>();
		startingPosition = this.transform.position;
    }

	public void StartGame () {
        animator.SetBool("isAlive", true);
		this.transform.position = startingPosition;
	}

	// Update is called once per frame
	void Update () {
		if (GameManager.instance.currentGameState == GameState.inGame) {
			if (Input.GetMouseButtonDown (0) || Input.GetKeyDown (KeyCode.Space)) {
				Jump ();
			}
			animator.SetBool ("isGrounded", IsGrounded ());
		}
	}

    void Jump()
    {
        if (IsGrounded())
        {
            rBody.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
        }
    }


    bool IsGrounded()
    {
        if(Physics2D.Raycast(this.transform.position, Vector2.down, 0.2f, groundLayer.value))
        {
            return true;
        }
        else { return false; }
    }

	void FixedUpdate() {
		if (GameManager.instance.currentGameState == GameState.inGame) {
			if (rBody.velocity.x < runningSpeed) {
				rBody.velocity = new Vector2 (runningSpeed, rBody.velocity.y);
			}
		}
	}


	public void Kill() {
		GameManager.instance.GameOver();
		animator.SetBool("isAlive", false);
	}
}
