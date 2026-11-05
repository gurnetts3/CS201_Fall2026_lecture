/* casting.c                                                                                   
 *                                                                                                    
 * demonstration of implicit and explicit casting  
 *
 * Hanan S.                                                                           
 */


#include <stdio.h>

int main(){

  int i;
  float f;
  double d=3.14, h;

  /*explicit casting*/
  printf("d as an int  : %d\n", (int) d);
  printf("d as a float : %.10f\n", (float) d);
  printf("d as a double: %.10lf\n\n", d);

  /*implicit casting*/
  i = d;  //d is implicitly cast to an int narrowing the double to an int
  f = d;  //d is implicitly cast to float narrowing the double to a float
  h = i;  //i is implicitly cast to double by widening it (promotion)
  printf("d implicitly cast to an int i=%d\n", i);
  printf("d implicitly cast to a float f= %.10f\n",f);
  printf("i is implicitly cast to double h=%.10lf\n", h);
  
  return 0;
}
