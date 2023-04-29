#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: parameter for multidimensional array of integers.
 * @height: height of grid.
 */
void free_grid(int **grid, int height)
{
	if (grid != 0 && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
