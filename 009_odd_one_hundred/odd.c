// Write a C program to print all odd number between 1 to 100.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int count = 100;

	printf("Odd numbers between 1 - 100:\n");

	for (int i = 1; i <= count; i++)
	{
		if(i % 2 != 0){
			printf("%d\n", i);
		}
	}
	

	return 0;
}