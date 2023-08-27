#include "Game/Player.h"
#include "Game/Entity.h"
#include <raylib.h>
#include <iostream>

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

        this->setShape({this->position.x, this->position.y, this->scale, this->scale});
    }

    void Player::render()
    {
        DrawRectangleRec(
            this->shape,
            this->color
        );
    }
}
