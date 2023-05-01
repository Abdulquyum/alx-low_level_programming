#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fress a listint_t list
 *
 * @head: parameter for starting element
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
