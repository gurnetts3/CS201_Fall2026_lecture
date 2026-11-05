/*
 * Implicit casting
 *
 * Try to speculate the value of each variable
 * before running the program
 *
 * Hanan S.
*/
#include <stdio.h>

int main(){

  int i = 35;
  float k = 2.45;
  double j = 10.25;

  // implicitly case double to int
  // is this narrowing or widening?
  i = j; //What will the value of i be?

  printf("the value of i is %d\n", i);

  //implicitly cast float to double
  // is this narrowing or widening?
  j = k; //What will the value of j be?
  
  printf("the value of j is  %.15lf\n", j);

  return 0;
}


