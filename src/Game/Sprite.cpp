#include "Game/Sprite.h"
#include "raymath.h"
#include <iostream>

namespace Game
{
    Sprite::Sprite(const char* path, float scale, const Vector2& position, const Color color)
    : texture(LoadTexture(path)), scale(16 * scale), Entity(position, scale, color)
    {}

    Sprite::~Sprite()
    {
        UnloadTexture(this->texture);
    }

    /**
    * Update the entity for the current frame.
    *
    * @param Delta Time.
    */
    void Sprite::update(double dt)
    {
        this->setPosition(Vector2MoveTowards(this->getPosition(), this->getTarget(),1));
    }

    /**
    * Render the current frame for this Entity.
    *
    * @param Delta Time.
    */
    void Sprite::render() {

        Vector2 norm = Vector2Normalize(this->target);
        
        float xAngle = std::cos(norm.x);
        float yAngle = std::sin(norm.y);

        std::cout << "Norm X: " << norm.x << " Norm Y:" << norm.y << std::endl;

        //float angle = std::atan2(
            //this->getPosition().y - this->target.y,
            //this->getPosition().x - this->target.x
        //);

        float angle = std::atan2(
            this->getPosition().y - this->target.y,
            this->getPosition().x - this->target.x
        );

        std::cout << "Angle: " << angle << std::endl;

        DrawTexturePro(
            this->texture,
            {0,0,16,16},
            {this->shape.x, this->shape.y,this->scale, this->scale},
            {0,0},
            xAngle,
            this->color
        );
    }
}

