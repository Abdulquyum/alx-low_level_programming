#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node nth position
 *
 * @head: pointer to pointer to list
 * @index: nth position
 *
 * Return: 1 success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nextnode, *prevnode;
	unsigned int q;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		nextnode = temp->next;
		*head = nextnode;
		if (nextnode != NULL)
			nextnode->prev = NULL;
		free(temp);
		return (1);
	}
	q = 0;
	while (q < index && temp != NULL)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;

		q++;
	}

	nextnode = temp->next;
	nextnode->prev = temp->prev;
	prevnode = temp->prev;
	prevnode->next = nextnode;
	free(temp);

	return (1);
}
