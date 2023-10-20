#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints list_t list
 *
 * @h: parameter for pointer to list
 *
 * Return: lenght of list_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "nil");

		else
			printf("[%d] (%s)\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
