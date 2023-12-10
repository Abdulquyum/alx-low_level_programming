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
	unsigned int q;
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*h == NULL && idx != 0)
	{
		free(newnode);
		return (NULL);
	}

	temp = *h;

	if (*h == NULL && idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		free(newnode);

		return (newnode);
	}

	q = 1;
	while (q <= idx)
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
