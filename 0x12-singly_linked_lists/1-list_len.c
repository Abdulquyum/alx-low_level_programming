#include "lists.h"

/**
 * list_len - lenght of a lsit_t list
 *
 * @h: pointer to a lsit_t list
 *
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
