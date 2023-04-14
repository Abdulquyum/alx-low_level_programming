#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of intergers
 *
 * @min: parameter for minimum integers
 * @max: parameter for maximum integers
 *
 * Return: Returns pointer to the new array created
 */
int *array_range(int min, int max)
{
	int size;
	int *pointer;
	int q;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);

	for (q = 0; min <= max; q++)
		pointer[q] = min++;

	return (pointer);
}
