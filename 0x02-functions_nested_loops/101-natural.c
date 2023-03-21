#include <stdio.h>
/**
  *main - computes the sum of multiples of 3 or 5 under 1024
  *
  *Description: computes the sum of multiples of 3 or 5
  *Return: 0 (success)
  */

int main(void)
{
	int sum, n;

	n = sum = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
