using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : MonoBehaviour
{
    [SerializeField] Camera cam;
    private NavMeshAgent agent;
    private Animator anim;

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
                isWalking = true;
            }
        }
        else
        {
            // Player has arrived, set animation speed to idle
            if (isWalking)
            {
                anim.SetFloat("Speed", animIdleSpeed);
                isWalking = false;
            }
        }
    }
}
