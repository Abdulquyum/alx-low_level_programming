#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fress a list_t list
 *
 * @head: parameter for start lis to be freedt
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
