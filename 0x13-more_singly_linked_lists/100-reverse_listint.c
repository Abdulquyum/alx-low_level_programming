#include "lists.h"

/**
 * reverse_listint - reverse listint list
 *
 * @head: pointer to pointer to head
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	prevnode = 0;

	if (*head == NULL)
		return (NULL);

	nextnode = *head;

	while ((*head) != 0)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	*head = prevnode;

	return (*head);
}

