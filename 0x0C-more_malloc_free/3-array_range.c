#include <stdio.h>
#include <stdlib.h>

/**
  *array_range - creates memory sufficient to store min to max and stores them
  *@min: the min value
  *@max: the max value
  *Description: creates memory to store values ranging from min to max in
  *ascending order using malloc
  *Return: pointer to new array or NULL if failure noted
  */
int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);
	if (max < 0)
		size = ((-min) - (-max)) + 1;
	else
		size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		*(p + i) = i + min;
	return (p);
}
