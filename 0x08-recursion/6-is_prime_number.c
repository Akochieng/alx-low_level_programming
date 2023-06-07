#include "main.h"
/**
  *is_prime_number - checks whether a number is a prime number
  *@n: the number to be checked
  *Description: uses a supporting function
  *Return: 1 if prime, otherwise 0
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	return (prime_test(n / 2, n));
}
/**
  *prime_test - tests whether n is divisible by x
  *@n: the number
  *@x: the number to be used to test
  *
  *Return: 1 if prime, 0 otherwise
  */
int prime_test(int x, int n)
{
	if (x == 2)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime_test(x - 1, n));
}
