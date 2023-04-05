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
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
	{
		return (n / 2 * (n / 2 - 1));
	}
}
