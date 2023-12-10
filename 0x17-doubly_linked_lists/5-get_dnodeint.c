#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at nth position
 *
 * @head: pointer to dlistint_t list
 * @index: position to get its node
 *
 * Return: nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int q;

	if (head == NULL)
		return (NULL);

	temp = head;

	q = 0;
	while (q < index)
	{
		if (temp->next == 0)
			return (NULL);

		else if (temp->next != 0)
			temp = temp->next;
		q++;
	}

	return (temp);
}
