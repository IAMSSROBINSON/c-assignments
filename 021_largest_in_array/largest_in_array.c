// Write a program to find the largest integer in a given array 

#include <stdio.h>
#include <stdlib.h>

// function declarations
int getSize();
int *allocateMemory(int numberOfElements);
void getArrayElements(int *array, int numberOfElements);
int getMax(int *array, int numberOfElements);
void printer(int *array, int numberOfElements, int max);


// MAIN function
int main (int argc, char *argv[]) {

  // variable declarations
  int numberOfElements;
  int *array;
  int max;

  // function calls
  numberOfElements = getSize();
  array = allocateMemory(numberOfElements);
  getArrayElements(array, numberOfElements);
  max = getMax(array, numberOfElements);
  printer(array, numberOfElements, max);


  free(array);
  return 0;
}

// function definitions:

// determine number of elements
int getSize () {
  int size = 0;
  puts("\nHow many numbers to be entered into your list:");
  scanf("%d", &size);

  return size;
}

// allocate space in memory for array elements
int *allocateMemory (int numberOfElements) {

  int *array = 0;
  array = malloc(numberOfElements * sizeof(int));
  if(array == 0){
    printf("\nMemory not allocated.\nEnd of program.\n");
    exit(1);
  }
  printf("\nMemory allocated.\n");

  return array;
}

// populate array with elements
void getArrayElements (int *array, int numberOfElements) {
  for (int i = 0; i < numberOfElements; i++)
  {
    printf("Enter number %d: ", i+1);
    scanf("%d", &array[i]);
  }
}

// calculate largest number in array
int getMax (int *array, int numberOfElements) {
  int max = 0;

  for (int i = 0; i < numberOfElements; i++)
  {
    if(array[i] > max) {
      max = array[i];
    }
  }
  
  return max;
}

// print array elements and largest element
void printer (int *array, int numberOfElements, int max) {

  printf("\nThese are the numbers in your list:\n");
  for (int i = 0; i < numberOfElements; i++)
  {
   printf("Number %d: %d\n", i, array[i]);
  }
  
  printf("\nThe largest number in the list is: %d\n\n", max);
}
