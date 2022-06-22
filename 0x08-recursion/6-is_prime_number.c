#include "main.h"

/**
 * primenumber - checks if a number is a prime number
 *
 * @x: the number to be checked
 * @y: the numbers we will go through
 *
 * Return: prime number or not
 */

int primenumber(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
		primenumber(x, y + 1);

	return (1);
}

/**
 * is_prime_number - verifies if a number is prime or not
 * @n: the number to be checked
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (primenumber(n, 2));
}
