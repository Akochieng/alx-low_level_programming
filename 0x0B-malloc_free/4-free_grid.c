#include "main.h"
/**
  *free_grid - frees a 2 dimensional array
  *@grid: the two dimensional array
  *@height: the height of the array
  *
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int len;

	for (len = 0; len < height; len++)
		free(grid[len]);
	free(grid);
}
