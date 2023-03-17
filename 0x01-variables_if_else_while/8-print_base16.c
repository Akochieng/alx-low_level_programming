#include <stdio.h>

/**
  *main - prints all the single digit numbers of base 10
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
