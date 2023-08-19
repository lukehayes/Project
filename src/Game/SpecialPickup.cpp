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
        DrawRectangle(
            this->shape.x,
            this->shape.y,
            this->shape.width,
            this->shape.height,
            this->color
        );
    }

    std::string SpecialPickup::getName() const { 
        return this->name;
    }
}


