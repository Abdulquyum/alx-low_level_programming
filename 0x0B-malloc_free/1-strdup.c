#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to new string containing copy of old string
 *
 * @str: parameter for old string
 *
 * Return: Returns New string.
 */
char *_strdup(char *str)
{
	char *new_string;
	int q, m = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[m])
	{
		m++;
	}
	new_string = malloc((sizeof(char) * m) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < m; q++)
	{
		new_string[q] = str[q];
	}
	new_string[q++] = '\0';
	return (new_string);
}
