#include "main.h"
/**
  *alloc_grid - returns a pointer to a 2 dimensional array initialised to 0
  *@width: the width of the array
  *@height: the height of the array
  *
  *Return: pointer to the 2 dimensional array or NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *temp;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		temp = malloc(sizeof(int) * width);
		if (temp == NULL)
		{
			while (--h)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			temp[w] = 0;
		grid[h] = temp;
	}
	return (grid);
}
