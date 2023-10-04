#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up previously created 2D grid
 * @grid: address of 2D grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
