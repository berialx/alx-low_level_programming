#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int size, i, j, symbol;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
			_putchar(" ");

		for (symbol = 1; symbol <= size; symbol++)
			_putchar("#");
		_putchar("\n");
	}
}
