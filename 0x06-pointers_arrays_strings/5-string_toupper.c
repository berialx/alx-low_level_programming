#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts alphabet to uppercase
 * @s1: string
 *
 */

char *string_toupper(char *)
{
	int i;

	char s1[];

	while (s1[i] != '\0')
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] = s1[i] - 32;
		}
		
		i++;
	}

	return (0);
}
