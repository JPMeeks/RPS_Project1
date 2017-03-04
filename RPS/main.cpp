#include "Game.h"
#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	Game* runtTime = new Game();

	runtTime->assemble();
	runtTime->runGame();

	std::cout << "Press [Enter] to end the program" << std::ends;
	std::cin.get();
	return 0;
}