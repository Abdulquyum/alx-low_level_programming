#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fres list_t list
 *
 * @head: pointer to starting node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
