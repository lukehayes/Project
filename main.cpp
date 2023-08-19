#include "Game/Game.h"
#include "Game/Player.h"
#include "Game/Pickup.h"
#include "Game/SpecialPickup.h"
#include "Game/Entity.h"

#include <vector>
#include <memory>
#include <iostream>

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_DEBUG);
    Game::Game game;

    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>((Rectangle){50,50,50,50}, (Color){80,80,80,255});

    std::vector<std::shared_ptr<Game::Entity>> entities;

    std::shared_ptr<Game::Pickup> p = std::make_shared<Game::Pickup>((Rectangle){200,100,20,20}, (Color){10,200,100,255});
    std::shared_ptr<Game::SpecialPickup> sp = std::make_shared<Game::SpecialPickup>((Rectangle){130,130,30,30}, (Color){150,0,250,255});

    entities.push_back(player);
    entities.push_back(p);
    entities.push_back(sp);

    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        for(auto entity : entities)
        {
            entity->update(GetFrameTime());
        }

        BeginDrawing();
            ClearBackground(LIGHTGRAY);

            for(auto entity : entities)
            {
                entity->render();
            }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
