#include "input.h"
#include "stdio.h"

    int enemy_move(Entity *entity)
    {
        entity->pos_x -= 5;
        
        if  (entity->pos_x < 0)
        {
            entity->pos_x = 480;
            int pos = (rand() % 5);
            if (pos == 0)
            {
                entity->pos_y = 60;
            } else if (pos == 1)
            {
                entity->pos_y = 120;
            } else if (pos == 2)
            {
                entity->pos_y = 180;
            } else if (pos == 3)
            {
                entity->pos_y = 240;
            } else if (pos == 4)
            {
                entity->pos_y = 300;
            }
            
        }
        
        return 0;
    }
