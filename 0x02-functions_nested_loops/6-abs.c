#include <stdio.h>
#include "main.h"
/**
  *_abs - computes the absoulute value of an interger
  *
  *int a - the input digit
  *
  *Return: the absolute value
  */
int _abs(int a)
{
	int result;

	return (result = a > 0 ? a : -a);
}
