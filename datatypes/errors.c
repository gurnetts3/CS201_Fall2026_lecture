/*
 * Test this program by redirecting output to output.txt
 *
 * The error message should appear on the screen
 * Hello World should appear in the output file
 *
 * Change the fprintf to printf? What happens
 *
 * Hanan S.
 */
 
#include <stdio.h>

int main(int argc, char *argv[]){
  
  if (argc != 2)
    fprintf(stderr, "Error occurred - not enough arguments on command line\n");

  printf("Hello world\n");

  return 0;
}
