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
	int index, q;

	if (min > max)
		return (NULL);

	ptr = malloc(min * sizeof(min) + max * sizeof(max));

	if (ptr == NULL)
		return (NULL);

	index = 0;

	for (q = 0; q < (min); q++)
	{
		ptr[index++] = min;
	}
	for (q = 0; q < max; q++)
	{
		ptr[index++] = max;
	}
	return (ptr);
}

