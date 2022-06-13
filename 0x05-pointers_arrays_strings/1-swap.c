#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: an integer to be swaped
 * @b: an integer to be swaped
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
