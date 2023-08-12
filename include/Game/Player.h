
#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "raylib.h"

namespace Game
{
    class Player 
    {
    public:
        Player(const Vector2& pos, const Vector2& size, const Color& color);
        ~Player();

        Vector2 position;
        Vector2 size;
        Color color;
    };
}

#endif //GAME_PLAYER_H
