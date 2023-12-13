#include "search_algos.h"
/**
  *binary_search - uses binary search to look for an element in an
  *array
  *@array: the array
  *@size: the size of the array
  *@value: the value to be searched for
  *
  *Return: index where value is located, otherwise -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t pos, lower, upper;

	if (array == NULL)
		return (-1);
	lower = 0;
	upper = size - 1;
	while ((upper - lower) > 1)
	{
		print_array(array, lower, upper);
		pos = lower + (upper - lower + 1) / 2;
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
		{
			if (array[upper] == value)
				return (upper);
			lower = pos;
			continue;
		}
		if (array[pos] > value)
		{
			upper = pos;
			if (array[lower] == value)
				return (lower);
			continue;
		}
	}
	return (-1);
}

/**
  *print_array - simple function to print an array
  *@array: the array
  *@lower: the lower boundary
  *@upper: the upper boundary
  *
  *Return: void
  */
void print_array(int *array, size_t lower, size_t upper)
{
	size_t pos;

	printf("Searching in array:");
	for (pos = lower; pos <= upper; pos++)
	{
		printf(" %d", *(array + pos));
		if (pos < upper)
			printf(",");
		else
			printf("\n");
	}
}
