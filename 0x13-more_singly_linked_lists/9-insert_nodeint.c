#include "lists.h"

/**
 * insert_nodeint_at_index - deeltses node at nth position
 *
 * @head: pointer to pointer head
 * @idx: nth position
 * @n: elelment of node
 *
 * Return: 1 success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t q;
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	q = 1;
	while (q < idx)
	{
		if (temp->next == 0)
			return (NULL);

		temp = temp->next;

		q++;
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
