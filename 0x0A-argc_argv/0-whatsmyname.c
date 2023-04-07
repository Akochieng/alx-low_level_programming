#include <stdio.h>
/**
  *main - program that prints its name
  *@argc: the number of arguments accepted by main
  *@argv: the arguments accepted by main
  *Description: prints its right name even if after it is changed
  *Return: O if successful
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
