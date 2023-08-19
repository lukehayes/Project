#include "Game/Pickup.h"

namespace Game
{
    Pickup::Pickup(const Rectangle& rect, const Color color)
        : Interactable(rect, color)
   {
        TraceLog(LOG_DEBUG, "Pickup Created");
    }

    Pickup::~Pickup()
    {
    }
    
    void Pickup::update(double dt)
    {
    }

    void Pickup::render()
    {
        DrawRectangle(
            this->shape.x,
            this->shape.y,
            this->shape.width,
            this->shape.height,
            this->color
        );
    }

    std::string Pickup::getName() const 
    {
        return this->name;
    }

}
