#include "SDL.h"
#include "Game.hpp"
// the while idea of the game loop is that it continously goes through everything we need to in the functions.
Game *game = nullptr;
int main(int argc,char *argv[])
{
	game = new Game();//create a new object instance of game.

	game->init("My first SDL Game", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,false);

	while (game->running())
	{
		game->handleEvents();//handle events
		game->update();//update 
		game->render();//render objects to the screen.
	}
	//if the game is false we would quit our game.
	game->clean();

	return 0;
}