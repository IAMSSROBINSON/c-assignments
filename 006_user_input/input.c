// Write a C program to compute the sum of two integer values taken via user input, return the sum total and display the result.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int firstNumber, secondNumber, total;
	
	printf("\nPlease enter your first number: \n");
	scanf("%d", &firstNumber);

	printf("Please enter your second number: \n");
	scanf("%d", &secondNumber);

	total = firstNumber + secondNumber;

	printf("\n%d + %d = %d\n\n", firstNumber, secondNumber, total);


	return 0;
}