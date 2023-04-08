#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints the minimum number of coins to make change
  *@argc: the number of arguments in the program
  *@argv: the arguments accepted by the program
  *Description: computes the minimum number of coins needed to make change,
  *only accepting one argument, and printing error if more or less args are
  *added.
  *Return: 0 if successful or 1 if error
  */
int main(int argc, char **argv)
{
	int amount, coins, counter, state;
	int values[5] = {25, 10, 5, 2, 1};

	coins = state = 0;
	if (argc == 2)
	{
		amount = atoi(*++argv);
		for (counter = 0; counter < 5; counter++)
		{
			coins += amount / *(values + counter);
			amount = amount % *(values + counter);
		}
	}
	else
		state = 1;
	state == 0 ? printf("%d\n", coins >= 0 ? coins : 0) : printf("%s\n", "Error");
	return (state);
}
