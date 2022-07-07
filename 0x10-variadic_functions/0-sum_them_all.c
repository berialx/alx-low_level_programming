#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of arguments
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
