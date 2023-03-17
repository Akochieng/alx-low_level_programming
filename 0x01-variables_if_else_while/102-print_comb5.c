#include <stdio.h>

/**
  *main - prints all possible combinations of two digits
  *
  *Return: 0 (Success)
  */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = i; k <= '9'; k++)
				for (l = j; l <= '9'; l++)
					if (!((i == j) && (j == k) && (k == l) && (l == i)))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(',');
					}
	putchar('\n');
	return (0);
}
