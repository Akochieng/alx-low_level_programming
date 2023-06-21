#include "function_pointers.h"
/**
  *int_index - function that searches for an interger
  *@array: the array
  *@size: the size of the array
  *@cmp: the function pointer
  *
  *Return: 0 or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size > 0)
		for (count = 0; count < size; count++)
			if (cmp(array[count]) != 0)
				return (count);
	return (-1);
}
