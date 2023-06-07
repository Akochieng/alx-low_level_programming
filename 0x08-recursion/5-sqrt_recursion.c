#include "main.h"
/**
  *_sqrt_recursion - function to compute the square root of a function
  *@n: the number whose square root is to be computed
  *Description: uses a supporting recursive function
  *Return: -1 on failure or the square root of the number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (sqrt_spt(n / 2, n));
}

/**
  *sqrt_spt - supporting function to compute square root of n
  *@x: interger to be checked whether it is square root of n
  *@n: the number whose square root is to be computed
  *Description: recursively tests whether x is square root of n
  *and reduces if more and not square root
  *Return: -1 on failure or square root of n
  */
int sqrt_spt(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (-1);
	return (sqrt_spt(x - 1, n));
}
