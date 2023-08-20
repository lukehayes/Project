#include "Game/Player.h"
#include "Game/Entity.h"
#include <raylib.h>

namespace Game
{
    Player::Player(const Vector2& position, float scale, const Color color)
        : Entity(position, scale, color) {}

    Player::~Player() {}

    void Player::update(double dt)
    {
        //--------------------------------------------------------------------- 
        // Player Control
        //--------------------------------------------------------------------- 
        if(IsKeyDown(KEY_W))
        {
            this->shape.y -= SPEED * dt;
        }

        if(IsKeyDown(KEY_S))
        {
            this->shape.y += SPEED * dt;
        }

        if(IsKeyDown(KEY_A))
        {
            this->shape.x -= SPEED * dt;
        }

        if(IsKeyDown(KEY_D))
        {
            this->shape.x += SPEED * dt;
        }
    }

    void Player::render()
    {
        DrawRectangle(
            this->shape.x,
            this->shape.y,
            this->shape.width,
            this->shape.height,
            this->color
        );
    }
}
