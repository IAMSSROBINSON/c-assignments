// Write a C program to print all odd numbers between 1 to 100.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int count = 100;

	printf("\nOdd numbers between 1 - 100:\n\n");

	for (int i = 1; i <= count; i++)
	{
		if(i % 2 != 0){
			printf("%d ", i);
			if(i == 51){
				printf("\n");
			}
			if(i == 99){
				printf("\n\n");
			}
		}
	}


	return 0;
}