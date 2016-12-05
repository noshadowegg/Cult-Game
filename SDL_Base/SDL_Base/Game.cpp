using namespace std;
#include "Game.h"
#include <iostream>

int Game::Initialise()
{
	World gameWorld;
		gameWorld.Initialise();

		cout<<"Game created"<<endl;

		return 0;
}

Game::Game()
{

}


Game::~Game()
{
}
