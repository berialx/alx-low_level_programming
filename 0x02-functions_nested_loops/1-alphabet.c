#include <stdio.h>
#include "main.h"

/**
 * main - Prints lowercase alphabets
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

	return (0);
}
