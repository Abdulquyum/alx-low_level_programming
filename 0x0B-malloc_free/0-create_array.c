#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars with initialization
 *
 * @size: parameter for size of array
 * @c: parameter for character
 *
 * Return: returns pointer to array or NULL for failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int q;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	q = 0;
	while (q < size)
	{
		str[q] = c;
		q++;
	}
	return (str);
}
