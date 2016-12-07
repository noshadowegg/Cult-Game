using namespace std;
#include "Region.h"

int infrastructure = 0;

int Region:: Initialise()
{
	cout<<"Region created"<<endl;
	infrastructure = 5;

	return 0;
}

Region::Region()
{
}


Region::~Region()
{
}

string Region::provideRegionInformation()
{
	return "Infrastructure: " + to_string(infrastructure);
}

