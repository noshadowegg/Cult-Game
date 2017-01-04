using namespace std;
#include "Game.h"
#include <iostream>

World gameWorld;

int Game::Initialise()
{
		gameWorld.Initialise();
		cout<<"Game created"<<endl;
		displayRegionInformation(0);
		displayRegionInformation(1);
		displayRegionInformation(2);
		displayRegionInformation(3);
		displayRegionInformation(4);
		displayRegionInformation(5);

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

