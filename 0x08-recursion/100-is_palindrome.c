#include "main.h"

/**
 * checkpalindrome - checks the string
 * @str: the string to be checked
 * @len: lenght of the string
 * @i: the incrementor, starts at 0
 *
 * Return: 1 if it's a palindrome, or if it's not
 */

int checkpalindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (checkpalindrome(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string to be checked
 *
 * Return: an integer that displays the length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: the string
 *
 * Return: 1 if palindrome or 2 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (checkpalindrome(s, length, i));
}
