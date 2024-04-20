#include "SDL.h"

int main(int argc,char *argv[])
{
	//this is a git test for a repo.
	//init SDL ?
	//this is a desktop file git change.
	//this is a file change on laptop.
	SDL_Init(SDL_INIT_EVERYTHING);
	//creating an SDL window.
	SDL_Window* window = SDL_CreateWindow("first RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* Renderer = SDL_CreateRenderer(window, -1, 0);

	//setting SDL drawColor
	//setting the background color to green.
	SDL_SetRenderDrawColor(Renderer, 0, 255, 0, 255);

	//clear the screen.
	SDL_RenderClear(Renderer);

	SDL_RenderPresent(Renderer);

	SDL_Delay(3000);// set window delay

	return 0;
}