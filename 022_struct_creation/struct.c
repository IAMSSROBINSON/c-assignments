// Create a program that stores user details inside a struct

#include <stdio.h>
#include <string.h>

// create a player struct
typedef struct user {
	char userName[20];
	char userEmail[30];
	int userAge;
} client;

// main function
int main (int argc, char *argv[]) {

	client user1; // declare struct variable
	strcpy(user1.userName, "SSR"); // strcpy(destination, source)
	strcpy(user1.userEmail, "iamssrobinson@gmail.com"); // strcpy(destination, source)
	user1.userAge = 1000;

	printf("\nUsername: %s\n", user1.userName);
	printf("Email: %s\n", user1.userEmail);
	printf("Age: %d\n\n", user1.userAge);

	return 0;
}