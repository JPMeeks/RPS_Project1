#pragma once
#include "Player.h"
#include <string>
#include <iostream>

class Scissors :
	public Player
{
public:
	Scissors();
	Scissors(std::string name);
	~Scissors();

	void print() override;

	bool operator>(Player* play) override;
	bool operator<(Player* play) override;
	bool operator==(Player* play) override;
};

