using namespace std;
#include "Region.h"




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

