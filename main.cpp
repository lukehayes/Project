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
    
    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>((Vector2){10,10}, 10, BLUE);
    entities.push_back(player);

    std::shared_ptr<Game::Sprite> sprite = std::make_shared<Game::Sprite>("../assets/images/tadpole.png",1, (Vector2){100,100}, (Color){255,255,255,255});
    sprite->setTarget(player->getPosition());
    entities.push_back(sprite);

    for(int i = 0; i<=5; i++)
    {
        float rx = GetRandomValue(10,400);
        float ry = GetRandomValue(10,400);
        std::shared_ptr<Game::Sprite> sprite = std::make_shared<Game::Sprite>("../assets/images/tadpole.png",1, (Vector2){rx,ry}, (Color){255,255,255,255});
        entities.push_back(sprite);
    }



    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        for(auto& entity : entities)
        {
            entity->update(GetFrameTime());
            entity->setTarget(player->getPosition());
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
