#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integers
 *
 * @array: parameter for array
 * @size: parameter for number of elements in array
 * @cmp: pointer to the function used to compare
 * Return: index of first element compared and no return of o, else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	q = 0;
	while (q < size)
	{
		if (cmp(array[q]) != 0)
			return (q);
		q++;
	}

	return (-1);
}
