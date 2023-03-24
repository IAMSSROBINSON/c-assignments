// Write a program to copy one string to another string

#include <stdio.h>
#include <string.h>

int main () {

	// Replace the string 'Bonjour' with the string 'Au revoir'
	char hello[20] = "Bonjour";
	char goodbye[20] = "Au revoir";
	
	printf("\nBefore:\n");
	printf("%s\n", hello);
	printf("%s\n", goodbye);

	strcpy(hello, goodbye);

	printf("\nAfter:\n");
	printf("%s\n", hello);
	printf("%s\n", goodbye);


	return 0;
}