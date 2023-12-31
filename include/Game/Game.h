


#pragma once

#include "raylib.h"
#include "Game/Common/Types.h"

namespace Game
{
    struct Game
    {

        Game();

        /**
         * Intialize Raylib, call raylib functions like SetFPS() etc.
         */
        void init();

        int width;
        int height;
        const char* title;

        double deltaTime;
    };
}

