#include "Game.h"

int main()
{
	srand(time(NULL));
	//on cree l'objet GAME (on l'initialise)
	Game game(512, 544);
	//on lui donne entierement le controle
	game.mainGame();
	return 0;
}

