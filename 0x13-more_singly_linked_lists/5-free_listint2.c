#include "lists.h"

/**
 * free_listint2 - fres a listint_t list
 *
 * @head: pointer to pointer to list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *nextnode;

	temp = *head;

	while (temp)
	{
		nextnode = temp->next;
		free(temp);
		temp = nextnode;
	}

	*head = NULL;
}
