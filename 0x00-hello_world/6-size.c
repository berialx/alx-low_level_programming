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



	printf("Size of char : % d byte(s)\n", sizeof(charType));

	printf("Size of int : % d byte(s)\n", sizeof(intType));

	printf("Size of long int : % d byte(s)\n", sizeof(longintType));

	printf("Size of long long int : % d byte(s)\n", sizeof(longlongintType));

	printf("Size of float : % d byte(s)\n", sizeof(floatType));

	return (0);

}
