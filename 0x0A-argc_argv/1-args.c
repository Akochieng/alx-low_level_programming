#include <stdio.h>
/**
  *main - program that prints the number of arguments passed to it
  *@argc: the number of arguments including the function itself
  *@argv: the arguments passed into the function
  *Description: prints the number of arguments passed to it
  *Return: 0 success
  */
int main(int argc, char **argv)
{
	char *temp = *argv;
	int i = 0;

	while (--argc > 0)
	{
		temp++;
	}
	i = temp - *argv;
	printf("%d\n", i);
	return (0);
}
