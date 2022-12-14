#include <stddef.h>
#include "main.h"

/**
 * _strchr - search and locate for a specific character
 * @s: the string to be searched
 * @c: the character to be searched
 *
 * Return: A pointer or Null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
