#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on array elements
 *
 * @array: parameter for argument array
 * @size: parameterfor size of array
 * @action: parameter for pointer to function need to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
