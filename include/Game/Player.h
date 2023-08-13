
#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "raylib.h"
#include "Game/Entity.h"

namespace Game
{
    class Player : public Entity
    {
    public:
        Player(const Rectangle& rect, const Color& color);
        ~Player();

        void update(double dt);

        void render();
        const float SPEED = 400.0;
    };
}

#endif //GAME_PLAYER_H
