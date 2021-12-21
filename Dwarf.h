#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hp, int armor);
    std::string getStats();
    const std::string& getName();

private:
    const std::string name;
};
