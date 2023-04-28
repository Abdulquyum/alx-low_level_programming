#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at then beginning of list
 *
 * @head: parameter for start of list
 * @str: parameter for existing string of characters
 *
 * Return: address of the first element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
       size_t new_name;

       new = malloc(sizeof(list_t));

       if (new == 0)
	       return (NULL);

	new->str = strdup(str);

	new_name = 0;
       while (str[new_name])
	       new_name++;

	new->len = new_name;
	new->next = *head;
	*head = new;

	return (*head);
}
