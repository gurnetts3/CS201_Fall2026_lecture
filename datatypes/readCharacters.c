/*
 * Expected behaviour: enter a single char then 
 * it gets printed to stdout. Enter a second char
 * then it gets printed to stdout.
 *
 * Test it once. Then test it again by uncommenting 
 * line 23
 *
 * Hanan S.
 */
 
#include <stdio.h>

int main(int argc, char *argv[]){

  int ch1, ch2;

  ch1 = getchar();
  printf("1st char entered is %c\n", ch1);

  //Eat up the newline sitting in the buffer
  //getchar();

  ch2 = getchar();
  printf("2nd char entered is %c\n", ch2);

  return 0;
}
