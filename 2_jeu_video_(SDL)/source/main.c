#include <stdio.h>
#include "window.h"
#include "input.h"
#include "init.h"
#include "draw.h"
#include "enemy.h"

int main()
{
    Win *app = malloc(sizeof(Win));
    Entity *player = malloc(sizeof(Entity));
    Entity *enemy = malloc(sizeof(Entity));

    if (initSDL(app) < 0) {
        return -1;
    }

    enemy->pos_x = 480;
    enemy->pos_y = 60;
    enemy->width = 60;
    enemy->height = 60;
    enemy->texture = loadTexture(app, "ressource/enemy.jpg");

    player->pos_x = 100;
    player->pos_y = 120;
    player->width = 60;
    player->height = 60;
    player->texture = loadTexture(app, "ressource/player.jpg");
    SDL_SetRenderDrawColor(app-> renderer, 96,128,255,255);
    while (input_handler(player) == 0)
    
    {
        prepareCanvas(app);
        drawEntity(app, player);
        drawEntity(app, enemy);
        enemy_move(enemy);
        presentCanvas(app);
        SDL_Delay(16);
    }
    
    return 0;
    
}