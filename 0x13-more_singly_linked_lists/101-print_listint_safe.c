#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints listint_t
 *
 * @head: pointer to startin to element
 *
 * Return: number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count;

	temp = head;

	for (count  = 0; temp; count++)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp->next >= temp)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}

		temp = temp->next;
	}

	return (count);
}
