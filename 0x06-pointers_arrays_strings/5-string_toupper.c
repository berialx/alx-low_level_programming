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
	
	char s[];

	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		s[i] = string_toupper(s[i]);
	}
}
