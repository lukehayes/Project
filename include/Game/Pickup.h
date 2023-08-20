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
        Pickup(const Vector2& position, float scale, const Color color);
        ~Pickup();

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
        * Get the name of the pickup
        *
        * @return The name of the pickup.
        */
        virtual std::string getName() const;

    protected:
       const  std::string name = "Pickup";
    };
}
