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
	int res;

	if (x == 0)
		res = 0;
	else if (y == 0)
		res = 1;
	else if (y < 0)
		res = -1;
	else
		res = x * _pow_recursion(x, --y);
	return (res);
}
