#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, int x , int y)
{
	//when we create a game object we need to assign the renderer and the art texture.
	//renderer = ren;
	objTexture = TextureManager::LoadTexture(textureSheet);
	//setting the x and y position when the game object is created.
	xPos = x;
	yPos = y;
}

void GameObject::Update()
{
	
	xPos++;
	yPos++;
	
	srcRect.h = 32;
	srcRect.w = 32;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xPos;
	destRect.y = yPos;
	destRect.w = srcRect.w * 2;
	destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, NULL, &destRect);

}