#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - access the nth node in the list
 *
 * @index: index of node
 *
 * Return: nth node of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index && head != 0)
	{
		n++;
		head = head->next;
	}

	return (head);
}
