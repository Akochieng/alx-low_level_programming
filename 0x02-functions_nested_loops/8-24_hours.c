#include "main.h"
#include <stdio.h>
/**
  *jack_bauer - prints every minute of Jack Bauer's day
  *
  *Description: prints every minute and hour of Jack Bauer's day
  *Return: void
  */
void jack_bauer(void)
{
	int min, hrs;

	hrs = 0;
	while (hrs < 24)
	{
		min = 0;
		while (min < 60)
		{
			putchar('0' + (hrs / 10));
			putchar('0' + (hrs % 10));
			putchar(':');
			putchar('0' + (min / 10));
			putchar('0' + (min % 10));
			min++;
			putchar('\n');
		}
		hrs++;
	}
}

