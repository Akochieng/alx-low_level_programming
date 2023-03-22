#include <stdio.h>
#define LIMIT 4000000
/**
  *main - prints the sum of fibonnacci numbers not exceeding LIMIT
  *
  *Description: prints the sum of fibonnacci numbers not exceeding LIMIT
  *followed by a new line
  *Return: 0 (success)
  */




int main(void)
{
	long int cur, prev, temp;
	long int sum;

	prev = temp = sum = 0;
	cur = 1;
	while (cur < LIMIT)
	{
		temp = cur;
		cur = cur + prev;
		prev = temp;
		sum = (cur % 2 == 0) ? sum + cur : sum;
	}
	printf("%ld\n", sum);
	return (0);
}
