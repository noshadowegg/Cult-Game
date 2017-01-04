using namespace std;
#include "Region.h"




int Region:: Initialise()
{
	
	cout<<"Region '"<< regionName <<"' created"<<endl;

	population = basePopulation;
	infrastructure = baseInfrastructure;
	strength = baseStrength;
	stability = baseStability;
	wealth = baseWealth;

	return 0;
}

Region::Region(string name,int pop,int infr,int str,int stab,int wlth)
{
	regionName = name;
	basePopulation = pop;
	baseInfrastructure = infr;
	baseStrength = str;
	baseStability = stab;
	baseWealth = wlth;
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

