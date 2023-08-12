#include "Game/Player.h"

namespace Game
{
    Player::Player(const Vector2& pos, const Vector2& size, const Color& color)
        : position(pos), size(size), color(color){}

    Player::~Player() {}

    void Player::update(double dt)
    {
        this->position.x += 50 * dt;
        this->position.y += 50 * dt;
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
