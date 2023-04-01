// Display two versions of a const.

#include <stdio.h>
#define MAX 10

int main (int argc, char *argv[]) {

	printf("\n#define MAX %d\nMacro preprocessor directive with value: %d\nCreates no predefined space in memory as it has no defined data-type",MAX, MAX );

	const int MIN = 4;

	printf("\n\nconst int MIN = value;\nint data-type with value: %d\nCreates space in memory for int data-type\n\n", MIN);


	return 0;
}