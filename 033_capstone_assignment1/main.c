#include <stdio.h>
#include <stdlib.h>
#include "players.h"

int main () {
	// declare variables
	int menuSelection;
	int numberOfPlayers;
	CREATEPLAYER *arrayOfPlayers;
	int menu2selection;


	menuSelection =  menu1();
	numberOfPlayers = validation(menuSelection);
	arrayOfPlayers = allocateMemory(numberOfPlayers);
	arrayOfPlayers = populateArray(arrayOfPlayers, numberOfPlayers);
	printArray(arrayOfPlayers, numberOfPlayers);
	menu2selection = menu2();
	validation2(arrayOfPlayers, numberOfPlayers, menu2selection);


	free(arrayOfPlayers);
	return 0;
}

