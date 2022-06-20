#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the sub-string we are lookin for
 *
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
			return (haystack);
	}
	if (*needle == '\0')
		return (haystack);

	return (NULL);
}
