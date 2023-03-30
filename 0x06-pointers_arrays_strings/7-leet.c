#include "main.h"
/**
  *leet - encodes a string into 1337
  *@a: pointer to the string
  *Description: encodes a string into 1337. letters a or A replaced by 4
  *letters e and E replaced by 3, o and O replaced by 0, t and T replaced
  *by 7 and letters l and L replaced by 1
  *Return: the encoded string
  */
char *leet(char *a)
{
	do{
		if (*a == 'a' || *a == 'A')
			*a = 4 + '0';
		else if (*a == 'e' || *a == 'E')
			*a = 3 + '0';
		else if (*a == 'o' || *a == 'O')
			*a = 0 + '0';
		else if (*a == 't' || *a == 'T')
			*a = 7 + '0';
		else if (*a == 'l' || *a == 'L')
			*a = 1 + '0';
	}while(*a++);
	return (a);
}
