#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts alphabet to uppercase
 * @s: string
 *
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int i;

	int length = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
}
