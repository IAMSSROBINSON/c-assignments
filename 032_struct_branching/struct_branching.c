// Write a program that adds a set of people with their ages, in an array of structures call it Person, and then removes all those who are twenty years old and older.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global variables to be used in program
static int id = 0;
static int counter = 0;

// declare structure blueprint for a person
typedef struct person
{
	int id;
	char name[20];
	int age;
} Person;

int main (int argc, char *argv[]) {
	// user will amend amount of people to take details of with userInput
	int amount = 0;

	// declare new pointer variable of Person/struct data-type, this will be an array
	Person *newPerson;

	// ask the user to input how many people to take details of
	printf("How many people: \n");
	scanf("%d", &amount);

	// create space for the amount of people being entered for
	newPerson = malloc(amount * sizeof(Person));

	for (int i = 0; i < amount; i++)
	{
		// increase unique id number for each iteration of loop
		id++;

		// apply id to each person account
		newPerson[i].id = id;

		// take other details and save to each person account
		printf("Person %d Name: \n", i + 1);
		scanf("%s", newPerson[i].name);

		printf("Person %d age: \n", i + 1);
		scanf("%d", &newPerson[i].age);
	}

	// print the details for each person to check they were entered correctly
	for (int i = 0; i < amount; i++)
	{
		printf("\nID: %d\n", newPerson[i].id);
		printf("Name: %s\n", newPerson[i].name);
		printf("Age: %d\n\n", newPerson[i].age);
	}

	// increase counter for conditional expression where true
	for (int i = 0; i < amount; i++)
	{
		if (newPerson[i].age < 20)
		{
			counter++;
		}
	}

	// declare a new Person/struct pointer array variable
	Person *newPersonArray;

	// create space for the new array with counter amount
	newPersonArray = malloc(counter * sizeof(Person));

	// save people who meet condition to new array
	int j = 0;
	for (int i = 0; i < amount; i++)
	{
		if (newPerson[i].age < 20)
		{
			newPersonArray[j] = newPerson[i];
			j++;
		}
	}

	// print people in new array
	printf("\nUnder 20 years old:");
	for (int i = 0; i < counter; i++)
	{
		printf("\nID: %d\n", newPersonArray[i].id);
		printf("Name: %s\n", newPersonArray[i].name);
		printf("Age: %d\n\n", newPersonArray[i].age);
	}

	// free memory of newPerson array as we are using the data in the new array instead
	free(newPerson);
	return 0;
}


/*

INPUT:
	- amount of people
	- name of person
	- age of person

OUTPUT:
	- people less than 20 years in age

What do you want to do:
- remove all people who are 20 years old or older
- store people less than 20 years old

How will you do it:
- find the ids of the people who:
	- age less than 20

What will you do when you have the ids:
- use the amount of ids to allocate memory for a new array
- find the people with the ids that meet condition
- assign the people with the ids to a new array
- print the details of the people in the new array

*/
