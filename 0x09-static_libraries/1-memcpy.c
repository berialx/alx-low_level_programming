#include "main.h"

/**
 * _memcpy - copies a memory area
 * @n: the number of bytes
 * @src: the source string
 * @dest: the destination string
 *
 * Return: destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
