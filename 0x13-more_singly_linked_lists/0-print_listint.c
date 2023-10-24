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
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
