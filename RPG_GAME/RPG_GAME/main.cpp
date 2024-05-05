#include "SDL.h"
#include "Game.hpp"
// the while idea of the game loop is that it continously goes through everything we need to in the functions.
Game *game = nullptr;
int main(int argc,char *argv[])
{
	
	const int FPS = 60;// capping the FPS of our game.
	const int frameDelay = 1000 / FPS;

	Uint32 frameStart;
	int frameTime;

	game = new Game();//create a new object instance of game.

	game->init("My first SDL Game", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,640,false);

	while (game->running())
	{
		//get the current time in m/s
		frameStart = SDL_GetTicks();
		
		
		game->handleEvents();//handle events
		game->update();//update 
		game->render();//render objects to the screen.

		frameTime = SDL_GetTicks() - frameStart;// this is to calc the frame time of one game loop from creating updating and rendering.

		if (frameDelay > frameTime)
		{
			SDL_Delay(frameDelay - frameTime);
		}

	}
	//if the game is false we would quit our game.
	game->clean();

	return 0;
}