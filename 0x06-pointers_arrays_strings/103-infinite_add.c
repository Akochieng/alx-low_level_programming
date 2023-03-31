#include "main.h"
/**
  *infinite_add - adds two numbers and stores them in the buffer
  *@n1: the first number
  *@n2: the second number
  *@r: the buffer that stores the result
  *@size_r: the size of the buffer
  *Description: adds two numbers and stores the result in the buffer
  *if the result cannot be stored in r, the function returns 0
  *Result: sum of n1 and n2 or 0.
  */
char *infinite_add(char *n1,
	int n1len, n2len;
	char rem;

	n1len = n2len = 0;
}
char add_char(char c, char *a, char *b, char *r)
{
	char remainder;
	char result;
	result = *a % 48 + *b % 48 + c % 48;
	*r = (result % 10) + 48;
	return ((result / 10) + 48);
}
