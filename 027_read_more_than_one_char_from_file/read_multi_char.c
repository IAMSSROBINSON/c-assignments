// Write a program to read more than a single character from an external file.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

  char saveChars;
  FILE *file_ptr;
  file_ptr = fopen("./data.txt", "r");

  while (1) {
    saveChars = fgetc(file_ptr);

    if(saveChars == EOF){ 
      break;
    }
    printf("%c", saveChars);
  }


  fclose(file_ptr);
  return 0;
}