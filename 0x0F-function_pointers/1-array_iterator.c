#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array being passed
 * @size: the size of an array
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p - action;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		p(array[i]);

}
