#include "Game/Game.h"

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_NONE);

    Game game;
    game.init();

    bool exitWindow = false;

    while(!exitWindow)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) exitWindow = true;

        BeginDrawing();
            ClearBackground(DARKBLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
