// Write a program to ask a user to enter user details for 2 or more users / players and write those details to a file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct declaration for grouping user details
typedef struct Player {

		int id;
		char name[20];
		int age;

} CREATEPLAYER;

// function prototypes
int numberOfPlayers();
CREATEPLAYER *allocateMemory(CREATEPLAYER *arrayOfPlayers, int amountPlayers);
CREATEPLAYER *populateArray(CREATEPLAYER *arrayOfPlayers, int amountPlayers);
void writeArrayContentToFile(CREATEPLAYER *arrayOfPlayers, int amountPlayers);


// main program function
int main (int argc, char *argv[]) {

	// declare variables
	int amountPlayers = 0;
	CREATEPLAYER *arrayOfPlayers;
	
	// call functions
	amountPlayers = numberOfPlayers();
	printf("number of players is: %d\n", amountPlayers);
	arrayOfPlayers = allocateMemory(arrayOfPlayers, amountPlayers);
	populateArray(arrayOfPlayers, amountPlayers);
	writeArrayContentToFile(arrayOfPlayers, amountPlayers);
	

	free(arrayOfPlayers);
	return 0;
}


// function definitions

// get how many players will be required
int numberOfPlayers () {

	int amountPlayers  = 0;

	printf("\nHow many players do you want to create: \n");
	fscanf(stdin, "%d", &amountPlayers);

	return amountPlayers;
}


// allocate space in memory for array of players
CREATEPLAYER *allocateMemory (CREATEPLAYER *arrayOfPlayers, int amountPlayers) {

	arrayOfPlayers = NULL;

	arrayOfPlayers = calloc(amountPlayers, sizeof(CREATEPLAYER));
	if(arrayOfPlayers == NULL){
		printf("\nMemory not allocated.\n");
		exit(1);
	}
	printf("\nMemory allocated.\n");

	return arrayOfPlayers;
}


// get user details for all users in array
CREATEPLAYER *populateArray (CREATEPLAYER *arrayOfPlayers, int amountPlayers) {

	for (int i = 0; i < amountPlayers; i++)
	{

		printf("ID: %d\n", i+1);
		arrayOfPlayers[i].id = i+1;

		printf("Enter name: ");
		scanf("%s", arrayOfPlayers[i].name);

		printf("Enter age: ");
		scanf("%d", &(arrayOfPlayers[i]).age);

		printf("\n\n");
	
	}

	return arrayOfPlayers;
}


// write the contents of the array to a file
void writeArrayContentToFile (CREATEPLAYER *arrayOfPlayers, int amountPlayers) {

	// open / create a file is not exists
	FILE *file_ptr;
	file_ptr = fopen("database.txt", "w");
	if(file_ptr == NULL){
		printf("\nFile not opened.\n");
		exit(1);
	}


	// write the content of the array to the file
	for (int i = 0; i < amountPlayers; i++)
	{
		fprintf(file_ptr, "ID: %d", arrayOfPlayers[i].id);
		fputs(" \n", file_ptr);

		fputs("NAME: ", file_ptr);
		fputs(arrayOfPlayers[i].name, file_ptr);

		fprintf(file_ptr, "\nAGE : %d", arrayOfPlayers[i].age);
		fputs(" \n\n", file_ptr);
	}
	
	fclose(file_ptr);
}
