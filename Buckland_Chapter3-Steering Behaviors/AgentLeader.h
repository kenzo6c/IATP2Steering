#pragma once

#include "Vehicle.h"
#include "2d/Vector2D.h"

class AgentLeader : Vehicle
{
private:
    bool m_bControllable = false;
public:
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

    void ChangeControl();
};

