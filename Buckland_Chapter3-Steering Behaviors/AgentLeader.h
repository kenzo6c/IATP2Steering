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

    AgentLeader::AgentLeader(GameWorld* world, Vector2D position);
};

