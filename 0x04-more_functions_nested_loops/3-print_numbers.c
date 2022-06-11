#include "main.h" 

/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int (i);

	char ch;

	for (i = 0; i <= 9; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");

	return (0);
}	
