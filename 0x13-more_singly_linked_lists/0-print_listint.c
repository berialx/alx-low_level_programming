#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elemetns of a  list
 * @h: the head of the list to print
 * @Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n, h->n);
		h = h->next;
	}
	return (counter);
}
