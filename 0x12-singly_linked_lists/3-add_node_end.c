#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 *
 * @head: starting node
 * @str: existing elements
 *
 * Return: address of the first element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t new_tail;

	new = malloc(sizeof(list_t));

	if (new == 0)
		return (NULL);

	new->str = strdup(str);

	new_tail = 0;
	while (str[new_tail])
		new_tail++;

	new->len = new_tail;
	new->next = NULL;
	temp = *head;

	if (temp == 0)
	{
		*head = new;
	}
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
