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
        * Get the name of the type of Pickup
        *
        * @param Delta Time.
        */
        std::string getName() const;

    private:
        const std::string name = "Special Pickup";
    };
}
