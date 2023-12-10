#include "lists.h"

/**
 * sum_listint - sumall elements of lsitint_t list
 *
 * @head: pointer to list
 *
 * Return: sum of element in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0, num;

	if (head == NULL)
		return (0);

	else
	{
		temp = head;

		while (temp != 0)
		{
			num = temp->n;
			sum += num;
			temp = temp->next;
		}
	}
	return (sum);
}
