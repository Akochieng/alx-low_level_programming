#include <stdio.h>

/**
  *main - prints the alphabet in lower case
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
