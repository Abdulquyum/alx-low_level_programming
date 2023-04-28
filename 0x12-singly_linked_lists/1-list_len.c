#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints number of elements in linked list_t list
 *
 * @h: parameter for list
 *
 * Return: returns number of element in list
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != 0)
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
