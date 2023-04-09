#include <stdio.h>
/**
  *_abs - computes the absoulute value of an interger
  *
  *@a: interger whose absolute value is to be determined
  *Description: function returns the absolute value of parameter a
  *Return: the absolute value
  */
int _abs(int a)
{
	int result;

	return (result = a > 0 ? a : -a);
}
