#pragma once
#include "LightState.hpp"

class Light
{
public:
    Light();
    void toggle();
    inline LightState getCurrentState() const { return currentState; }

private:
    LightState currentState;
};

