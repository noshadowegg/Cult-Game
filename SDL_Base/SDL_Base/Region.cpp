using namespace std;
#include "Region.h"
#include "regionCult.h"
#include "trait.h"


string regionName;
regionCult cult;
trait traitList[10];

int basePopulation;
int population;
int baseInfrastructure = 0;
int infrastructure = 0;
int baseStrength;
int strength;
int baseStability;
int stability;
int baseWealth;
int wealth;

int Region:: Initialise(string name)
{
	
	cout<<"Region created"<<endl;

	regionName = name;
	basePopulation = 9;
	baseInfrastructure = rand();
	baseStrength = 13;
	baseStability = 15;
	baseWealth = 21;
	
	population = basePopulation;
	infrastructure = baseInfrastructure;
	strength = baseStrength;
	stability = baseStability;
	wealth = baseWealth;

	return 0;
}

Region::Region()
{
	
}


Region::~Region()
{
}

void Region::report()
{
	 
		cout	<< "Region Name: "		<< regionName
		<< endl << "Population: "		<< population
		<< endl << "Infrastructure: "	<< infrastructure
		<< endl << "Strength: "			<< strength
		<< endl << "Stability: "		<< stability
		<< endl << "Wealth: "			<< wealth
		<< endl;
}

