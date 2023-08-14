#include "Game/Game.h"
#include "Game/Player.h"
#include "Game/Pickup.h"
#include "Game/SpecialPickup.h"
#include "Game/Entity.h"

#include <vector>
#include <memory>

bool GAME_RUNNING = false;


int main() {

    SetTraceLogLevel(LOG_DEBUG);
    Game::Game game;

    Rectangle pr = {50,50,50,50};
    Color pc = {80,80,80,255};
    std::shared_ptr<Game::Player> player = std::make_shared<Game::Player>(pr, pc);

    std::vector<std::shared_ptr<Game::Pickup>> pickups;

    Rectangle r{120,120,20,20};
    std::shared_ptr<Game::Pickup> pickup1 = std::make_shared<Game::Pickup>(r,BLUE);
    pickups.push_back(pickup1);

    Rectangle spr{220,120,50,50};
    std::shared_ptr<Game::Pickup> sp = std::make_shared<Game::SpecialPickup>(spr,BLUE);
    pickups.push_back(sp);


    while(!GAME_RUNNING)
    {
        if (IsKeyPressed(KEY_ESCAPE) || WindowShouldClose()) GAME_RUNNING = true;

        player->update(GetFrameTime());

        for(auto& p : pickups)
        {
            if(CheckCollisionRecs(player->getShape(), p->getShape()))
            {
                TraceLog(LOG_DEBUG, "HIT");
                p->setColor(RED);
                TraceLog(LOG_DEBUG, p->getName().c_str());
                player->setColor(BLUE);

            }else {
                player->setColor({80,80,80,255});
            }

            p->update(GetFrameTime());
        }


        BeginDrawing();
            ClearBackground(GRAY);

            player->render();

            for(auto p : pickups)
            {
                p->render();
            }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
