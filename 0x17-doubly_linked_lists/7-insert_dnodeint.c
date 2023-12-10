#include "lists.h"

/**
 * insert_dnodeint_at_index - deeltses node at nth position
 *
 * @h: pointer to pointer head
 * @idx: nth position
 * @n: elelment of node
 *
 * Return: 1 success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t q;
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*h == NULL)
		return (NULL);

	temp = *h;

	q = 0;
	while (q < idx)
	{
		if (temp->next == 0)
			return (NULL);

		temp = temp->next;

		q++;
	}

	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
