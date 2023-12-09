#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - fres list_t list
 *
 * @head: pointer to starting node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
