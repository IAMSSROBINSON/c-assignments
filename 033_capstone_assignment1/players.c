#include <stdio.h>
#include <stdlib.h>
#include "players.h"

// launch menu1 for user to make first menu selection
int menu1()
{

  int menuSelection;

  printf("\n-------MENU--------\n");
  printf("1: Create a player\n");
  printf("2: Create 3 players\n");
  printf("3: Create dynamic amount of players\n");
  scanf("%d", &menuSelection);

  return menuSelection;
}

// convert menu selection into number of players chosen by user to create
int validation(int menuSelection)
{

  int numberOfPlayers = 0;

  switch (menuSelection)
  {
  case 1:
    numberOfPlayers = 1;
    break;

  case 2:
    numberOfPlayers = 3;
    break;

  case 3:
    printf("\nHow many players would you like to create: \n");
    scanf("%d", &numberOfPlayers);
    break;

  default:
    printf("\nInvalid selection.\nEnd of program.\n\n");
    exit(1);
  }

  return numberOfPlayers;
}

CREATEPLAYER *allocateMemory(int numberOfPlayers)
{

  CREATEPLAYER *arrayOfPlayers = NULL;

  arrayOfPlayers = calloc(numberOfPlayers, sizeof(CREATEPLAYER));
  if (arrayOfPlayers != NULL)
  {
    printf("\nStatus: Success!\nMemory allocated for %d players.\n", numberOfPlayers);
  }
  else
  {
    printf("\nStatus: Failed!\nMemory could not be allocated.\nEnd of program.\n");
    exit(1);
  }

  return arrayOfPlayers;
}

CREATEPLAYER *populateArray(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers)
{

  printf("\nPlease enter player details:\n");

  for (int i = 0; i < numberOfPlayers; i++)
  {
    arrayOfPlayers[i].id = i + 1;
    printf("\nEnter name: ");
    scanf("%s", arrayOfPlayers[i].name);
    printf("Enter age: ");
    scanf("%d", &(arrayOfPlayers[i]).age);
  }
  return arrayOfPlayers;
}

// print out the player details of the array
void printArray(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers)
{

  printf("\n\nPlayer Print Out:\n");

  for (int i = 0; i < numberOfPlayers; i++)
  {
    printf("\nID: %d", arrayOfPlayers[i].id);
    printf("\nNAME: %s", arrayOfPlayers[i].name);
    printf("\nAGE: %d\n", arrayOfPlayers[i].age);
  };
}

int menu2()
{

  int menu2selection = 0;

  printf("\n-------MENU2--------\n");
  printf("1: Add new player\n");
  printf("2: Delete a player by ID\n");
  printf("3: Search a player by ID\n\n");
  printf("4: Quit program\n\n");
  scanf("%d", &menu2selection);

  return menu2selection;
}

// validate menu2option chosen to determine path of program
void validation2(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2selection)
{

  int menu2_addPlayers = 0;
  int searchId = 0;

  switch (menu2selection)
  {

  case 1:
    printf("How many players would you like to add:\n");
    scanf("%d", &menu2_addPlayers);
    allocateMorePlayers(arrayOfPlayers, numberOfPlayers, menu2_addPlayers);
    break;

  case 2:
    printf("What is the ID of the player you would like to delete:\n");
    scanf("%d", &searchId);
    deleteById(arrayOfPlayers, numberOfPlayers, searchId);
    break;

  case 3:
    printf("What is the ID of the player you would like to search:\n");
    scanf("%d", &searchId);
    searchById(arrayOfPlayers, numberOfPlayers, searchId);
    break;

    break;

  case 4:
    printf("\nQuit program.\nEnd of program.\n\n");
    exit(1);
    break;

  default:
    printf("\nInvalid selection.\nEnd of program.\n\n");
    menu2();
  }
}

void allocateMorePlayers(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2_addPlayers)
{
  printf("\nOption 1 chosen:\nCreate this many players: %d\n", menu2_addPlayers);

  arrayOfPlayers = realloc(arrayOfPlayers, ((numberOfPlayers + menu2_addPlayers) * sizeof(CREATEPLAYER)));
  if (arrayOfPlayers == NULL)
  {
    printf("\nStatus: Failed!\nMemory could not be allocated.\nEnd of program.\n");
    exit(1);
  }
  else
  {
    printf("\nStatus: Success!\nMemory allocated\n");
    addPlayerDetails(arrayOfPlayers, numberOfPlayers, menu2_addPlayers);
  }
}

void addPlayerDetails(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int menu2_addPlayers)
{
  for (int i = numberOfPlayers; i < (numberOfPlayers + menu2_addPlayers); i++)
  {
    arrayOfPlayers[i].id = i + 1;
    printf("\nEnter name: ");
    scanf("%s", arrayOfPlayers[i].name);
    printf("Enter age: ");
    scanf("%d", &(arrayOfPlayers[i]).age);
  }

  printArray(arrayOfPlayers, (numberOfPlayers + menu2_addPlayers));
}

void deleteById(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int searchId)
{

  CREATEPLAYER *newPlayerArray = NULL;

  newPlayerArray = calloc((numberOfPlayers - 1), sizeof(CREATEPLAYER));

  if (newPlayerArray == NULL)
  {
    printf("Status: Failed! Memory could not be allocated.\nEnd of program.");
    exit(1);
  }

  int j = 0;
  for (int i = 0; i < numberOfPlayers; i++)
  {
    if (arrayOfPlayers[i].id != searchId)
    {
      newPlayerArray[j] = arrayOfPlayers[i];
      j++;
    }
  }
  printArray(newPlayerArray, (numberOfPlayers - 1));
}

void searchById(CREATEPLAYER *arrayOfPlayers, int numberOfPlayers, int searchId)
{

  CREATEPLAYER *searchPlayerArray = NULL;

  searchPlayerArray = calloc((1), sizeof(CREATEPLAYER));

  if (searchPlayerArray == NULL)
  {
    printf("Status: Failed! Memory could not be allocated.\nEnd of program.");
    exit(1);
  }

  int j = 0;
  for (int i = 0; i < numberOfPlayers; i++)
  {
    if (arrayOfPlayers[i].id == searchId)
    {
      printf("\nStatus: Success!\nPlayer found.\n");
      searchPlayerArray[j] = arrayOfPlayers[i];
      j++;
    }
  }
  printArray(searchPlayerArray, (1));
}
