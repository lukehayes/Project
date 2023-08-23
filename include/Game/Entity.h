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
        * Set the position of an Entity.
        *
        * @param Vector2 position.
        */
        void setPosition(const Vector2& position);

        /**
        * Get the entities position.
        *
        * @return The entities position.
        */
        Vector2 getPosition() const;


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

        /**
        * Set the Entities target.
        *
        * @param Target vector.
        */
        void setTarget(Vector2 target)
        {
            this->target = target;
        }

        /**
        * Get the Entities target.
        */
        Vector2 getTarget()
        {
            return this->target;
        }

    protected:
        Rectangle shape;
        float scale;
        Color color;
        Vector2 target;
    };
}

