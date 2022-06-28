#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array -  creates an array of chars
 * @size: the size
 * @c: the character
 *
 * Return: Null if size is 0 or error, pointer if successful
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = (char *)malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
