#include "main.h"
/**
  *factorial - returns the factorial of a given number
  *@n: the number
  *Description: return the factorial of a given number and returns -1 if
  *an error.
  *Return: the factorial of a number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
