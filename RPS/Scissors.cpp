#include "Scissors.h"
#include <string>
#include <iostream>

Scissors::Scissors()
{
}

Scissors::Scissors(std::string name) : Player(name, 's')
{

}


Scissors::~Scissors()
{
	std::cout << getName() << "'s scissors are getting rusty!" << std::endl;
}

void Scissors::print()
{
	std::cout << getName() << " (8>< Scissors)" << std::endl;
}

bool Scissors::operator>(Player * play)
{
	bool check = false;
	if (play->getType == 'p')
	{
		check = true;
	}
	return check;
}

bool Scissors::operator<(Player * play)
{
	bool check = false;
	if (play->getType == 'r')
	{
		check = true;
	}
	return check;
}

bool Scissors::operator==(Player * play)
{
	bool check = false;
	if (play->getType == 's')
	{
		check = true;
	}
	return check;
}
