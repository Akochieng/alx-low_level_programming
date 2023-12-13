#include "search_algos.h"
/**
  *linear_search - function using linear search algorithm to find a value
  *@array: pointer to the first element of the array
  *@size: the number of elements in the array
  *@value: the value to search for
  *
  *Return: first index with value, otherswise -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL || size == 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
