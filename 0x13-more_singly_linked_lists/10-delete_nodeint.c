#include "lists.h"

/**
 * delete_nodeint_at_index - delete node nth position
 *
 * @head: pointer to pointer to list
 * @index: nth position
 *
 * Return: 1 success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int q;

	if (*head == NULL)
		return (0);

	temp = *head;

	q = 1;
	while (q < index)
	{
		if (temp->next == 0)
			return (-1);

		temp = temp->next;

		q++;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
