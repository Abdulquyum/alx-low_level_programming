#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at nth position
 *
 * @head: pointer to listint_t list
 * @index: position to get its node
 *
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
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
