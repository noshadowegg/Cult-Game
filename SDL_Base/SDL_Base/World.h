#pragma once
#include "MasterInclude.h"
#include "Region.h"
#include "GlobalCult.h"
class World
{
public:
	int Initialise();
	
	World();
	~World();

	string getRegionInformation(int whichRegion);
};

