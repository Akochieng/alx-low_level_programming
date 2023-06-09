#include <stdio.h>
#include <stdlib.h>
/**
  *main - program that prints multiplication of two arguments
  *@argc: the number of arguments
  *@argv: the arguments
  *
  *Return: 1 on error, otherwise 0
  */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
