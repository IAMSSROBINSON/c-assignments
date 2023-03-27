// Create a program to store user generated array values then display values

#include <stdio.h>
#include <stdlib.h>

// function declarations
int numberOfElements ();
int *getArrayElements (int elementsNum);
void printer (int *arrayElements, int elementsNum);


// main function
int main (int argc, char *argv[]) {

	int elementsNum;
	int *arrayElements;
	
	elementsNum = numberOfElements();
	arrayElements = getArrayElements(elementsNum);

	printer(arrayElements, elementsNum);

	// free up space in memory from array
	free(arrayElements);
	return 0;
}


// gets how many elements will be in the array
int numberOfElements () {
	int elements = 0;
	printf("\nHow many elements will be stored: \n");
	scanf("%d", &elements);

	return elements;
}


// populate array with elements
int *getArrayElements (int elementsNum) {

	int *newArray = 0;

	// allocate space in memory for array elements
	newArray = malloc(elementsNum * sizeof(int));
	
	// validate memory was allocated
	if (newArray == 0){
		exit(1);
	}

	// save user entries to array
	for(int i = 0; i < elementsNum; i++){
		printf("Please enter a number: %d / %d\n", i+1, elementsNum);
		scanf("%d", &newArray[i]);
	}

	return newArray;
}


// prints array values
void printer (int *arrayElements, int elementsNum) {

	printf("\nLIST:\n");
	for(int i = 0; i < elementsNum; i++){
		printf("%d Entry: %d\n",i+1, arrayElements[i]);
	}
}