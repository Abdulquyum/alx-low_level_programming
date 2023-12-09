#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints dlistint list
 *
 * @h: parameter for pointer to list
 *
 * Return: lenght of list_t
 */
size_t print_dlistint(const dlistint_t *h)
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
