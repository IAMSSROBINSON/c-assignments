// Write a program to print a message the number of times a user specifies.

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

	int amount;
	char verb[] = "times";

	printf("\nPlease enter a number: \n\n");
	scanf("%d", &amount);

	while (amount > 0)
	{
		amount != 1 ? strcpy(verb, "times") : strcpy(verb, "time");

		printf("This message will print %d %s.\n", amount, verb);
		amount --;
	}
	

	return 0;
}