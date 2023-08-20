#include "Game/Interactable.h"

namespace Game
{
    Interactable::Interactable(const Vector2& position, float scale, const Color color)
        : Entity(position, scale, color)
    {

        TraceLog(LOG_DEBUG, "Interactable Created");
    }

    Interactable::~Interactable()
    {
    }
}
