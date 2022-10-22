#pragma once

#include "Vehicle.h"
#include "GameWorld.h"
#include "2d/Vector2D.h"

class AgentLeader : Vehicle
{
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
};

