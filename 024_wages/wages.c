// Write a C programme to read the details of 2 workers and calculate the total payment of workers using structure:
// NAME, WAGE and DAYS
// The total payment = WAGE * DAYS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// create global struct to create employee details from
struct Employee {
	char name[20];
	int wage;
	int days;
};

// global employee counter variable
int employeeNumber = 0;

// function declarations:
void createEmployee ();


// Main function
int main (int argc, char *argv[]) {

  createEmployee();


	return 0;
}


// function definitions:
void createEmployee () {
	employeeNumber += 1;

  // new instance of struct variable
	struct Employee employee[employeeNumber];

	char name[20];
	int wage = employee[employeeNumber].wage;
	int days = employee[employeeNumber].days;
	

	// setName
	printf("\nPlease enter employee name: \n");
	scanf("%s", *&employee[employeeNumber].name);

	// setWage
	printf("\nPlease enter wage: \n");
	scanf("%d", &wage);

	// setDaysWorked
	printf("\nPlease enter days worked: \n");
	scanf("%d", &days);

	// getDetails, calculate total payment and display
	int payment = wage * days;
	printf("\nDetails of worker: %d\n", employeeNumber);
	printf("Name of worker: %s\n", employee[employeeNumber].name);
	printf("Payment of worker: $%d\n\n", payment);
}