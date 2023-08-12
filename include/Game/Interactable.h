#pragma once

#include "Game/Entity.h"

namespace Game
{
    /**
    * Base class for all "Interactable" things.
    */
    class Interactable : public Entity
    {
    public:
        Interactable();
        ~Interactable();
        virtual void update(double dt) = 0;
        virtual void render() = 0;

    private:

    };

    Interactable::Interactable()
    {
        TraceLog(LOG_DEBUG, "Interactable Created");
    }

    Interactable::~Interactable()
    {
    }

}
