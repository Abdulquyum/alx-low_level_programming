#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 *
 * @min: starting point for array initialization
 * @max: ending point for initialization
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int q, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(max));

	if (ptr == NULL)
		return (NULL);

	for (q = 0; q < size; q++)
	{
		ptr[q] = min + q;
	}

	return (ptr);
}

