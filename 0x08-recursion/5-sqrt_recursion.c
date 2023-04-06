#include "main.h"
/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: number whose square root is to be computed
  *Description: returns the natural square root of a number
  *using recurssion
  *Return: square root of the number
  */
int _sqrt_recursion(int n)
{
	int res = 0;

	if (n < 0)
		res = -1;
	else
		test_sqrt(n, &res);
	return (res);
}
/**
  *test_sqrt - recursively looks for square root of n.
  *@a: pointer to the assumed square root of n
  *@n: number whose square root is to be computed
  *Description: recursively tests whether *a is the square root of n, if not,
  *it increases *a by 1 until square of *a is equal or exceeds n.
  *Return: void.
  */
void test_sqrt(int n, int *a)
{
	if (*a * *a > n)
		*a = -1;
	else if ((*a * *a) < n)
	{
		*a += 1;
		test_sqrt(n, a);
	}
}
