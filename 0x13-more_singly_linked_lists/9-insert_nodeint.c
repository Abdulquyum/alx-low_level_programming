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

	temp = *head;

	if (idx != 0)
	{
		while (temp)
		{
			for (count = 0; count < idx - 1; count++)
				temp = temp->next;
		}		
	}
	if (idx != 0 && temp == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == 0)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
