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
	size_t count;

	if (head == NULL)
		exit(98);

	for (count = 0; head != 0; count++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (0);
}
