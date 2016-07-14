using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
    public float jumpForce = 25f;
    private Rigidbody2D rBody;
    public LayerMask groundLayer;
    public Animator animator;

	// Use this for initialization
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
    }

	void Start () {
        animator.SetBool("isAlive", true);
	}
	
	// Update is called once per frame
	void Update () {
	    if(Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space)) 
        {
            Jump();
        }
        animator.SetBool("isGrounded", IsGrounded());
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
}
