// Write a C program to compute the sum of two given integer values then return triple their sum. Display the result.

#include <stdio.h>

int main (int argc, char *argv[]){

	int a = 40, b = 2;
	int sum = a + b;
	int triple = sum * 3;

	printf("\nThe sum of %d + %d = %d\n", a, b, sum);
	printf("The sum of %d multiplied by 3 = %d\n\n", sum, triple);


	return 0;
}


/*

DISPLAYED OUTPUT:

The sum of 40 + 2 = 42
The sum of 42 multiplied by 3 = 126

*/
