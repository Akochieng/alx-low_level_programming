#include <stdio.h>
#include <stdlib.h>

/**
  *main - function to compute the number of coins
  *@argc: number of arguments passed
  *@argv: the arguments
  *
  *Return: (0) on success, 1 otherwise
  */
int main(int argc, char **argv)
{
	int value, i, coins;
	int denominations[4] = { 25, 10, 5, 2 };

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	value = atoi(argv[1]);
	if (value >= 0)
	{
		for (i = 0; i < 4; i++)
		{
			coins += value / denominations[i];
			value = value % denominations[i];
		}
		coins += value;
	}
	printf("%d\n", coins);
	return (0);
}
