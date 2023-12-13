#include "search_algos.h"
/**
  *exponential_search - uses exponential search algorithm to find a value
  *@array: the array
  *@size: the size of the array
  *@value: the value to be searched for
  *
  *Return: the index of value in array or -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t pos, low, high, temp;

	if (array == NULL)
		return (-1);
	low = 0;
	pos = 1;
	high = size - 1;
	while (value <= array[high] && array[low] <= value)
	{
		temp = mpow(2, pos);
		if (!array[temp])
			return (b_search(array, low, high, value));
		else if (array[temp] >= value)
			high = pos;
		else
			low = pos;
		pos++;
	}
	return (b_search(array, low, high, value));
}

/**
  *mpow - an implementation of the power function
  *@base: the base
  *@pow: the exponent
  *
  *Return: the result of the operation
  */
int mpow(int base, size_t pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (base);
	else
		return (base * (mpow(base, pow - 1)));
}
/**
  *b_search - simple binary search implementation
  *@array: the array
  *@low: the lower boundary
  *@high: the higher boundary
  *@value: the value to be searched
  *
  *Return: the position of value in the array, otherwise -1
  */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (high - low) / 2;
	if (array[pos] == value)
		return (pos);
	if (array[pos] > value && (high - low) > 1)
	{
		high = pos;
		return (b_search(array, low, high, value));
	}
	if (array[pos] < value && (high - low) > 1)
	{
		low = pos;
		return (b_search(array, low, high, value));
	}
	return (-1);
}
