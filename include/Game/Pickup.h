#pragma once

#include "raylib.h"
#include "Game/Interactable.h"
#include <string>

namespace Game
{
    /**
    * Base class for all "Pickup" things.
    */
    class Pickup : public Interactable
    {
    public:
        Pickup(const Vector2& position, const Color& color);
        ~Pickup();
        void update(double dt);
        void render();

    private:
        Vector2 position;
        Color color;
        std::string name = "Pickup";

    };

    Pickup::Pickup(const Vector2& pos, const Color& color)
        : Interactable(), position(pos), color(color)
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
            this->position.x,
            this->position.y,
            20,20,
            this->color
        );
    }


}
