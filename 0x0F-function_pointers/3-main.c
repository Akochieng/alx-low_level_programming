#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	char *oper;
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper = argv[2];
	res = get_op_func(oper)( a, b);
	printf("%d\n", res);
	return (0);
}
