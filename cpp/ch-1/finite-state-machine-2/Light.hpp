#pragma once
#include "LightState.hpp"

class Light
{
public:
    Light();
    // Same as before
    inline LightState* getCurrentState() const { return currentState; }
    // In here, we'll delegate the state transition to the currentState
    void toggle();
    // This will get called by the current state
    void setState(LightState& newState);

private:
    // LightState here is now a class, not the enum that we saw earlier
    LightState* currentState;
};

