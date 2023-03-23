using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDetection : MonoBehaviour
{
    float radius = 5.0f;
    float distance = 10.0f;
    bool isDetected;
    public void CheckProximity()
    {
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
