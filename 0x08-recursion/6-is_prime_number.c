#include "main.h"
#define yes 1
#define no 0
/**
  *is_prime_number - checks whether a number is a prime number
  *@n: the number to be checked
  *Description: checks whether a number is a prime number
  *and returns 1 if true or 0 or false.
  *Return: 1 if a number is a prime number or 0 if false.
  */
int is_prime_number(int n)
{
	int state = yes;
	int temp = 2;

	if (n <= 1 || (n > 2 && n % 2 == 0))
		state = no;
	else if (n > 2)
		divisor(&n, &temp, &state);
	return (state);
}
/**
  *divisor - tests whether variable n can be divided by a without remainder
  *@n: number to be tested for divisibility.
  *@a: pointer to temp that is used to check whether it is a divisor
  *to n.
  *@state: maintains state whether there is a number that has
  *divided n with no remainder.
  *Description: sets state to no if a can divide n without remainder.
  *Return: void
  */
void divisor(int *n, int *a, int *state)
{
	if ((*a < *n / 3) && *state)
	{
		if (*n % *a != 0)
		{
			*a += 2;
			divisor(n, a, state);
		}
		else
			*state = no;
	}
}
