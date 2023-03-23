using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.InputSystem;
[RequireComponent(typeof(CharMovement))]
public class AIBehaviour : MonoBehaviour
{
    enum AIState
    {
        None,
        Idle,
        Patrol,
        Talk
    }
    [SerializeField] AIState state;
    [SerializeField] AIState nextState;
    CharMovement movement;

    bool isDetected;

    // Start is called before the first frame update
    void Start()
    {
        movement = GetComponent<CharMovement>();
        
    }

    // Update is called once per frame
    void Update()
    {
        CheckProximity();
        Behaviour();

        if (ConditionForTransition())
        {
            Transition();
        }
    }

    private void Behaviour()
    {
        switch (state)
        {
            case AIState.None:
                break;
            case AIState.Idle:
                break;
            case AIState.Patrol:
                movement.MoveBehaviour();
                break;
            case AIState.Talk:
                break;
        }
    }
    //conditions that when a player enter a radius AI reacts
    private bool ConditionForTransition()
    {
        Keyboard keyboard = Keyboard.current;
        switch (state)
        {
            case AIState.None:
                break;
            case AIState.Idle:
                break;
            case AIState.Patrol:
                //if it enters sphere cast then talk
                if (isDetected)
                {
                    nextState = AIState.Talk;
                    return true;
                }
                break;
                //exit sphere back to patrol
            case AIState.Talk:
                if(!isDetected)
                {
                    nextState = AIState.Patrol;
                    return true;
                }
                break;
        }
        return false;
    }
    private void Transition() 
    {
        EndState();
        state = nextState;
        StartState();
    }

    private void EndState()
    {
        switch (state)
        {
            case AIState.None:
                break;
            case AIState.Idle:
                break;
            case AIState.Patrol:
                movement.StopMoveBehaviour();
                break;
            case AIState.Talk:
                GetComponent<Animator>().SetBool("Talk", false);
                break;
        }
    }
    private void StartState()
    {
        switch (state)
        {
            case AIState.None:
                break;
            case AIState.Idle:
                break;
            case AIState.Patrol:
                movement.InitMoveBehaviour();
                break;
            case AIState.Talk:
                GetComponent<Animator>().SetBool("Talk", true);
                break;
        }
    }

    void CheckProximity()
    {
        float radius = 5.0f; 
        float distance = 10.0f; 
        LayerMask layerMask = LayerMask.GetMask("Player");

        RaycastHit hit;

        if (Physics.SphereCast(transform.position, radius, transform.forward, out hit, distance, layerMask))
        {
            isDetected = true;
        }
        else
            isDetected = false;
      //  Debug.DrawSphere(transform.position + transform.forward * distance, radius, Color.red);
    }

}
