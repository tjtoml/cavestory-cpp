#pragma once
#include "Sprite.h"
/*
Holds all information for main gameloop.
*/
class Graphics;

class Game
{
public:
	Game();
	~Game();

private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Sprite _player;
};

