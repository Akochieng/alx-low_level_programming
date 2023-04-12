#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
  *free_grid - frees a 2 dimensional grid previously created.
  *@grid: the grid to be freed up.
  *@height: the height of the matrix
  *Description: frees a 2 dimensional grid created by the function alloc_grid
  */

void free_grid(int **grid, int height)
{
	int h = 0;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
