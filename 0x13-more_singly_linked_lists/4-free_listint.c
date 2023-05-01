#include <stdlib.h>
#include "lists.h"

/**
 * free_listin_t - fress a listint_t list
 *
 * @head: parameter for starting element
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp= head->next;
		free(head);
		head = temp;
	}
}

