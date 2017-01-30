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

