// Write a C program to print all letters of the alphabet from a to z.

#include <stdio.h>

int main (int argc, char *argv[]) {

	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c\n", i);
	}
	

	return 0;
}


/*

** if i = 'A' (uppercase) and i <= 'z' (lowercase): 
	- output = uppercase and lowercase alphabet + symbols

** if i = 'a' (lowercase) and i <= 'z' (lowercase): 
	- output = lowercase alphabet

** if i = 'A' (uppercase) and i <= 'Z' (uppercase): 
	- output = uppercase alphabet
	
*/