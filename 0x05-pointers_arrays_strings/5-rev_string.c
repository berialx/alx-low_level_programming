#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	while (*s)
	{
		rev_string(s);
	}
}
