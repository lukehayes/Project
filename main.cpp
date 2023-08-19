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

    std::vector<std::shared_ptr<Game::Pickup>> pickups;

    std::shared_ptr<Game::Pickup> p = std::make_shared<Game::Pickup>((Rectangle){200,100,30,30}, (Color){10,100,100,255});
    std::shared_ptr<Game::SpecialPickup> sp = std::make_shared<Game::SpecialPickup>((Rectangle){130,130,30,30}, (Color){50,0,150,255});

    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;


        if(CheckCollisionRecs(player->getShape(), p->getShape()))
        {
            std::cout << p->getName() << std::endl;
            p->setColor(BLUE);
            p->setShape((Rectangle){(int)GetRandomValue(10,500), (int)GetRandomValue(10,500),10,10});
        }

        if(CheckCollisionRecs(player->getShape(), sp->getShape()))
        {
            std::cout << sp->getName() << std::endl;
            sp->setColor(RED);
        }

        player->update(GetFrameTime());

        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            player->render();
            p->render();
            sp->render();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
