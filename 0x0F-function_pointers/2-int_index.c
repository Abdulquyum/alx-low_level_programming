#include "function_pointers.h"

/**
 * int_index - searches for integer
 *
 * @array: array of intergers
 * @size: size of array
 * @cmp: pointer for function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q, n;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (q = 0; q < size; q++)
	{
		n = cmp(array[q]);

		if (n != 0)
			return (q);
	}

	return (-1);
}
