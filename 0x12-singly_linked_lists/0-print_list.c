#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_counter;

	node_counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
