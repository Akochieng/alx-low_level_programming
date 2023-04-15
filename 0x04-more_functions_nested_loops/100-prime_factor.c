#include <stdio.h>
#include <math.h>
/**
  *main - print the largest prime number that can divide 612852475143
  *
  *Description: prints the largest prime number that can divide 612852475143
  *and prints it with a helper function primecalc.
  *Return: (0) for success
  */
int main(void)
{
	long int n, primenum;

	n = 612852475143;
	while (primenum < sqrt(n))
	{
		primenum = primecalc(n);
		while (n % primenum == 0 && n != primenum)
			n = n / primenum;
	}
	printf("%ld\n", primenum);
	return (0);

}
/**
  *primecalc - looks for the largest prime number that can divide a number n
  *@n: the number whose prime number is to be computed
  *Description: as a helper function, it increments a number num until the
  *largest prime number that can divide n is reached. If num becomes equal
  *or larger than the sqrt of n, then num is taken to be equal to n
  *Return: long int version of the largest prime number that can divide n
  */

long int primecalc(long int n)
{
	long int num = 2;

	while (n % num != 0 && num++ < sqrt(n))
		;
	num = num < sqrt(n) ? num : n;
	return (num);
}
