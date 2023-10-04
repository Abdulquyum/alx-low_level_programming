#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - creates array of char
 *
 * @size: size of array
 * @c: special chars to be initialized with
 *
 * Return: character pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int q;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	for (q = 0; q < size; q++)
		ptr[q] = c;

	return (ptr);
}
