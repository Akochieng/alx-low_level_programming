#include <stdio.h>

/**
  *main - prints the alphabet in both capital and small case
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
