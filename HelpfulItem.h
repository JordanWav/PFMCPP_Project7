#pragma once

#include "Item.h"
#include "Utility.h"

struct HelpfulItem : Item
{
    HelpfulItem() : Item("helpful item", 2) { }
    void use(Character* character) override;
};

