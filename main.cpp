#include "Game/Game.h"
#include "Game/Player.h"

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_NONE);
    Game::Game game;

    Game::Player player({20,20}, {100,20}, {80,80,80,255});


    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        player.update(GetFrameTime());


        BeginDrawing();
            ClearBackground(GRAY);

            player.render();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
