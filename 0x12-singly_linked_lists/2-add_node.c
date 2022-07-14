#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - inserts a node at the beginning of a list
 * @head: a pointer to the head of the list_t list
 * @str: the string to be duplicated
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
