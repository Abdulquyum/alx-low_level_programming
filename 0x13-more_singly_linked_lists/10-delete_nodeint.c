#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -deletes node at index position of the list
 *
 * @head: pointer to pointer to list
 * @index: nth position to delete at
 *
 * Return: 1, for success.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_N;
	unsigned int i;

	if (*head == NULL)
		return (0);

	if (index == 0)
		return (-1);

	temp = *head;

	i = 0;
	while (i < (index - 1))
	{
		temp = temp->next;
		i++;
	}

	next_N = temp->next;
	temp->next = next_N->next;
	free(next_N);

	return (1);
}
