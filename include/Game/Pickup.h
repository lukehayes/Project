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
        Pickup(const Rectangle& rect, const Color color);
        ~Pickup();

        /**
        * Update the entity for the current frame.
        * 
        * @param Delta Time.
        */
        void update(double dt) = 0;

        /**
        * Render the current frame for this Entity.
        * 
        * @param Delta Time.
        */
        void render() = 0;

        /**
        * Get the name of the pickup
        *
        * @return The name of the pickup.
        */
        std::string getName() const;

    protected:
        std::string name = "Pickup";
    };
}
