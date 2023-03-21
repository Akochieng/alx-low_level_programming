#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - counts to 98
  *
  *@n: is the starting point of the counting
  *DescriptionL program printing the countdown from n to 98
  *Return: void
  */

void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
		{
			printf("%d, ",n--);
		}
	else
		while (n < 98)
			printf("%d. ",n++);
	if (n == 98)
		printf("%d\n",n);
}
