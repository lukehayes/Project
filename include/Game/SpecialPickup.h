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

        /**
        * Get the name of the type of Pickup
        *
        * @param Delta Time.
        */
        std::string getName() const;

    private:
        const std::string name = "Special Pickup";
    };
}
