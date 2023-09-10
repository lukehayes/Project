#include "Game/Entity.h"

namespace Game
{
    Entity::Entity(const Vector2& position, float scale, const Color color)
        : position(position), scale(scale), color(color), 
          shape({position.x, position.y, scale, scale})
    {
        TraceLog(LOG_DEBUG, "Entity Created");
    }

    Entity::~Entity()
    {
    }

    Rectangle Entity::getShape()
    { 
        return {
            this->position.x, 
            this->position.y, 
            this->scale,
            this->scale
        };
    }

    void Entity::setShape(const Rectangle& shape)
    {
        this->shape = shape;
    }

    void Entity::setPosition(const Vector2& position)
    {
        this->position = position;
        this->shape.x = position.x;
        this->shape.y = position.y;
    }

    Vector2 Entity::getPosition() const
    {
        return this->position;
    }

    Color Entity::getColor()
    { 
        return this->color;
    }

    void Entity::setColor(Color color)
    { 
        this->color = color;
    }

}

