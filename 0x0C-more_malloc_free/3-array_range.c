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
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max + 1 - min));
	if (p == NULL)
		return (NULL);
	for (i = min; (i + min) <= max; i++)
		*(p + i) = i + min;
	return (p);
}
