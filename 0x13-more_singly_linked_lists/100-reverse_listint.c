#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to pointer to head
 *
 * Return: pointer to first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode;

	prevNode = 0, nextNode = NULL;

	while (*head != 0)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}

