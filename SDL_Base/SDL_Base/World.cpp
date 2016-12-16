using namespace std;
#include "World.h"

vector<Region> regionList;

int World::Initialise()
{
	GlobalCult worldCult;
		worldCult.Initialise();


	cout << "read begin"<<endl;
		string line;
		ifstream myfile;
		myfile.open( "regions.txt" ); // I dont think file is being opened properly. No matter what, read data is nil
	  if (myfile)  // same as: if (myfile.good())
		{
		while (getline( myfile, line ))  // same as: while (getline( myfile, line ).good())
		  {
		  if (true)
			{
			cout << line << endl;
			}
		  }
		myfile.close();
		}
	  cout << "read end"<<endl;

		Region region1("Australia",24309330,0,0,0,0); //
		Region region2("n",11,0,0,0,0); //
	

		regionList.push_back(region1);
		regionList.push_back(region2);

		//regionList.at(0).report();
		
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
