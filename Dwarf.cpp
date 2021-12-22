#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hitPoints_, int armor_) : Character
    (hitPoints_, armor_, 4), 
    name(name_) 
{
    defensiveItems = makeDefensiveItems(3);
    helpfulItems = makeHelpfulItems(6);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
