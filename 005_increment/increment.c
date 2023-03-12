// Use the correct operator to increase the value of a variable x by 1 and the display results.

#include <stdio.h>

	int main (int argc, char *argv[]) {

	// score scenario:
	int score = 100;

	printf("\nYour current score is %d\n", score);
	printf("\nCongratulations! You scored an extra point.\n");
	printf("\nYour current score is %d\n", ++score);

	// scenario line separator
	printf("\n-----------------------------------------------------\n\n");

	// Year scenario:
	int year = 2023;
	printf("The current year is %d\n", year++);
	printf("\nThe next year will be %d\n\n", year);

	
	return 0;
}


/*

OUTPUT:

Your current score is 100

Congratulations! You scored an extra point.

Your current score is 101

-----------------------------------------------------

The current year is 2023

The next year will be 2024

*/