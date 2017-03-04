#include "Paper.h"
#include <string>
#include <iostream>

Paper::Paper()
{
}

Paper::Paper(std::string name) : Player(name, 'p')
{

}


Paper::~Paper()
{
	std::cout << getName() << "'s paper is crumpled!" << std::endl;
}

void Paper::print()
{
	std::cout << getName() << " (--- Paper)" << std::endl;
}

bool Paper::operator>(Player * play)
{
	bool check = false;
	if (play->getType == 'r')
	{
		check = true;
	}
	return check;
}

bool Paper::operator<(Player * play)
{
	bool check = false;
	if (play->getType == 's')
	{
		check = true;
	}
	return check;
}

bool Paper::operator==(Player * play)
{
	bool check = false;
	if (play->getType == 'p')
	{
		check = true;
	}
	return check;
}
