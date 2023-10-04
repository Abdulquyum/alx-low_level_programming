#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 *
 * @str: parameter for string
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int q, len = 0;

	if (str == NULL)
		return (NULL);

	for (q = 0; str[q] != '\0'; q++)
		len++;

	ptr = malloc(len * sizeof(char) + 1);

	for (q = 0; str[q] != '\0'; q++)
	{
		if (ptr == NULL)
			return (NULL);

		ptr[q] = str[q];
	}
	ptr[q] = '\0';

	return (ptr);
}
