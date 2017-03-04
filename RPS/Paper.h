#pragma once
#include "Player.h"
#include <string>
#include <iostream>

class Paper :
	public Player
{
public:
	Paper();
	Paper(std::string name);
	~Paper();

	void print() override;

	bool operator>(Player* play) override;
	bool operator<(Player* play) override;
	bool operator==(Player* play) override;
};

