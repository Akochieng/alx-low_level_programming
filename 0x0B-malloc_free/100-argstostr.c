#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *argstostr - concatanates all the arguments of a program
  *@ac: number of arguments passed
  *@av: the pointer to the arguments
  *Description: concatenates arguments to a program into a string with each
  *followed by a new line
  *Return: the new pointer
  */
char *argstostr(int ac, char **av)
{
	int i = 1;
	int size = 0;
	char *str, *temp;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		size = size + strlen(av[i]) + 1;
		i++;
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	temp = str;
	while (i < ac)
	{
		printf("%d\t%s\n", i, temp);
		temp = stpcpy(temp, av[i]);
		*++temp = '\n';
		i++;
		temp++;
	}
	*temp = '\0';
	return (str);
}
