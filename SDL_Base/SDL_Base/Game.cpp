using namespace std;
#include "Game.h"
#include <iostream>

World gameWorld;

int Game::Initialise()
{
		gameWorld.Initialise();
		cout<<"Game created"<<endl;


		return 0;
}

void Game::displayRegionInformation(int whichRegion)
{
	gameWorld.getRegionInformation(whichRegion);
}

Game::Game()
{

}


Game::~Game()
{
}

int Game::recallRegion()
	{
		gameWorld.listRegions();
		cout<<"==================="<<endl;
		int index=-1;
		while (index < 0 || index>gameWorld.regionList.size())
		{
		cout << "Select Region Index"<<endl;
		cin >> index;
		}
		cout<<"==================="<<endl;
		return index;
	}

void Game::options()
{
	int wait;
	cout<<"==================="<<endl;
		cout<< "Do something?"<<endl
			<< "1. Recall Region" << endl
			<< "2. " << endl
			<< "3. " << endl
			<< "4. " << endl
			<< "5. " << endl
			<< "6. " << endl
			<< "0. Quit" << endl;

		cin >> input;
		cout<<"==================="<<endl;

		switch (input)
		{
		case 1:
			displayRegionInformation(recallRegion());
			options();
			break;
		case 2:
			
			options();
			break;
		case 3:
			
			options();
			break;
		case 4:
			
			options();
			break;
		case 5:
			
			options();
			break;
		case 6:
			
			options();
			break;
		case 0:
			cout<<":(";
			break;
		default:
			cout << "Invalid"<<endl;
			options();
			break;
		}

}
