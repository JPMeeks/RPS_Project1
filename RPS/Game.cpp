#include "Game.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>
#include <vector>
#include <string>


Game::Game()
{
}


Game::~Game()
{
	std::cout << "" << std::endl;
	for (Player* ply : players)
	{
		delete(ply);
	}
	std::cout << "" << std::endl;
	std::cout << "GAME OVER" << std::endl;
}

void Game::assemble()
{
	
	int numOf = 0;					// number of players
	bool validate = false;			// check if input is valid


	// introduce the game to the user
	std::cout << "Welcome to Rock Paper Scissors!" << std::endl;

	do
	{
		std::cout << "Please enter a number between 2 and 10: " << std::ends;
		std::cin >> numOf;

		if (numOf < 11 && numOf > 1)
		{
			validate = true;
		}
		else
		{
			std::cout << "Please try again" << std::endl;
		}
	} while (validate == false);
	int random1 = rand() % numOf;

	// ask user to enter names of players
	for (int x = 0; x < numOf; x++)
	{
		std::string name;
		std::cout << "Enter a name for Player " << x << ": " << std::ends;
		std::cin >> name;

		// create a rock paper or scissor from the given name
		int random = rand() % 3 + 1;
		if (random == 1)
		{
			players.push_back(new Rock(name));
		}
		else if (random == 2)
		{
			players.push_back(new Paper(name));
		}
		else if (random == 3)
		{
			players.push_back(new Scissors(name));
		}
		else
		{
			players.push_back(new Player(name, 'E'));
		}
	}
}

void Game::runGame()
{
	bool exitWLoop = false;
	do
	{
		std::cout << "" << std::endl;

		// asks user which two players should fight
		bool exit = false;
		int contend1 = 0;
		int contend2 = 1;
		do
		{
			std::cout << "Please enter the players you want to contend (1.." << players.size << "): " << std::ends;
			std::cin >> contend1;
			std::cin >> contend2;

			if ((contend1 > 0 && contend1 < players.size) && (contend2 > 0 && contend2 < players.size) || (contend1 != contend2))
			{
				exit = true;
			}
			else
			{
				std::cout << "Invalid Numbers, please try again" << std::endl;
			}
		} while (exit == false);
		contend1--;
		contend2--;
	
		players[contend1]->print();
		players[contend2]->print();

		if (*players[contend1] == players[contend2])
		{
			std::cout << players[contend1]->print << " tied " << players[contend2]->print << std::endl;
			players.erase(players.begin + contend2);
		}
		else if(*players[contend1] > players[contend2])
		{
			std::cout << players[contend1]->print << " beat " << players[contend2]->print << std::endl;
			players.erase(players.begin + contend2);
		}
		else if(*players[contend1] < players[contend2])
		{
			std::cout << players[contend2]->print << " beat " << players[contend1]->print << std::endl;
			players.erase(players.begin + contend1);
		}
		else
		{
			std::cout << "Something broke" << std::endl;
		}

		if (players.size() == 1)
		{
			std::cout << players[0]->getName << " is the last player standing!" << std::endl;
			exitWLoop = true;
		}
		if (players.size() == 2 && players[0]->getType() == players[1]->getType())
		{
			std::cout << "It's a stalemate between " << players[1]->getName << " and " << players[0]->getName << std::endl;
			exitWLoop = true;
		}
	} while (exitWLoop == true);
}
