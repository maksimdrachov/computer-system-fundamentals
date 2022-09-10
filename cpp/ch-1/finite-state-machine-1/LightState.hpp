#pragma once
#include <map>
#include <string>

enum class LightState {
    Off,
    Low,
    Medium,
    High
};

static std::string LightStateString[4] =
{
    "Off",
    "Low",
    "Medium",
    "High"
};

static std::ostream& operator<<(std::ostream& os, LightState ls)
{
    return os << LightStateString[static_cast<int>(ls)];
}

static std::map<LightState, LightState> lightTransitions = {
    {LightState::Off, LightState::Low},
    {LightState::Low, LightState::Medium},
    {LightState::Medium, LightState::High},
    {LightState::High, LightState::Off}
};


