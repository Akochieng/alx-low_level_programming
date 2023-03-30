#include "main.h"
/**
  *leet - encodes a string into 1337
  *@a: pointer to the string
  *Description: encodes a string into 1337. letters a or A replaced by 4
  *letters e and E replaced by 3, o and O replaced by 0, t and T replaced
  *by 7 and letters l and L replaced by 1
  *Return: the encoded string
  */
char *leet(char *lz)
{
	enum encoder{
		o = 0,
		l = 1,
		e = 3,
		a = 4,
		t = 7,
		A = a,
		E = e,
		O = o,
		T = t,
		L = l
	};

	char *temp = lz;
	int b;

	while (*temp != '\0')
	{
		for(b = o; b <= L; b++)
			if (*temp == encoder[b])
				*temp = encoder[b];
		temp++;
	}
	return (lz);
}
