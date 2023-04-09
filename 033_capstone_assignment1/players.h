#ifndef PLAYERS_H
#define PLAYERS_H

typedef struct Player {
	int id;
	char name[20];
	int age;
} CREATEPLAYER;

int menu1();
int validation(int menuSelection);
CREATEPLAYER *allocateMemory(int numberOfPlayers);
CREATEPLAYER *populateArray(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers);
void printArray(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers);
int menu2();
void validation2(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2selection);
void allocateMorePlayers(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2_addPlayers);
void addPlayerDetails (CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2_addPlayers);
void deleteById(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int searchId);
void searchById(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int searchId);




#endif