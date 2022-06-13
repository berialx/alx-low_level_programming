#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	if (*s)
	{
		reverse(s + 1);
	}
}
