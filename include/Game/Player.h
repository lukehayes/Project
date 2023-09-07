
#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "raylib.h"
#include "Game/Entity.h"

namespace Game
{
    class Player : public Entity
    {
    public:
        Player(const Vector2& position, float scale, const Color color);
        ~Player();

        void update(double dt);

        void render();
        const float SPEED = 200.0;
    };
}

#endif //GAME_PLAYER_H
