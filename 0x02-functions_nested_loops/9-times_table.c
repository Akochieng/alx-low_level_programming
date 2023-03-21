#include <stdio.h>
#include "main.h"
/**
  *times_table - prints the 9 times table starting with 0
  *Returns: void
  *
  */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if ((i * j) / 10 > 0)
				putchar('0' + (i * j) / 10);
			else if (j == 0)
				;
			else
				putchar(' ');
			putchar('0' + (i * j) % 10);
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
