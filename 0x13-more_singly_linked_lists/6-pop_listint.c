#include "lists.h"

/**
 * pop_listint - deletes head node of the list
 *
 * @head: pointer to pointer to head
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	return (temp->n);
}
