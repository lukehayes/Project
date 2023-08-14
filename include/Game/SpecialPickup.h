#pragma once

#include "Game/Pickup.h"

namespace Game
{
    class SpecialPickup : public Pickup
    {

    public:
        SpecialPickup(const Rectangle& rect, const Color color);

        ~SpecialPickup();

        /**
        * Update the entity for the current frame.
        *
        * @param Delta Time.
        */
        void update(double dt);

        /**
        * Render the current frame for this Entity.
        *
        * @param Delta Time.
        */
        void render();

        std::string getName();

    private:
        std::string name = "Special Pickup";
    };
}
