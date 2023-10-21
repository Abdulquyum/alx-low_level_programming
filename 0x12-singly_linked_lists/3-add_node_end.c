#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node to end of list_t list
 *
 * @head: pointer to pointer to list
 * @str: pointer to string
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);

	if (newNode->str == NULL)
		return (NULL);

	newNode->next = NULL;

	temp = *head;

	if (temp->next != 0)
		temp = temp->next;

	else
	{
		temp->next = newNode;
	}

	return (newNode);
}
