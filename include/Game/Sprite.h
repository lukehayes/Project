#pragma once

#include "raylib.h"
#include "Game/Entity.h"

namespace Game
{
    /**
    * A helper class for drawing a single sprite.
    */
    class Sprite : public Entity
    {
    public:
        Sprite(const char* path, const Vector2& position, const Color color)
        : texture(LoadTexture(path)), Entity({position.x, position.y, 16,16}, color)
        {}

        ~Sprite() {
            UnloadTexture(this->texture);
        }

        /**
        * Update the entity for the current frame.
        *
        * @param Delta Time.
        */
        virtual void update(double dt)
        {
        }

        /**
        * Render the current frame for this Entity.
        *
        * @param Delta Time.
        */
        virtual void render() {

            int scale = 10;

            DrawTexturePro(
                this->texture,
                {this->shape.x, this->shape.y,16,16},
                {this->shape.x, this->shape.y, 16 * 20,16 * 20},
                {1,5},
                0,
                this->color
            );
        }

        Texture2D texture;
    };
}

