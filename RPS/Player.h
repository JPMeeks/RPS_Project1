#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	char type;
public:
	Player();
	Player(std::string name, char type);
	virtual ~Player();

	std::string getName();
	char getType();
	virtual void print();

	virtual bool operator>(Player* play);
	virtual bool operator<(Player* play);
	virtual bool operator==(Player* play);
};

