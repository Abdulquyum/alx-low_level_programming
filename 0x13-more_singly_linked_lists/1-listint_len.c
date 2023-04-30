#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints number of elements in the list
 *
 * @h: parameter for start of element
 *
 * Return: lenght or number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
