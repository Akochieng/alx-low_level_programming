#include <stdio.h>
/**
  *main - prints the first 98 fibonacci numbers
  *
  *Description: prints the first 98 fibonacci numbers followed
  *by a new line
  *Return: 0 (success)
  */




int main(void)
{
	long double cur, prev, temp;
	int counter;

	prev = temp = 0;
	counter = 0;
	cur = 1;
	while (counter <= 98)
	{
		temp = cur;
		cur = cur + prev;
		prev = temp;
		counter++;
		if (counter == 98)
			printf("%.0Lf\n", cur);
		else if (counter < 98)
			printf("%.0Lf, ", cur);
	}
	return (0);
}
