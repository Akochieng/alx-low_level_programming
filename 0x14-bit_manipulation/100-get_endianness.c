#include "main.h"
/**
  *get_endianness - checks the endianness of a computer
  *
  *Return: 0 if big endian or 1 if little endian
  */
int get_endianness(void)
{
	int a = 1;

	if (*(char *)&a == 1)
		return (1);
	return (0);
}
