#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int size, i, j, symbol;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
			_putchar(" ");

		for (symbol = 1; symbol <= size); symbol++)
			_putchar("#");
		_putchar("\n");
	}
	return (0);
}
