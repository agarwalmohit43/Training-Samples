//Example for Size of operator
#include <stdio.h>

void main( )
{
  //char a;
	printf("\nVariables of type char occupy %d bytes",sizeof("abc"));

	printf("\nVariables of type short occupy %d bytes",sizeof(short));

	printf("\nVariables of type int occupy %d bytes",sizeof(int));

	printf("\nVariables of type long occupy %d bytes",sizeof(long));

	printf("\nVariables of type float occupy %d bytes",sizeof(float));

	printf("\nVariables of type double occupy %d bytes",sizeof(double));

	printf("\nVariables of type long double occupy %d bytes\n",sizeof(long double));
 
}