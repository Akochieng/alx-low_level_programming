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

	prev = temp = 0;
	cur = sum = 1;
	while (cur <= LIMIT)
	{
		temp = cur;
		cur = cur + prev;
		prev = temp;
		sum = sum + cur;
	}
	printf("%ld\n", sum);
	return (0);
}
