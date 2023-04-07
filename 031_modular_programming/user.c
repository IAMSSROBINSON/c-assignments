#include <stdio.h>
#include "user.h"
#include <string.h>

void formData(){
	char userEmail[20];
	char userPassword[20];

	printf("Please enter your email to login: \n");
	scanf("%s", userEmail);
	
	printf("Please enter your password to login: \n");
	scanf("%s", userPassword);

	login(userEmail, userPassword);
}

void login(char userEmail[20], char userPassword[20]){
	printf("You are logged in!\nYour email address is: %s\n\n", userEmail);
}

void logout(){
	char response[3];

	printf("Do you want to logout? \"YES\" or \"NO\" \n");
	scanf("%s", response);
	
	strcmp(response, "YES") ? printf("You did not enter \"YES\", you are still loggedIn.\n") : printf("You are logged out!\n");
}
