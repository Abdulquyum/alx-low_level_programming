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
	size_t data;

	for (data = 0; h != 0; data++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (data);
}
