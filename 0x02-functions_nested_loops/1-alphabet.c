#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

	return (0);
}
