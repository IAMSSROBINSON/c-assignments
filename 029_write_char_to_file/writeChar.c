// Write a program to write a character to an external file.

#include <stdio.h>
#include <stdlib.h>

void writeChar (char *character);


int main (int argc, char *argv[]) {

  char character = 'A';
  writeChar(&character);
  

  return 0;
}


void writeChar (char *character) {

  FILE *file_ptr;
  file_ptr = fopen("data.txt", "w");

  if (file_ptr == NULL){
    printf("\nFile could not be opened!\n");
  }
  printf("\nFile opened!\n");

  fputc(*character, file_ptr);
}