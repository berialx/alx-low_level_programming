#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets
 * for loop
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
