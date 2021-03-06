using namespace std;
#include "World.h"

vector<Region> regionList;

int regionCount = 0;

struct REGIONSTATS {  
    string name;  
    int pop;
	int infr;
	int str;
	int stab;
	int wlth;
	int seats;
} tempStats;


int World::Initialise()
{
	GlobalCult worldCult;
		worldCult.Initialise();


	cout << "read begin"<<endl;
		
		string line;
		ifstream myfile;

		string delimiter = ",";
		string token;
		size_t pos = 0;
		int statID;

		myfile.open( "regions.csv" );
	  if (myfile)
		{
		while (getline( myfile, line ).good())
		  {
			statID=1;
			cout<<line<<endl;
			while ((pos = line.find(delimiter)) != string::npos) 
			{
				token = line.substr(0, pos);

				switch(statID){
				case 1:
					tempStats.name=token;
					break;
				case 2:
					tempStats.pop=stoi(token);
					break;
				case 3:
					tempStats.infr=stoi(token);
					break;
				case 4:
					tempStats.str=stoi(token);
					break;
				case 5:
					tempStats.stab=stoi(token);
					break;
				case 6:
					tempStats.wlth=stoi(token);
					break;
				case 7:
					tempStats.seats=stoi(token);
					break;
				default:
					cout<<"Regional Read Error"<<endl;
				}
				line.erase(0, pos + delimiter.length());
				statID++;
			}
			Region tmpRegion(tempStats.name,tempStats.pop,tempStats.infr,tempStats.str,tempStats.stab,tempStats.wlth,tempStats.seats);
			regionList.push_back(tmpRegion);
			regionCount++;
		  }
		myfile.close();
		}

	  cout << "read end ("<<regionCount<<" entries read)"<<endl;
		
	  for(int i=0; i < regionList.size(); i++)
	{
		regionList[i].Initialise();
	}

	/*	 for(int i=0; i < regionList.size(); i++)
	{
		regionList[i].report();
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

void World::listRegions()
{
	for(int i=0; i < regionList.size(); i++)
	{
		cout<< i <<": "<<regionList[i].regionName<<endl;
	}
}