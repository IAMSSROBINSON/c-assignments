// Write a program to compare two strings.

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

	char brian[] = "Kernighan";
	char dennis[] = "Ritchie";

	if (strcmp(brian, dennis) == 0) {
		printf("\n%s & %s\nThe names are the same.\n", brian, dennis);
	} else {
		printf("\n%s & %s\nThe names are not same.\n", brian, dennis);
	}


	return 0;
}