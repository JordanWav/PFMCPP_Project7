#pragma once
#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string name_, int hp, int armor);
    std::string getStats();
    const std::string& getName();
    void attack(Character& other) override;
    
private:
    const std::string name;
};

