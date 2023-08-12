#include "Game/Game.h"
#include "Game/Common/Constants.h"

namespace Game
{
    Game::Game()
        : width(WINDOW_WIDTH),
        height(WINDOW_HEIGHT),
        title(GAME_TITLE),
        deltaTime(0.0)

    { this->init(); }

    void Game::init()
    {
        InitWindow(
                this->width,
                this->height,
                this->title
                );

        InitAudioDevice();

        SetTargetFPS(60);
        SetExitKey(KEY_Q);
    }
}
