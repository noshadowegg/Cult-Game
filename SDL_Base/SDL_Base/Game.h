#pragma once
#include "MasterInclude.h"
#include "World.h"

class Game
{
public:
	Game();
	~Game();

	int Initialise();

	void displayRegionInformation(int whichRegion);
};

