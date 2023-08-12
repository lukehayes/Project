#include "Game/Player.h"
#include <raylib.h>

namespace Game
{
    Player::Player(const Rectangle& rect, const Color& color)
        : shape(rect), color(color){}

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
