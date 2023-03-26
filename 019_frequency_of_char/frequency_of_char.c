// Write a program in C to find the frequency of a character.

#include <stdio.h>
#include <string.h>

// declare functions
int getStringLength(char *string);
int getFrequencyOfCharacter(char *string, char character, int stringLength);
void printer (char *string, char character, int frequency);


// main function implementation
int main (int argc, char *argv[]) {

	// variable declarations
	char string[] = "hello";
	char character = 'l';

	// function calls
	int stringLength = getStringLength(string);
	int frequencyOfCharacter = getFrequencyOfCharacter(string, character, stringLength);
	printer(string, character, frequencyOfCharacter);


	return 0;
}


// function definition: calculate the length of a string
int getStringLength (char *string) {

	return strlen(string);
}


// function definition: calculate how many times char appears in string
int getFrequencyOfCharacter(char *string, char character, int stringLength) {

	int frequency = 0;

	for(int i = 0; i < stringLength; i++){
		if(string[i] == character){
			frequency++;
		} 
	}
	
	return frequency;
}

// function definition: print results
void printer (char *string, char character, int frequencyOfCharacter) {

	printf("\nFound character: %c\nIn string: %s\nThe frequency of the character is: %d\n\n",character, string, frequencyOfCharacter);
}


/*

Pseudocode:

INPUT: 'l' FROM  'hello'
OUTPUT: l, l, (2)

FOR as long as a string is in characters
IF an individual char in the string is the same as a given char then increase a counter by 1
RETURN final count

*/