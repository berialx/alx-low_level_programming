#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: destination
 * @src: pointer
 * @i: ..
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
