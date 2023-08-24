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

    SetTraceLogLevel(LOG_DEBUG);
    Game::Game game;

    std::vector<std::shared_ptr<Game::Entity>> entities;
    std::vector<std::shared_ptr<Game::Sprite>> sprites;

    for(int i = 0; i <= 10; i++)
    {
        float rx = GetRandomValue(10,760);
        float ry = GetRandomValue(10,550);
        std::shared_ptr<Game::Entity> sprite = std::make_shared<Game::Sprite>("../assets/images/tadpole.png",3, (Vector2){rx,ry}, (Color){255,255,255,255});

        entities.push_back(sprite);
    }

    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>((Vector2){100,100}, 10, (Color){80,80,80,255});
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
