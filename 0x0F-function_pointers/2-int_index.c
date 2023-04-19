#include <stdio.h>
#include "function_pointers.h"
/**
  *int_index - runs a function comp on every element of an array
  *@array: the array
  *@size: the size of the array
  *@cmp: the function
  *Description: runs a function cmp on every element of an array
  *Return: returns the index of the 1st element of the function or -1 otherwise
  */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);
	i = res = 0;
	while (i < size)
	{
		res = cmp(*(array + i));
		if (res != 0)
			break;
		i++;
	}
	if (i < size)
		return (i);
	return (-1);
}
