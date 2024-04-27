#include "Game.hpp"

// we are defining all the class functions here.
Game::Game()
{

}
Game::~Game()
{

}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;// this will determine if the game will be in full screen or not.
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	//make sure when we init SDL it init properly.
	//give a message to the console when SDL is initalised.
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "sub system initalised" << std::endl;

		window = SDL_CreateWindow(title, xpos,ypos,width,height,flags);

		if (window)
		{
			std::cout << " window created!" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255,255,255,255);
			std::cout << "Renderer created!" << std::endl;
		}
		isRunning = true;
	}
	else
	{
		//if SDL doesnt init correctly, stop running the game.
		isRunning = false;
	}

}
void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	//switch case for the type of events.
	switch (event.type)
	{
		case SDL_QUIT:
			isRunning = false;//if the events is set to quit close the game.
			break;

		default:
			break;
	}
}
void Game::update()
{
	cnt++;
	std::cout << cnt << std::endl;
}

void Game::render()
{
	//clear what is in the render buffer
	SDL_RenderClear(renderer);
	// this is where we would add stuff to renderer.
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	//this is to prevent memory leaks.
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game cleaned" << std::endl;
}
