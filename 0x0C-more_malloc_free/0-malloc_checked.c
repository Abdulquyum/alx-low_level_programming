#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int q;
	void *ptr;

	ptr = malloc(b);

	for (q = 0; q < b; q++)
	{
		if (ptr == NULL)
			exit (98);
	}

	return (ptr);
}
