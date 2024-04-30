#pragma once
#include "Game.hpp"


class TextureManager
{
	public:
		// we want this to be a class function rather than a member function.
		static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* ren);
};


