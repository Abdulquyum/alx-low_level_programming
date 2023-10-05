#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints two dimensional array
 *
 * @width: row represenation
 * @height: column representation
 *
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int q, i;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));


	if (ptr == NULL)
		return (NULL);

	for (q = 0; q < height; q++)
	{
		ptr[q] = malloc(width * sizeof(int));
		if (ptr[q] == NULL)
		{
			for (q = 0; q < i; q++)
			{
				free(ptr[q]);
			}

			free(ptr);
			return (NULL);
		}

			for (i = 0; i < width; i++)
				ptr[q][i] = 0;
	}

	return (ptr);
}
