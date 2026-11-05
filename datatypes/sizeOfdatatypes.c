/*
 * Get the size of each datatype in bytes
 *
 * Hanan S.
 */
 
#include <stdio.h>

int main(){

	int i1;
	short int i2;
	long int i3;
	long long int i4;

	printf("The sizeof int on this mac is %lu bytes\n", sizeof(i1));
	printf("The sizeof short int on this mac is %lu bytes\n", sizeof(i2));
	printf("The sizeof long int on this mac is %lu bytes\n", sizeof(i3));
	printf("The sizeof long long int on this mac is %lu bytes\n", sizeof(i4));

	return 0;
}
