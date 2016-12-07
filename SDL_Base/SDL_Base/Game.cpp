using namespace std;
#include "Game.h"
#include <iostream>

World gameWorld;

int Game::Initialise()
{
		gameWorld.Initialise();

		cout<<"Game created"<<endl;
		displayRegionInformation(1);
		displayRegionInformation(2);

		return 0;
}

void Game::displayRegionInformation(int whichRegion)
{
	cout << gameWorld.getRegionInformation(whichRegion) << endl;
}

Game::Game()
{

}


Game::~Game()
{
}

