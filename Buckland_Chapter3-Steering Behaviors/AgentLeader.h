#pragma once

#include "Vehicle.h"
#include "2d/Vector2D.h"

//------------------------------------------------------------------------
//
//  Name: AgentLeader.h
//
//  Desc: Class representing the Leader agent, controllable by the player or not.
//        
//
//  Author: Emile Veillette & Kenzo Carneiro
//
//------------------------------------------------------------------------

class AgentLeader : public Vehicle
{
private:
    bool m_bControllable = false;
public:
    
    // Multiple constructors for AgentLeader (with default values or not).
    AgentLeader(GameWorld* world,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale);

    AgentLeader(GameWorld* world, Vector2D position);

    AgentLeader(GameWorld* world,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale,
        bool isControllable);

    AgentLeader(GameWorld* world, Vector2D position, bool isControllable);

    // Switch between controllable Leader and wandering Leader.
    void ChangeControl();
};

