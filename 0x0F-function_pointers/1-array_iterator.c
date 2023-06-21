#include "function_pointers.h"
/**
  *array_iterator - function that executes a function on each element of an
  *array
  *@array: the array
  *@size: the size of the array
  *@action: the function to be implemented
  *
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	for (counter = 0; counter < size; counter++)
		action(array[counter]);
}
