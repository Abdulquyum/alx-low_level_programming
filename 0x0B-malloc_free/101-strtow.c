#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string passed
 *
 * Return: pointer to splited words
 */
char **strtow(char *str)
{
	char **ptr;
	int q, len_str = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (q = 0; str[q] != '\0'; q++)
		len_str = _strlen(str);

	ptr = malloc(len_str + 1);

	if (ptr == NULL)
		return (NULL);

	for (q = 0; str[q] != '\0'; q++)
	{
		*ptr[q] = str[q];
	}
	ptr[q] = '\0';

	return (ptr);
}

/**
 * _strlen - string lenght
 *
 * @str: string passed
 *
 * Return: string lenght
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}
