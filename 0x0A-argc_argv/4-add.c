#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - program that adds its arguments
  *@argc: the number of arguments
  *@argv: the arguments
  *
  *Return: 1 on error, otherwise 0
  */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, temp;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (check_param(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			temp = atoi(argv[i]);
			sum += temp;
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
  *check_param - function to check whether a string contains non intergers
  *@s: the string
  *
  *Return: 0 if it contains non intergers, 1 otherwise
  */
int check_param(char *s)
{
	if (!(*s))
		return (1);
	if (*s < '0' || *s > '9')
		return (0);
	return (check_param(++s));
}
