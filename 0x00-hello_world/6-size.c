#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 1 (success)
 */

int main(void)

{

	char charType;

	int intType;

	long int longintType;

	long long int longlongintType;

	float floatType;



	printf(Size of char : % d bytes\n", sizeof (charType)) ;

	printf(Size of int : % d bytes\n", sizeof (intType)) ;

	printf(Size of long int : % d bytes\n", sizeof (longintType)) ;

	printf(Size of long long int : % d bytes\n", sizeof (longlongintType)) ;

	printf(Size of float : % d bytes\n", sizeof (floatType)) ;

	return (0);

}
