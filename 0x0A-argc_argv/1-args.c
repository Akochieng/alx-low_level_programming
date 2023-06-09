#include <stdio.h>
/**
  *main - function that prints the number arguments passed
  *@argc: the number of arguments passed
  *@argv: the variables passed
  *
  *Return: 0
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
