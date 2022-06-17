#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - reverse content
 * @a: array
 * @n: number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int temp;

	int i;

	for (i = 0; i <= n / 2; i++)
	{
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
	}
}
