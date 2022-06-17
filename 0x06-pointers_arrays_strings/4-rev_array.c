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

	int arr[n];

	int i;

	for (int i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		_putchar(arr[n - i - 1]);
	}
}
