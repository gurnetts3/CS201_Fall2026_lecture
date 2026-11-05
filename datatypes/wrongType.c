/*
 * Expected behaviour: print to stdout 
 *
 * 10000 + 30000 = 40000
 * 10000 + 30000 = 40000
 *
 * Do both statements match?
 *
 * Hanan S.
 */
 
#include <stdio.h>

int main(){
  unsigned short int i, j, sum;

  i = 10000;
  j = 30000;
  
  sum = i+j;

  //specifier for unsigned short int is %hu
  printf("%hu + %hu = %hu\n", i, j, sum); 
  
  //specifier for signed short int is %hd
  printf("%hd + %hd = %hd\n", i, j, sum); 

  return 0;
}





