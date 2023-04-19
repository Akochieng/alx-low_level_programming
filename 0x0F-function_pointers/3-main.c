#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - the calculator main function
  *@ar: the number of arguments
  *@args: the array of arguments
  *Description: takes in two numbers and an operator and returns the result
  *Return: 98, 99, 100 error, 0 success
*/
int main(int ar, char **args)
{
	int a, b, result;
	char *s;

	if (ar < 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(args[1]);
	b = atoi(args[3]);
	s = args[2];
	if (!(strcmp(s, "+") == 0 || strcmp(s, "-") == 0 || strcmp(s, "/") == 0 || strcmp(s, "%") == 0 || strcmp(s, "*") == 0))
	{
		printf("Error\n");
		return (99);
	}
	if ((strcmp(s, "/") == 0 || strcmp(s, "%") == 0) && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = (get_op_func(s))(a, b);
	printf("%d\n", result);
	return (0);
}
