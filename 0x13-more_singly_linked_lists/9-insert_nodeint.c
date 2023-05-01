#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: parametr for pointer to pointer to start
 * @idx: index of the list where the new node should be added
 * @n: parameter for node member
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int count = 0;

	idx = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	temp = *head;

	if (idx > count)
	{
		return (NULL);
	}
	else if (idx < count)
	{
		temp = temp->next;
	}

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;

	return (*head);
}
