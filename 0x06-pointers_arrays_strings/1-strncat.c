#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings upto n
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from source
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	dest[len1 + i] = '\0';

	return (dest);
}
