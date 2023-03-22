#include <stdio.h>
#include "main.h"
/**
  *print_times_table - prints the n times table starting with 0
  *@n: is the value of the number that the table will be based on
  *@a: counter for the first loop
  *@b: counter for the second loop
  *
  *Description: the function prints the n times table starting 
  *with 0, if the number is greater than 15 or less than 0,
  *then nothing is printed
  *
  *Return: void
  */

void print_times_table(int n)
{
	int a, b;

	a = 0;
	if ((n >= 0) && (n < 15))
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{	
				if (b == 0)
					printf("%d,", a * b);
				else if (b < n)
					printf(" %3d,", a * b);
				else
					printf(" %3d\n", a * b);
				b++;
			}
			a++;
		}

}
