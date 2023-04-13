#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - points to two dimensional array of integer.
 *
 * @width: parameter for width/breadth
 * @height: parameter for height
 *
 * Return: Returns pointer to 2-dimensional array, otherwise Null for failure.
 */
int **alloc_grid(int width, int height)
{
	int a, j;
	int **two_dime;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dime = malloc(sizeof(int) * height);

	if (two_dime == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		two_dime[a] = malloc(sizeof(int) * width);

		if (two_dime[a] == NULL)
		{
			for (; a >= 0; a--)
				free (two_dime[a]);
			free (two_dime);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (j = 0; j < width; j++)
			two_dime[a][j] = 0;
	}
	return (two_dime);
}
