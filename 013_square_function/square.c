// Write a program to find the square of any number using a function.

#include <stdio.h>

float square(float number);


int main (int argc, char *argv[]) {

	float number;

	printf("\nPlease enter a number to be squared: \n");
	scanf("%f", &number);

	printf("\nThe square of %f = %.2f\n", number, square(number));


	return 0;
}


float square (float number) {
	return (number * number);
}