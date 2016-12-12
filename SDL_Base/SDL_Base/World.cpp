using namespace std;
#include "World.h"

vector<Region> regionList;

int World::Initialise()
{
	GlobalCult worldCult;
		worldCult.Initialise();

	//Region regionList[2];
		Region region1;
		Region region2;

		
		region1.Initialise("adsasdsa");
		regionList.push_back(region1);

		region2.Initialise("dsadasddsgf");	
		regionList.push_back(region2);

		regionList.at(0).report();
		regionList.at(1).report();



		/*for each (Region reg in regionList)
		{
			reg.Initialise();
		}*/
		
		

	cout<<"World created"<<endl;

	return 0;
}

World::World()
{
}


World::~World()
{
}

void World::getRegionInformation(int whichRegion)
{
	 regionList[whichRegion].report();
}
