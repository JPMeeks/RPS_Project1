#include "Player.h"
#include <string>
#include <iostream>


Player::Player()
{
}

Player::Player(std::string nm, char ty)
{
	name = nm;
	type = ty;
}


Player::~Player()
{
	std::cout << "Bye, " << name << std::endl;
}

std::string Player::getName()
{
	return name;
}

char Player::getType()
{
	return type;
}

void Player::print()
{

}

bool Player::operator>(Player * play)
{
	return false;
}

bool Player::operator<(Player * play)
{
	return false;
}

bool Player::operator==(Player * play)
{
	return false;
}


