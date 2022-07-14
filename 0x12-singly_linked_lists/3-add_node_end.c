#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - to insert a new node at the end of a list_t
 * @head: a pointer to the head of the list_t
 * @str: the string to be duplicated
 *
 * Return: NULL or the address for the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
