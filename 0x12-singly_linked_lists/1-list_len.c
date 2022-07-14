#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements
 * @h: list to be checked
 * Return: the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int elem_counter;

	elem_counter = 0;

	while (h)
	{
		h = h->next;
		elem_counter++;
	}
	return (elem_counter);
}
