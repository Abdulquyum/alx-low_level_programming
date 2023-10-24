#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 *
 * @h: pointer to list
 *
 * Return: number of elment
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
