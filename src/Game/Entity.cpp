#include "Game/Entity.h"

namespace Game
{
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

    Entity::Entity(const Rectangle& rect, const Color color)
        : shape(rect), color(color)
    {
        TraceLog(LOG_DEBUG, "Entity Created");
    }

    Entity::~Entity()
    {
    }
}

