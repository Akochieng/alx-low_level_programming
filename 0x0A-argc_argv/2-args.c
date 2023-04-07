#include <stdio.h>
/**
  *main - program that prints all the arguments it received
  *@argc: the number of arguments including the function itself
  *@argv: the arguments passed into the function
  *Description: prints all the arguments passed to it
  *Return: 0 success
  */
int main(int argc, char *argv[])
{
	while (argc-- > 0)
		printf("%s\n", *argv++);
	return (0);
}
