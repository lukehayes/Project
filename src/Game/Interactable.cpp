#include "Game/Interactable.h"

namespace Game
{
    Interactable::Interactable(const Rectangle& rect, const Color color)
        : Entity(rect, color)
    {

        TraceLog(LOG_DEBUG, "Interactable Created");
    }

    Interactable::~Interactable()
    {
    }
}
