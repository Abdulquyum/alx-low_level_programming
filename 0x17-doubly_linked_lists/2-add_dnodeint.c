#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - adds node to the beginning of list_t list
 *
 * @head: pointer to pointer head
 * @n: string to be filled into list data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		newNode->next = *head;
		*head = newNode;
		newNode->prev = NULL;
	}

	return (newNode);
}
