#include "main.h"
/**
  *get_endianness - function to check the endianness of a machine
  *
  *Return: 1 for little endian, 0 otherwise
  */
int get_endianness(void)
{
	int a = 1;
	char *c;
	int *b = &a;

	c = (char *)b;
	if (*c == 1)
		return (1);
	else
		return (0);
}
