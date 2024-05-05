#pragma once
#include <stdio.h>
#include <iostream>
#include "SDL.h"
#include <SDL_image.h>


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

		//creating a static int variables.
		static SDL_Renderer *renderer;



		bool running()//check if the game needs to run the loop again.
		{
			return isRunning;
		}
		 
	private:
		bool isRunning = false;
		int cnt = 0;
		SDL_Window *window;
};