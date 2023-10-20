#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node to the beginning of list_t list
 *
 * @head: pointer to pointer head
 * @str: string to be filled into list data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);

	if (newNode->str == NULL)
		return (NULL);

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (newNode);
}
