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
	int len1, len2;

	int i = 0;

	len1 = strlen(dest);
	len2 = strlen(src);

	while (dest[i++])
		len1++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len1++] = src[i];
	}

	return (dest);
}
