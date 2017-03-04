#pragma once
#include "Player.h"
#include <string>
#include <iostream>

class Rock : public Player
{
public:
	Rock();
	Rock(std::string name);
	~Rock();

	void print() override;

	bool operator>(Player* play) override;
	bool operator<(Player* play) override;
	bool operator==(Player* play) override;
};

