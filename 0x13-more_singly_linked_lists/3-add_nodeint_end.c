#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of list
 *
 * @head: parameter for starting element
 * @n: parameter for meber of list
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == 0)
		return (NULL);

	newNode->n = n;
	newNode->next = 0;
	temp = *head;

	if (*head == 0)
		*head = newNode;
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
	temp->next = newNode;
	}
	return (*head);
}
