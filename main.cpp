#include "Game/Game.h"
#include "Game/Player.h"
#include "Game/Pickup.h"
#include "Game/SpecialPickup.h"
#include "Game/Entity.h"

#include <vector>
#include <memory>

bool GAME_RUNNING = false;

int main() {

    SetTraceLogLevel(LOG_ALL);
    Game::Game game;

    std::vector<std::shared_ptr<Game::Entity>> entities;
    std::vector<std::shared_ptr<Game::Pickup>> pickups;
    
    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>((Vector2){10,10}, 10, BLUE);
    entities.push_back(player);

    std::shared_ptr<Game::Pickup> p = std::make_shared<Game::Pickup>((Vector2){170,200}, 30, GREEN);
    pickups.push_back(p);

    std::shared_ptr<Game::Pickup> sp = std::make_shared<Game::SpecialPickup>((Vector2){100,130}, 50, PURPLE);
    pickups.push_back(sp);


    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        // Entity updates - mostly the player.
        for(auto& entity : entities)
        {
            entity->update(GetFrameTime());
        }

        // Pickup updates.
        // Check for pickup collisions>
        for(auto& pickup : pickups)
        {
            TraceLog(LOG_DEBUG, "Check Collision");

            // Collisions
            if(CheckCollisionRecs(player->getShape(), pickup->getShape()))
            {
                TraceLog(LOG_DEBUG, pickup->getName().c_str());
            }
        }

        BeginDrawing();
            ClearBackground({10,10,20,255});

            for(auto entity : entities)
            {
                entity->render();
            }

            for(auto pickup : pickups)
            {
                pickup->render();
            }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
