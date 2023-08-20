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
        Entity(const Vector2& position, float scale, const Color color);
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

        /**
        * Get the Entities Rectangle.
        *
        * @return The entities shape.
        */
        Rectangle getShape();

        /**
        * Set the Entities Rectangle.
        *
        * @param shape A Rectangle instance.
        */
        void setShape(const Rectangle& shape);

        /**
        * Get the Entities Color.
        *
        * @return The entities color.
        */
        Color getColor();

        /**
        * Set the Entities color.
        *
        * @param color A Color instance.
        */
        void setColor(Color color);

    protected:
        Rectangle shape;
        float scale;
        Color color;
    };
}

