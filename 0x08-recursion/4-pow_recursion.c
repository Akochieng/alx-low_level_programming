#include "main.h"
/**
  *_pow_recursion - returns the value of x raised to the power of y
  *@x:base interger
  *@y: the power of x
  *Description: returns the value of x raised to the power of y
  *using recurssion
  *Return: value of x raised to y
  */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
	{
		return (x * _pow_recursion(x, --y));
	}
}
