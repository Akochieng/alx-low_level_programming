#include <stdio.h>
/**
  *main - program that prints the number of arguments passed to it
  *@argc: the number of arguments including the function itself
  *@argv: the arguments passed into the function
  *Description: prints the number of arguments passed to it
  *Return: 0 success
  */
int main(int argc, char *argv[])
{
	**argv++;
	printf("%d\n", argc - 1);
	return (0);
}
