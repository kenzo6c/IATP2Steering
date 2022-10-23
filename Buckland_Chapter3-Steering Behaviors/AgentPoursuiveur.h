#pragma once

#include "Vehicle.h"
#include "ParamLoader.h"
#include "SteeringBehaviors.h"

using namespace std;

class AgentPoursuiveur : public Vehicle
{
public:
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
        Vector2D offset);

    void Free();

    void AgentPoursuiveur::ProtectLeader(Vehicle* nextVehicle);

private:
    Vector2D m_offset;
};