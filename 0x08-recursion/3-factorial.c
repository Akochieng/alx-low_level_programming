#include "main.h"

/**
  *factorial - function to calculate the factorial of a number
  *@n: the number
  *Description: uses recursion
  *Return: -1 on failure, the factorial otherwise
  */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
