#include "search_algos.h"
#include <math.h>

/**
  *jump_search - uses jump search to search for an element in an array
  *@array: the array
  *@size: the size of the array
  *@value: the value to be searched for
  *
  *Return: the position of the value, otherwise -1
  */

int jump_search(int *array, size_t size, int value)
{
	size_t step, pos, upper, lower;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	lower = 0;
	upper = size - 1;
	for (pos = 0; pos < size; pos += step)
	{
		if (array[pos] >= value)
		{
			upper = pos;
			printf("Value found between indexes [%lu] and [%lu]\n", lower, upper);
			return (line_search(array, lower, upper, value));
		}
		lower = pos;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", lower, pos);
	return (line_search(array, lower, upper, value));
}
/**
  *line_search - simple linear search implementation
  *@array: the array
  *@lower: the lower boundary
  *@upper: the upper boundary
  *@val: the value being searched
  *
  *Return: the position of val in the array, otherwise -1
  */
int line_search(int *array, size_t lower, size_t upper, int val)
{
	size_t pos;

	if (array == NULL)
		return (-1);
	for (pos = lower; pos <= upper; pos++)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == val)
			return (pos);
	}
	return (-1);
}
