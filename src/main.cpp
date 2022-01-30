#include <SDL2/SDL.h>
#include <iostream>

#define WIDTH  640
#define HEIGHT 480
#define SDL_FLAGS SDL_WINDOW_SHOWN


int main() {
	SDL_Window* window;
	SDL_Renderer* renderer;
	if (SDL_Init(SDL_INIT_EVERYTHING)) return 1;
	if (SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, SDL_FLAGS, &window, &renderer)) return 1;

	while(true) {
		SDL_SetRenderDrawColor(renderer, 20, 20, 20, SDL_ALPHA_OPAQUE);
		SDL_RenderClear(renderer);

		SDL_Rect aabb { 25, 25, 69, 420 };
		SDL_SetRenderDrawColor(renderer, 0, 0, 255, SDL_ALPHA_OPAQUE);
		SDL_RenderFillRect(renderer, &aabb);

		SDL_RenderPresent(renderer);
	}

	if (renderer) SDL_DestroyRenderer(renderer);
	if (window) SDL_DestroyWindow(window);
	SDL_Quit();
}
