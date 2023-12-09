#include "lists.h"

/**
 * dlistint_len - lenght of a dlistint list
 *
 * @h: pointer to a lsit_t list
 *
 * Return: lenght of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
