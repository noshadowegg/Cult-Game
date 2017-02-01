using namespace std;

#include "Game.h"




int main( int argc, char* args[] ) 
	{ 
		//Start SDL SDL_Init( SDL_INIT_EVERYTHING ); 
		//Quit SDL SDL_Quit(); 


		Game mainGame;
		mainGame.Initialise();

		mainGame.options();


		return 0; 
}


