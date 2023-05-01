#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of list
 *
 * @head: parameter for starting element
 * @n: parameter for list member
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == 0)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
