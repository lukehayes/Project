#pragma once

#include "raylib.h"
#include "Game/Entity.h"

namespace Game
{
    /**
    * Base class for all "Interactable" things.
    */
    class Interactable : public Entity
    {
    public:
        Interactable(const Rectangle& rect, const Color color);
        ~Interactable();

        /**
        * Update the entity for the current frame.
        * 
        * @param Delta Time.
        */
        virtual void update(double dt) = 0;

        /**
        * Render the current frame for this Entity.
        * 
        * @param Delta Time.
        */
        virtual void render() = 0;
    };
}
