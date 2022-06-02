#ifndef WINDOW
#define WINDOW

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 360
#define Window_NAME "Runner"

typedef struct {
    SDL_Renderer    *renderer;
    SDL_Window      *window;

}Win;

#endif