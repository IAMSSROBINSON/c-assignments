// Write a program to check if a given number is positive, negative or equal to 0.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int number;

	printf("\nPlease enter a number: \n");
	scanf("%d", &number);

	if(number > 0){
		printf("\nThe number you entered is positive!\n");
	} else if(number < 0){
		printf("\nThe number you entered is negative!\n");
	} else {
		printf("\nThe number you entered is equal to 0!\n");
	}


	return 0;
}