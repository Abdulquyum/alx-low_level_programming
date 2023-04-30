#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the lists
 * @h: parameter for pointer to starting node
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t data = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		data++;
	}
	return (data);
}
