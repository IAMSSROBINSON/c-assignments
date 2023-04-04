// Write a program to read the contents of a file with fgets.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

  char saveFile[200];

  FILE *file_ptr;
  file_ptr = fopen("./data.txt", "r");
  if (file_ptr == NULL) {
    printf("\nCould not open file!\n");
    exit(1);
  }
  puts("File opened!");

  while (fgets(saveFile, 200, file_ptr) != NULL) {
      printf("%s", saveFile);
    }


  fclose(file_ptr);
  return 0;
}