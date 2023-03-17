#include <stdio.h>

/**
  *main - prints all possible combinations of single digit numbers of base 10
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = '0'; i <= '8'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
