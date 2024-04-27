#pragma once
#include <stdio.h>
#include <iostream>
#include "SDL.h"


//defining the game class.

class Game
{
	public:
		//creating constructor when game is created.
		Game();
		~Game();//creating a destructor for when the game is destructed.
		void init(const char* title, int xpos, int ypos, int width , int height, bool fullscreen);
		
		void handleEvents();
		void update();
		void render();
		void clean();//memory management

		bool running()//check if the game needs to run the loop again.
		{
			return isRunning;
		}
		 
	private:
		int cnt = 0;
		bool isRunning;
		SDL_Window *window;
		SDL_Renderer* renderer; 
};