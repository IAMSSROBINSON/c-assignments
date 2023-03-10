// Write a C program to multiply two floating point numbers.

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {

	float a = 6.4, b = 2.6, result = a * b;

	printf("\nFloating point number: %f multiplied by floating point number: %f = Result: %f\n",a, b, result);
	// Floating point number: 6.400000 multiplied by floating point number: 2.600000 = Result: 16.639999

	printf("\nResult rounded to 1 decimal place: %.1f\n", result);
	// Result rounded to 1 decimal place: 16.6

	printf("\nResult rounded up to the nearest integer using #include <math.h>, ceil() function: %.1f\n", ceil(result));
	// Result rounded up to the nearest integer using #include <math.h>, ceil() function: 17.0

	printf("\nResult rounded down to the nearest integer  using #include <math.h>, floor(): %.1f\n", floor(result));
	// Result rounded down to the nearest integer  using #include <math.h>, floor(): 16.0


	return 0;
}