#pragma once

#include "Character.h"
#include "Utility.h"

struct Paladin : Character
{
    Paladin(std::string name_, int hp, int armor);
    
    const std::string& getName();
    std::string getStats();

private:
    const std::string name;
};
