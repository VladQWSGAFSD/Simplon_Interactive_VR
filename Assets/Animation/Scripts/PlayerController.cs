using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : MonoBehaviour
{
    [SerializeField] Camera cam;
    private NavMeshAgent agent;
    private Animator anim;


    [SerializeField] float animRunSpeed = 0.6f;
    [SerializeField] float animWalkSpeed = 0.5f;
    [SerializeField] float animIdleSpeed = 0.1f;


    private bool isWalking = false;

    private void Start()
    {
        anim = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
        anim.SetFloat("Speed", animIdleSpeed);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
                agent.SetDestination(hit.point);
        }

        if (agent.velocity.magnitude > 0f)
        {
            // Player is still moving, set animation speed to walking speed
            if (!isWalking)
            {
                anim.SetFloat("Speed", animWalkSpeed);
                Debug.Log("Switched to walking animation");
                isWalking = true;
            }
        }
        else
        {
            // Player has arrived, set animation speed to idle
            if (isWalking)
            {
                if (agent.remainingDistance <= agent.stoppingDistance)
                {
                    anim.SetFloat("Speed", animIdleSpeed);
                    Debug.Log("Switched to idle animation");
                    isWalking = false;
                }
            }
        }

    }

}
