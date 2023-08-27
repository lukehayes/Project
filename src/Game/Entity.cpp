#include "Game/Entity.h"

namespace Game
{
    Entity::Entity(const Vector2& position, float scale, const Color color)
        : position(position), scale(scale), color(color)
    {
        TraceLog(LOG_DEBUG, "Entity Created");
        
        // TODO Set the shape explicitly here. Not great but works for now.
        this->setShape({
            this->position.x,
            this->position.y,
            scale,
            scale
        });
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

