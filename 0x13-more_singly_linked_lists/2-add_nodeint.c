#include "lists.h"

/**
 * add_nodeint - add node to list
 *
 * @head: pointer to pointer to list
 * @n: elements in list
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	if (newnode == NULL)
		return (NULL);


	if (*head == NULL)
		*head = newnode;

	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
