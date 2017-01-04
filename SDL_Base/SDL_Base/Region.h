#pragma once
#include "MasterInclude.h"
#include "regionCult.h"
#include "trait.h"
class Region
{
public:
	int Initialise();

	Region(string,int,int,int,int,int);

	Region();
	~Region();

	void report();

	string regionName;
	regionCult cult;
	trait traitList[10];

	int basePopulation;
	int population;

	int baseInfrastructure;
	int infrastructure;

	int baseStrength;
	int strength;

	int baseStability;
	int stability;

	int baseWealth;
	int wealth;
};

