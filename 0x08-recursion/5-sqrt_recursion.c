#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_recursion(n, 1));
}
