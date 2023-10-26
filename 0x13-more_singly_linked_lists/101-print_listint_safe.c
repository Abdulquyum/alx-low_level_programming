#include "lists.h"

/**
 * print_listint_safe - prints listint-t list
 *
 * @head: pointer to list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	unsigned int num;

	if (head == 0)
	{
		num = head->n;
		printf("-> [%p] %d\n", (void *)&num, num);
		exit(98);
	}

	while (head != 0)
	{
		num = head->n;
		printf("[%p] %d\n", (void *)&num, num);
		head  = head->next;
		count++;
	}

	return (count);
}
