#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
/**
  *get_op_func - processes the input sign and applies the right function
  *@s: the sign
  *Description: takes in a sign and uses it to determine the function to
  *use it in.
  *Return: result of the function used
  */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i = 0;

	while ((ops + i)->op != NULL)
	{
		if (*s == *((ops + i)->op))
			return ((ops + i)->f);
		i++;
	}
	return (NULL);
}
