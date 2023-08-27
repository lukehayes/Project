#include "Game/Game.h"
#include "Game/Player.h"
#include "Game/Pickup.h"
#include "Game/SpecialPickup.h"
#include "Game/Entity.h"
#include "Game/Sprite.h"
#include "raymath.h"

#include <vector>
#include <memory>
#include <iostream>

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_ALL);
    Game::Game game;

    std::vector<std::shared_ptr<Game::Entity>> entities;
    std::vector<std::shared_ptr<Game::Sprite>> sprites;
    std::vector<std::shared_ptr<Game::Entity>> pickups;
    
    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>((Vector2){10,10}, 10, BLUE);
    entities.push_back(player);

    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        for(auto& entity : entities)
        {
            entity->update(GetFrameTime());
        }

        BeginDrawing();
            ClearBackground({10,10,20,255});

            for(auto entity : entities)
            {
                entity->render();
            }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
