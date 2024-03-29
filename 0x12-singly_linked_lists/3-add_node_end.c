#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node to end of list_t list
 *
 * @head: pointer to pointer to list
 * @str: pointer to string
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	size_t count;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;

	for (count = 0; str[count] != '\0'; count++)
		;

	newNode->len = count;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (newNode);
}
