#include "AgentPoursuiveur.h"

using namespace std;

AgentPoursuiveur::AgentPoursuiveur(GameWorld* world,
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
    int color) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale), m_offset(offset)
{
    overrideColor = color;
    Steering()->OffsetPursuitOn(nextVehicle, offset);
}

void AgentPoursuiveur::Free()
{
    Steering()->OffsetPursuitOff();
    Steering()->WanderOn();
}

void AgentPoursuiveur::FollowVehicle(Vehicle* nextVehicle)
{
    Steering()->WanderOff();
    Steering()->OffsetPursuitOff();
    Steering()->OffsetPursuitOn(nextVehicle, m_offset);
}

void AgentPoursuiveur::FollowVehicle(Vehicle* nextVehicle, Vector2D offset)
{
    Steering()->WanderOff();
    Steering()->OffsetPursuitOff();
    Steering()->OffsetPursuitOn(nextVehicle, offset);
}