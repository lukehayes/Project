#include "Game/Game.h"
#include "Game/Player.h"
#include "Game/Pickup.h"

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_NONE);
    Game::Game game;

    Game::Player player({10,10,10,10}, {80,80,80,255});

    Game::Pickup pickup1({100,100}, PINK);
    Game::Pickup pickup2({300,400}, PINK);


    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;



        player.update(GetFrameTime());
        pickup1.update(GetFrameTime());
        pickup2.update(GetFrameTime());


        BeginDrawing();
            ClearBackground(GRAY);

            player.render();
            pickup1.render();
            pickup2.render();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
