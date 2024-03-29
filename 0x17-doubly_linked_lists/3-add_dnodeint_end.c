#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node to end of list_t list
 *
 * @head: pointer to pointer to list
 * @n: list element
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
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
		newNode->prev = temp;
	}

	return (newNode);
}
