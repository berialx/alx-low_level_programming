#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: points to the in s that matches one of the bytes in accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
