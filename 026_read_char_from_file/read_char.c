// Read a character from an external .txt file and output the value.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

  char saveChar;

  FILE *storeFile;
  storeFile = fopen("data.txt", "r");

  if (storeFile == NULL) {
     puts("File not found!");
     exit(1);
  }

  saveChar = fgetc(storeFile);
  printf("\n%c\n", saveChar);
  

  fclose(storeFile);
  return 0;
}