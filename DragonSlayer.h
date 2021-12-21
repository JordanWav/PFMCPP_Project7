#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor);
    
    const std::string& getName() override;
    void attack(Character& other) override;
    std::string getStats() override;

private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem { new AttackItem() };
};
