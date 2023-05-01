#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint list setting head to null
 *
 * @head: parameter for pointer to starting element
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while ((temp = *head))
	{
		*head = (*head)->next;
		free(temp);
	}

	head = 0;
}
