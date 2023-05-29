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
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len, n2len;
	char rem;
	char *result = r;

	rem = n1len = n2len = 0;
	while (*n1++ != '\0')
		n1len++;
	n1 -= 1;
	while (*n2++ != '\0')
		n2len++;
	n2 -= 1;
	r = r + size_r -1;
	if (n1len > size_r || n2len > size_r)
		result = 0;
	else
	{
		while (n1len-- >= 0 || n2len-- >= 0)
		{
			if (n1len >= 0 && n2len > 0)
			{
				rem = add_char(rem, *n1, *n2, *r);
				n1--;
				n2--;
				r--;
			}
			else if (n1len >= 0 && n2len < 0)
				*r = *n1--;
			else
				*r = *n2--;
		}
	}
	return (result);
}
char add_char(char c, char a, char b, char *r)
{
	char remainder;
	char result;
	result = *a % 48 + *b % 48 + c % 48;
	*r = (result % 10) + 48;
	return ((result / 10) + 48);
}
