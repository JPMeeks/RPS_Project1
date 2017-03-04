#include "Rock.h"
#include <string>
#include <iostream>


Rock::Rock()
{
}

Rock::Rock(std::string name) : Player(name, 'r')
{

}


Rock::~Rock()
{
	std::cout << getName() << "'s rock is pretty heavy!" << std::endl;
}

void Rock::print()
{
	std::cout << getName() << " (O Rock)" << std::endl;
}

bool Rock::operator>(Player * play)
{
	bool check = false;
	if (play->getType == 's')
	{
		check = true;
	}
	return check;
}

bool Rock::operator<(Player * play)
{
	bool check = false;
	if (play->getType == 'p')
	{
		check = true;
	}
	return check;
}

bool Rock::operator==(Player * play)
{
	bool check = false;
	if (play->getType == 'r')
	{
		check = true;
	}
	return check;
}
