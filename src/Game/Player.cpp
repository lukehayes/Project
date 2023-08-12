#include "Game/Player.h"
#include <raylib.h>

namespace Game
{
    Player::Player(const Vector2& pos, const Vector2& size, const Color& color)
        : position(pos), size(size), color(color){}

    Player::~Player() {}

    void Player::update(double dt)
    {
        //--------------------------------------------------------------------- 
        // Player Control
        //--------------------------------------------------------------------- 
        if(IsKeyDown(KEY_W))
        {
            this->position.y -= SPEED * dt;
        }

        if(IsKeyDown(KEY_S))
        {
            this->position.y += SPEED * dt;
        }

        if(IsKeyDown(KEY_A))
        {
            this->position.x -= SPEED * dt;
        }

        if(IsKeyDown(KEY_D))
        {
            this->position.x += SPEED * dt;
        }
    }

    void Player::render()
    {
        DrawRectangle(
            this->position.x,
            this->position.y,
            this->size.x,
            this->size.y,
            this->color
        );
    }
}
