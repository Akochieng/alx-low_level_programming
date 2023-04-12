#include "main.h"
/**
  *alloc_grid - returns a pointer to a 2 dimensional array of intergers
  *@width: width of the array
  *@height: height of the array
  *Description: 2 dimensional array of size width by height
  *Return: pointer to the array
  */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int h, w;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **)malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(height * sizeof(int));
		if (arr[h] == NULL)
			return (NULL);
	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	return (arr);
}
