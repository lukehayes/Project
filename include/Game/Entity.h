#pragma once

#include "raylib.h"

namespace Game
{
    /**
    * Abstract base class for most things on screen.
    */
    class Entity
    {
    public:
        Entity(const Rectangle& rect, const Color color);
        ~Entity();

        // ABSRACT METHODS

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

        // GETTERS SETTERS 
        Rectangle getShape();
        Color getColor();
        void setColor(Color color);

    protected:
        Rectangle shape;
        Color color;
    };
}

