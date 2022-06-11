#include "main.h"

/**
 * print_line - Draws a straight line using _
 * @n: The number of character _
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
