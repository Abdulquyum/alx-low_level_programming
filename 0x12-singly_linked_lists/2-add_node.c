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
	list_t *newNode;
	size_t count = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
		return (NULL);

	for (; str[count]; count++)
		;

	newNode->len = count;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
