#pragma once

#include "raylib.h"
#include "Game/Entity.h"
#include <iostream>

namespace Game
{
    /**
    * A helper class for drawing a single sprite.
    */
    class Sprite : public Entity
    {
    public:
        Sprite(const char* path, float scale, const Vector2& position, const Color color)
        : texture(LoadTexture(path)), scale(16 * scale), Entity(position, scale, color)
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

            DrawTexturePro(
                this->texture,
                {0,0,16,16},
                {this->shape.x, this->shape.y,this->scale, this->scale},
                {0,0},
                0,
                this->color
            );
        }

    private:
        Texture2D texture;
        float scale;
    };
}

