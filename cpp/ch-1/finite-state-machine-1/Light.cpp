#include "Light.hpp"

Light::Light()
{
    currentState = LightState::Off;
}

void Light::toggle()
{
    currentState = lightTransitions[currentState];
}