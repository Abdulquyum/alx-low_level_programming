#include "function_pointers.h"
/**
 * array_iterator - iterates through an array
 *
 * @size: arrya size
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t q;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}

