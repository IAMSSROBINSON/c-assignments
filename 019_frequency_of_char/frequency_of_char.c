// Write a program in C to find the frequency of a characters

#include <stdio.h>
#include <string.h>

int stringLength;
int counter = 0;

void frequencyOfCharacter (char *string, char character) {

	stringLength = strlen(string);

	for(int i = 0; i < stringLength; i++){
		if(string[i] == character){
			counter++;
		} 
	}
	printf("\nFound character: %c\nIn string: %s\nThe frequency char is: %d\n\n",character, string, counter);
}

int main (int argc, char *argv[]) {

	char string[] = "hello";
	char character = 'l';
	
	frequencyOfCharacter(string, character);


	return 0;
}


/*

INPUT: 'l' FROM  'hello'
OUTPUT: l, l, (2)

FOR as long as a string is in characters
IF an individual char in the string is the same as a given char then increase a counter by 1
RETURN final count

*/