#include "lists.h"

/**
 * print_listint - prints list_int_t list
 *
 * @h: pointer to head list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
