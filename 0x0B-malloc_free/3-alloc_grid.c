#include "main.h"
#define OK 1
#define NOK 0
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
	int state = OK;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(width * sizeof(int));
		if (arr[h] == NULL)
		{
			state = NOK;
			break;
		}
	}
	if (state == OK)
		for (h = 0; h < height; h++)
			for (w = 0; w < width; w++)
				arr[h][w] = 0;
	else
	{
		while (h >= 0)
		{
			free(arr[h]);
			h--;
		}
		free(arr);
		return (NULL);
	}

	return (arr);
}
