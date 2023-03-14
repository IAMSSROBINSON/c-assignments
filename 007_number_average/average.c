// Write a program in C to read 10 numbers from the keyboard and find their average.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int numberOfValues = 10;
	float value, total = 0, average;

	for (int i = 0; i < numberOfValues; i++)
	{
		printf("Please enter number %d: \n", i+1);
		scanf("%f", &value);
		total += value;
	}

	average = total / numberOfValues;

	printf("\nThe sum total of all values is: %.2f\n", total);
	printf("The number of values taken was: %d\n", numberOfValues);
	printf("The average is: %.2f\n\n", average);


	return 0;
}

