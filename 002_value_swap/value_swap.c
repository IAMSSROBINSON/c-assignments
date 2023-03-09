// Write a C program to swap values of two variables.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int a = 40, b = 2;

	printf("\nBEFORE SWAP:\n"); // BEFORE SWAP:
	printf("The value of A: %d\n", a); // The value of A: 40
	printf("The value of B: %d\n\n", b); // The value of B: 2

	int c = a;
	a = b;
	b = c;

	printf("AFTER SWAP:\n"); // AFTER SWAP:
	printf("The value of A: %d\n", a); // The value of A: 2
	printf("The value of B: %d\n\n", b); // The value of B: 40


	return 0;
}