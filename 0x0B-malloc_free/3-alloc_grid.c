#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure or if width or height is 0 or negative
 * on success: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * (sizeof(int));
		if ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}


