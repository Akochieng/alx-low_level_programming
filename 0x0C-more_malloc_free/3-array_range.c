#include "main.h"
/**
  *array_range - create memory and copy values between min and max
  *@min: the minimum value
  *@max: the max value
  *
  *Return: the created memory
  */
int *array_range(int min, int max)
{
	int size, i;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
