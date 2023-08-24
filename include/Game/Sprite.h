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
        Sprite(const char* path, float scale, const Vector2& position, const Color color);
        ~Sprite();

        /**
        * Update the entity for the current frame.
        *
        * @param Delta Time.
        */
        virtual void update(double dt);

        /**
        * Render the current frame for this Entity.
        *
        * @param Delta Time.
        */
        virtual void render();

        std::string name = "SPRITE";
    private:
        Texture2D texture;
        float scale;
    };
}

