#include <stdio.h>

/**
  *main - prints all possible combinations of single digit numbers of base 10
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
