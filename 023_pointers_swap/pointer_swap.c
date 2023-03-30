// Use pointers in a function to swap the values of two numbers

#include <stdio.h>

void swap (int *a, int *b);


int main (int argc, char *argv[]) {

  int a = 100;
  int b = 200;

  printf("\nVALUES BEFORE SWAP\n");
  printf("A: %d\tAddress: %p\nB: %d\tAddress: %p\n\n", a, &a, b, &b);

  swap(&a, &b);


  return 0;
}

void swap (int *a, int *b) {

  int c;
  c = *a;
  *a = *b;
  *b = c;

  printf("\nVALUES AFTER SWAP\n");
  printf("A: %d\tAddress: %p\nB: %d\tAddress: %p\n\n", *a, a, *b, b);

}

