#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node in the list
 *
 * @head: parameter for pointer to pointer to the list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_node;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;

		*head = (*head)->next;

		head_node = (*head)->n;

		free(temp);
	}
	return (head_node);
}
