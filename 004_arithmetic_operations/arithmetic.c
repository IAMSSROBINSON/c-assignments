// Write a C program to perform arithmetic operations and output results.

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {

	int num_one = 16, num_two = 4;

	printf("\nARITHMETIC OPERATIONS:\n");
	printf("Value of number1: %d\n", num_one);
	printf("Value of number2: %d\n", num_two);
	printf("Sum of number1 and number2: %d\n", num_one + num_two);
	printf("Difference between number1 and number2: %d\n", num_one - num_two);
	printf("Product of number1 and number2: %d\n", num_one * num_two);
	printf("Modulus of number1 and number2: %d\n", num_one % num_two);
	printf("Quotient of number1 and number2: %d\n", num_one / num_two);

	printf("\nMATHEMATICAL TASKS:\n");
	printf("Square root of number1: %f\n", sqrt(num_one));
	printf("Square root of number2: %f\n", sqrt(num_two));
	printf("Value of number1 to the Power of number2: %f\n\n", pow(num_one, num_two));


	return 0;
}


/*

OUTPUT:

ARITHMETIC OPERATIONS:
Value of number1: 16
Value of number2: 4
Sum of number1 and number2: 20
Difference between number1 and number2: 12
Product of number1 and number2: 64
Modulus of number1 and number2: 0
Quotient of number1 and number2: 4

MATHEMATICAL TASKS:
Square root of number1: 4.000000
Square root of number2: 2.000000
Value of number1 to the Power of number2: 65536.000000

*/