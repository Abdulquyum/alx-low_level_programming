#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node to the beginning of list_t list
 *
 * @head: pointer to pointer head
 * @str: string to be filled into list data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
		return (NULL);

	while (str != NULL)
	{
		newNode = malloc(sizeof(list_t));

		newNode->next = 0;

		if (*head == NULL)
		{
			*head = temp = newNode;
		}
		else
		{
			newNode->str = strdup(str);
			temp->next = newNode;
			temp = newNode;
		}
	}

	return (temp);
}
