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

private:
    vector<Vehicle*> m_vehicles;
    GameWorld* gameWorld;
};