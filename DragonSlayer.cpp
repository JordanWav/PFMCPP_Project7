#include "DragonSlayer.h"
#include "Dragon.h"

DragonSlayer::DragonSlayer(std::string name_, int hitPoints_, int armor_) : Character
    (hitPoints_, armor_, 4), 
    name(name_)
{
    defensiveItems = makeDefensiveItems(1);
    helpfulItems = makeHelpfulItems(5);
}

const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        if( attackItem != nullptr )
        {
            attackItem->use(this);
            attackItem.reset();
        }
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }       
    Character::attack(other);     
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
