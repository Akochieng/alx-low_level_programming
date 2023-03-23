#include <stdio.h>

/**
  *more_numbers - prints 10 times the numbers from 0 to 14
  *
  *Description: prints 10 times the numbers from 0 to 14
  *using a max of 3 putchar
  *Return void
  */

void more_numbers(void)
{
	int i, t;

	i = 0;
	while (i++ < 10)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
				putchar('0' + (t / 10));
			putchar('0' + (t % 10));
		}
		putchar('\n');
	}

}
