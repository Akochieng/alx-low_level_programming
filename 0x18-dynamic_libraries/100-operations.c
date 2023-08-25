#include "operations.h"
/**
  *add - adds intergers a and b
  *@a: interger
  *@b: interger
  *
  *Return: sum of a and b
  */
int add(int a, int b)
{
	return (a + b);
}
/**
  *sub - subtracts intergers a and b
  *@a: interger
  *@b: interger
  *
  *Return: sub of a and b
  */
int sub(int a, int b)
{
	return (a - b);
}
/**
  *mul - multiplies intergers a and b
  *@a: interger
  *@b: interger
  *
  *Return: product of a and b
  */
int mul(int a, int b)
{
	return (a * b);
}
/**
  *add - div intergers a and b
  *@a: interger
  *@b: interger
  *
  *Return: div of a and b
  */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
  *add - mod intergers a and b
  *@a: interger
  *@b: interger
  *
  *Return: mod of a and b
  */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
