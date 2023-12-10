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
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
	}

	else
	{
		temp = *head;
		newNode->next = temp;
		newNode->prev = NULL;
		temp->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
