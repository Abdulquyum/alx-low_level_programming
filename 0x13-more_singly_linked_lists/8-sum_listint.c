#include "lists.h"

/**
 * sum_listint - sum all data of the list
 *
 * @head: parameter for start element
 *
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == 0)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
