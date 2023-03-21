// Write a program to find the factorial of a given number.

#include <stdio.h>

int getFactorial(int number);


int main (int argc, char *argv[]) {

	int number;
	printf("\nPlease enter a number:\n");
	scanf("%d", &number);

	printf("\nThe factorial of %d is: %d\n\n", number, getFactorial(number));


	return 0;
}


int getFactorial (int number) {

	int factorial = 1;

	for (int i = number; i > 0; i--)
	{
		factorial *= i;
	}
	

	return factorial;
}