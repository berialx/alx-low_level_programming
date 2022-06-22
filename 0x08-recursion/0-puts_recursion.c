#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: The string to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
