#include "Game/SpecialPickup.h"

namespace Game 
{
SpecialPickup::SpecialPickup(const Rectangle& rect, const Color color)
        : Game::Pickup(rect,color)
    {
        TraceLog(LOG_DEBUG, "SPECIAL PICKUP CREATED");
    }

    SpecialPickup::~SpecialPickup() {}


    void SpecialPickup::update(double dt) 
    {
    }

    void SpecialPickup::render()
    {
        Game::Pickup::render();
    }

    std::string SpecialPickup::getName()
    {
        return this->name;
    }

    std::string name = "Special Pickup";
}


