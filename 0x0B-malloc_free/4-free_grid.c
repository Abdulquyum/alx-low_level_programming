#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free previously created array
 *
 * @grid:  2 dimensional array
 * @height:  rows or height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
			free(grid[q]);
	}
	free(grid);
}
