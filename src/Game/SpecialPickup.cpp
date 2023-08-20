#include "Game/SpecialPickup.h"

namespace Game 
{
    SpecialPickup::SpecialPickup(const Vector2& position, float scale, const Color color)
        : Game::Pickup(position,scale, color)
    {
        TraceLog(LOG_DEBUG, "SPECIAL PICKUP CREATED");
    }

    SpecialPickup::~SpecialPickup() {}

    std::string SpecialPickup::getName() const { 
        return this->name;
    }
}


