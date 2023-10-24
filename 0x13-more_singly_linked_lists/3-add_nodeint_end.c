#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of list_t list
 *
 * @head: pointer to pointer to list
 * @n: elements in list
 *
 * Return: pointer to newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}
	return (newnode);
}
