#include <SDL2/SDL.h>

SDL_Renderer* renderer;

void render() {
    SDL_RenderClear(renderer);
    // Render sprites and images
    // ...
    SDL_RenderPresent(renderer);
}
