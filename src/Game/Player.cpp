#include "Game/Player.h"

namespace Game
{
    Player::Player(const Vector2& pos, const Vector2& size, const Color& color)
        : position(pos), size(size), color(color){}

    Player::~Player() {}
}
