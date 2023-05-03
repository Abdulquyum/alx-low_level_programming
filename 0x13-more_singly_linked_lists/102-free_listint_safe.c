#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees safe list
 *
 * @h: parameter for pointer to pointer to first element
 *
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *next_N;
	size_t count;


	temp = *h;
	next_N = NULL;

	count = 0;
	while (temp != NULL)
	{
		next_N = temp->next;
		free(temp);
		count++;

		if (next_N >= temp)
		{
			exit(98);
		}

		temp = next_N;
	}

	*h = NULL;

	return (count);
}
