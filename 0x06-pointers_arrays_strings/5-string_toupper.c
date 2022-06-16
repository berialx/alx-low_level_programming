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
	char i;

	char s1;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] = s1[i] - 32;
		}
	}
}
