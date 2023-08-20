#include "Game/Entity.h"

namespace Game
{
    Entity::Entity(const Vector2& position, float scale, const Color color)
        : shape({position.x, position.y, scale,scale}), scale(scale), color(color)
    {
        TraceLog(LOG_DEBUG, "Entity Created");
    }

    Entity::~Entity()
    {
    }
    Rectangle Entity::getShape()
    { 
        return this->shape;
    }

    void Entity::setShape(const Rectangle& shape)
    {
        this->shape = shape;
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

