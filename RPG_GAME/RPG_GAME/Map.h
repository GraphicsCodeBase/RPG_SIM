#pragma once

#include "Game.hpp"


class Map
{
public:
	//we are going need to be able to create a map
	Map();//constructor.
	~Map();//destructor.

	void loadMap(int arr[20][25]);//for loading the map.
	void drawMap();//for drawing the map.


private:
	SDL_Rect src, dest;
	SDL_Texture* dirt;
	SDL_Texture* grass;
	SDL_Texture* water;


	//have an 2D int array
	int map[20][25]; 

};