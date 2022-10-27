#pragma once

//------------------------------------------------------------------------
//
//  Name: AgentPoursuiveur.h
//
//  Desc: Class representing the following agent which can follow the leader (or protect it).
//
//  Author: Kenzo Carneiro & Emile Veillette
//
//------------------------------------------------------------------------

#include "Vehicle.h"
#include "ParamLoader.h"
#include "SteeringBehaviors.h"

using namespace std;

class AgentPoursuiveur : public Vehicle
{
public:

    // Constructor of the following agent.
    AgentPoursuiveur(GameWorld* world,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale,
        Vehicle* nextVehicle,
        Vector2D offset,
        int color);

    // Free the following agent.
    void Free();

    // Switch back to protecting the leader.
    void FollowVehicle(Vehicle* nextVehicle);

    // Switch back to following the leader OR to previous place in the following queue (V formation or single file).
    void FollowVehicle(Vehicle* nextVehicle, Vector2D offset);

private:
    Vector2D m_offset;
};