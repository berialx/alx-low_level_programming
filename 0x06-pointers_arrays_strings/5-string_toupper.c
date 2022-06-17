#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts alphabet to uppercase
 * @str: string
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
