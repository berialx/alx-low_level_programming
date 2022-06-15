#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - reverse content
 * @a: array
 * @n: number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int aux[n];

	int arr[n];

	int i;

	for (int i = 0; i < n; i++)
	{
		aux[n - 1 - i] = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = aux[i];
	}
}
