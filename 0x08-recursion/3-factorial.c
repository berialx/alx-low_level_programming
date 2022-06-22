#include "main.h"

/**
 * factorial - to calculate the factorial of a given number
 * @n: the number whose factorial is going to be calculated
 *
 * Return: the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
