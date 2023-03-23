using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CharMovement : MonoBehaviour
{
    Animator animator;
    NavMeshAgent agent;
    [SerializeField] List<Transform> navPoints;
    int currentNavpoint = 0;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
        
    }

    // Update is called once per frame
    void Update()
    {
        //MoveBehaviour();
    }

    public void InitMoveBehaviour()
    {
        agent.SetDestination(navPoints[currentNavpoint].position);
        agent.isStopped = false;
    }
    public void MoveBehaviour()
    {
        animator.SetFloat("Speed", agent.velocity.magnitude);
        if(agent.remainingDistance <= agent.stoppingDistance )
        {
            currentNavpoint++;
            if( currentNavpoint >= navPoints.Count)
                currentNavpoint = 0;
            agent.SetDestination(navPoints[currentNavpoint].position);
        }
    }
    public void StopMoveBehaviour()
    {
        agent.isStopped = true;
    }
}
