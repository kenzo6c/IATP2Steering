#include "AgentLeader.h"
#include "2d/Vector2D.h"
#include "SteeringBehaviors.h"

class GameWorld;

AgentLeader::AgentLeader(GameWorld* world,
    Vector2D position,
    double    rotation,
    Vector2D velocity,
    double    mass,
    double    max_force,
    double    max_speed,
    double    max_turn_rate,
    double    scale)
    : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
    overrideColor = 2;
    Steering()->WanderOn();
}

AgentLeader::AgentLeader(GameWorld* world, Vector2D position)
    : Vehicle(world,
        position,
        RandFloat()* TwoPi,
        Vector2D(0, 0),
        Prm.VehicleMass,
        Prm.MaxSteeringForce,
        70,
        Prm.MaxTurnRatePerSecond,
        10)
{
    overrideColor = 2;
    Steering()->WanderOn();
}


AgentLeader::AgentLeader(GameWorld* world,
    Vector2D position,
    double    rotation,
    Vector2D velocity,
    double    mass,
    double    max_force,
    double    max_speed,
    double    max_turn_rate,
    double    scale,
    bool isControllable)
    : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
    overrideColor = 2;
    if (isControllable)
    {
        Steering()->ArriveOn();
        m_bControllable = true;
    }
    else
    {
        Steering()->WanderOn();
    }
}

AgentLeader::AgentLeader(GameWorld* world, Vector2D position, bool isControllable)
    : Vehicle(world,
        position,
        RandFloat()* TwoPi,
        Vector2D(0, 0),
        Prm.VehicleMass,
        Prm.MaxSteeringForce,
        70,
        Prm.MaxTurnRatePerSecond,
        10)
{
    overrideColor = 2;
    if (isControllable)
    {
        Steering()->ArriveOn();
        m_bControllable = true;
    }
    else
    {
        Steering()->WanderOn();
    }
}

void AgentLeader::ChangeControl()
{
    if (m_bControllable)
    {
        Steering()->ArriveOff();
        Steering()->WanderOn();
        m_bControllable = false;
    }
    else
    {
        Steering()->WanderOff();
        Steering()->ArriveOn();
        m_bControllable = true;
    }
}