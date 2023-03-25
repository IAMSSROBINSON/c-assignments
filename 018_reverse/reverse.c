// Write a program in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>

int main (int argc, char *argv[]) {

	int array[5] = {2, 4, 6, 8, 10};
	int length =  (sizeof(array) / sizeof(int));

	printf("FORWARD:\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}


	printf("\nBACKWARD:\n");
	for (int i = length-1; i >= 0; --i)
	{
		printf("%d\n", array[i]);
	}



	return 0;
}

/*

INPUT: int array[5] = {2, 4, 6, 8, 10};
OUTPUT: 10, 8, 6, 4, 2



first READ the values in the array
*/