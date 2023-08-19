#include "Game/SpecialPickup.h"

namespace Game 
{
SpecialPickup::SpecialPickup(const Rectangle& rect, const Color color)
        : Game::Pickup(rect,color)
    {
        TraceLog(LOG_DEBUG, "SPECIAL PICKUP CREATED");
    }

    SpecialPickup::~SpecialPickup() {}

    std::string SpecialPickup::getName() const { 
        return this->name;
    }
}


