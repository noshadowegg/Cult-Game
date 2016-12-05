using namespace std;
#include "World.h"

int World::Initialise()
{
	GlobalCult worldCult;
		worldCult.Initialise();

	Region regionList[2];
		Region region1;
		Region region2;

		regionList[0]=region1;
		regionList[1]=region2;

		for each (Region reg in regionList)
		{
			reg.Initialise();
		}


	cout<<"World created"<<endl;

	return 0;
}

World::World()
{
}


World::~World()
{
}
