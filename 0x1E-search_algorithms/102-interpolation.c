#include "search_algos.h"
/**
  *interpolation_search - uses interpolation search to look for a key
  *@array: the array
  *@size: the size of the array
  *@value: the value to be searched for
  *
  *Return: the index of the value, otherwise -1)
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	low = 0;
	high = size - 1;
	if (value > array[high] || value < array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	while (array[low] != array[high] && array[low] <= value && array[high]
			>= value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos;
		else if (array[pos] > value)
			high = pos;
		else
			return (pos);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
