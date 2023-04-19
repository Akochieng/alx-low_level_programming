#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - performs action on each of the elements of an array
  *@array: the array to be worked on
  *@size: the size of the array
  *action: the function that determines the action
  *
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
		action(*(array + c));
}
