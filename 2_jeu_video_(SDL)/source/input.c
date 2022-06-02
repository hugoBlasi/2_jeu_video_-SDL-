#include "input.h"
#include "stdio.h"

int input_handler(Entity *entity) {
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT :
        return -1;

    case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
        case SDLK_UP:
            if (entity->pos_y < 60)
            {
                entity->pos_y = 0;
            } else {
                entity->pos_y -= 60;
            }
                
                break;
        case SDLK_DOWN:
             if (entity->pos_y > 240)
            {
                entity->pos_y = 300;
            } else {
                entity->pos_y += 60;
            }
            
            break;
        }
        break;
	case SDL_KEYUP:
		// doKeyUp(&event.key);
		break;
    default:
        break;
    }
    return 0;
}