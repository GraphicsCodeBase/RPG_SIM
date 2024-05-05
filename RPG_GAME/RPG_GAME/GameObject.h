#pragma once
#include "Game.hpp"
class GameObject
{
	public:
		//creating the constructor.
		GameObject(const char* textureSheet, int x, int y); 
		~GameObject();//destructor.

		void Update();
		void Render();

	private:
		int xPos;
		int yPos;


		SDL_Texture* objTexture;
		SDL_Rect srcRect, destRect;
		SDL_Renderer* renderer;
};