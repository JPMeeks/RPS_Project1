#pragma once
#include "Player.h"
#include <iostream>
#include <vector>
#include <string>

class Game
{
private:
	std::vector<Player*> players;
public:
	Game();
	~Game();

	void assemble();
	void runGame();

};

