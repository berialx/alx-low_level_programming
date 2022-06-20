#include "main.h"

/**
 * _memset - fills the first bytes of memory with a character
 * @s: the memory area
 * @b: the character to be filled
 * @n: the number of bytes
 *
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
