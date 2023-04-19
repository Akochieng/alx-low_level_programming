#include <stdio.h>

/**
  *op_add - returns the sum of a and b
  *@a: int to add
  *@b: int to add
  *
  *Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - returns the sum of a and b
  *@a: int
  *@b: int
  *
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - returns the product of a and b
  *@a: int
  *@b: int
  *
  *Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - returns the div of a and b
  *@a: int
  *@b: int
  *
  *Return: div of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - returns the remainder of a / b
  *@a: int
  *@b: int
  *
  *Return: modulus a % b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
